#include "functions.h"

/**ARRAY DEFINITIONS
 * 
 * All arrays are of length V, one position for each verticy/node.
 * 
 * Each index (i) represents which node we are referring to.
 * ex) index 3 refers to values for the node "Albert/Ally" in all 4 arrays.
 * 
 * previous[i] := prev nodes index. (0 by default)
 * dist[i] := shortest known time to get to node from start. (INF by default)
 * visited[i] := true for values we have already visited. (false by default)
 * nodeNames[i] := the real life name of the node.
 */

int previous[V] = {0};
double dist[V]; 
BOOLEAN visited[V]; 
const char *nodeNames[V] = {
    "Home",
    "Hickory/Albert",
    "Albert/Ally",
    "Ally/Hemlock",
    "Apartments",
    "Univ/Sunview",
    "Simons",
    "Univ/Albert",
    "Univ/Laz",
    "Arts",
    "Library Ally",
    "Univ/Green",
    "Univ/Music",
    "Green",
    "Railing",
    "Stairs",
    "Bricker Parking",
    "Field",
    "Science"
};

/**CONVERT SECONDS TO MINS
 * 
 * Description: Gets mins and seconds from total seconds, format prints values to string.
 * 
 * @param word - string to store formatted numbers in
 * @param num - total seconds
 */
void secToMins(char word[30], double num){

    int num_i = (int)num;

    int mins = num_i / 60;
    int secs = num_i % 60;

    sprintf(word, "%d:%d", mins, secs);
}

//PRINT RESULTS
void printResults(){
    char time[30];

    printf("Here are the fastest times to each node from home.\n");
    printf("\nNode Name:        Minutes:   Previous Node:\n");
    printf("-------------------------------------------\n");

    for (int i = 0; i< V; i++){

        secToMins(time, dist[i]);

        printf("%-17s %-10s %s\n", nodeNames[i], time, nodeNames[previous[i]]);
    }
    printf("\n");
}

/**RECURSIVE PATH PRINT
 * 
 * base case: start of path has been reached, print node name.
 * recurse case: print the path up to the previous node, then print this node.
 * 
 * @param start - index of first node in path
 * @param end - index of last node in path
 * 
 */
void rPrintPath(int start, int end){
    if(end == start){
        printf("%s", nodeNames[start]);
    } else {
        rPrintPath(start, previous[end]);
        printf(" --> %s", nodeNames[end]);
    }
}

/**CONCLUSION PRINT
 * 
 * Conclusion sentence printing full path from start to end.
 * 
 * @param start - index of first node in path
 * @param end - index of last node in path
 * 
 */
void printPath(int start, int end){
    printf("The path from home to science:\n");
    printf("------------------------------\n");
    rPrintPath(start, end);
    printf("\n");
}

/**MIN DISTANCE FUNCTION
 * 
 * Description: Finds the next vertex within sight with the lowset distance that has not yet been visited.
 * Note: Only connected edges have distances less than INF, so we only consider connected nodes.
 * 
 * @param dist - each nodes smallest known distance from start
 * @param visited - list of nodes we have already been to
 * 
 * @return minIndex - the index representing the node with the smallest edge distance.
 */
int minDistance(double dist[], BOOLEAN visited[]){
    double min = INF;
    int minIndex; 

    for(int v = 0; v < V; v++){

        if (visited[v] == FALSE && dist[v] <= min){
            min = dist[v];
            minIndex = v;
        }
    }
    
    return minIndex;
}

/**DIJKSTRA'S SHORTEST DISTANCE ALGORITHM 
 * 
 * STEPS:
 * 
 * 1.INIT VALUES
 * - Initialize the distance from each node start to infinity as we dont know its weight yet. 
 * - Initialize visited to false since we havn't been anywhere yet.
 * - Initialize our starting nodes distance to 0 (its at the start already).
 * 
 * 2. GO TO NEXT NODE
 * - Look at each node connected to current node.
 * - Of those connected nodes, find the node that has both (not been visited) AND (has the smallest distance to start).
 * - Go to this next node, mark it as "visited".
 * 
 * 3. UPDATE DISTANCES
 * - Look at the unvisited nodes that are connected to this node. 
 * - If the distance is shorter to a node by taking this path (dist[u] + graph[u][v]), than the one previously known (dist[v]), set the shortest distance to that node to be this new distance.
 * - When we make a change to a nodes shortest distance, keep track of the previous node inside of previous[].
 * 
 * 4. REPEAT
 * - Complete step 2 and 3 (V-1) times.
 * - We do this because there is no need to go to the last node if the edge is known.
 * 
 * Note: 
 * - We begin at "start" node because it is the only node with distance less than INF. Remember start has weight 0 which is less than INF.
 * 
 * @param graph - a V x V adjacency matrix containing the weight between every pair of nodes.
 * @param start - the index of the node that we want to start at (setting its distance from start to 0.0)
 * 
 */
void dijkstra(const double graph[V][V], int start){

    for (int i = 0; i < V; i++){
        dist[i] = INF;
        visited[i] = FALSE;
    }

    dist[start] = 0.0;

    for (int count = 0; count < V-1; count++){

        int u = minDistance(dist, visited);
        visited[u] = TRUE;

        for (int v = 0;v < V;v++){
            if (!visited[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v]){
                dist[v] = dist[u] + graph[u][v];
                previous[v] = u;
            }
        }
    }
}