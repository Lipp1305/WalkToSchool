WALK TO SCHOOL

Short Description:
I used Dijkstra's shortest path algorithm to optimize walk to school.

All of my lectures are in the building that is the furthest walk from my house. In order to get those few extra minutes of sleep in the morning, I decided to make a graph of my walk to class to see which way is fastest. To do this, I highlighted all of the places on my walk where I have multiple options of which path to take.
Then, I timed myself walking each path at a steady pace, recording how long it took to get from each point to another. Once I recorded all of my data, I made an adjacency matrix to represent the paths or "edges" between all of the connected points on the walk. This is a rough visual of the initial graph. The final product has a few minor changes to the nodes and edges inside of the green circle to make walking through campus more clear.
I also omitted a few nodes in the top right of the graph as in real life they are much further and it wouldn't be worth it to record (I didnt want to walk that far). The highlighed green path is the one my code says is the fastest.

The output of the program shows each nodes distance in minutes walked from the source node. It also displays the node which came before it in the quickest path. The last line is the full path from start to finishing at the science building.

Making this was quite fun as the dijkstras algorithm and even the recursive print functions were interesting to mess around with. Maybe in the future I'll make something more complex. Also the results were quite suprising, I expected the fastest route to be through the the Arts building, as that is usually where I walk.

`cd build && make` to build.
`./wts` to run.

![Map](/images/quickestPath.png) 
![Map](/images/sampleOutput.png) 