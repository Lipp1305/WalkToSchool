#include "functions.h"

//adjacency matrix
const double graph[V][V] = {
    {0.0, Home_HickoryAlbert, 0.0, 0.0, Home_Apartments, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
    {Home_HickoryAlbert, 0.0, HickoryAlbert_AlbertAlly, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
    {0.0, HickoryAlbert_AlbertAlly, 0.0, AlbertAlly_AllyHemlock, 0.0, 0.0, 0.0, AlbertAlly_UnivAlbert, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
    {0.0, 0.0, AlbertAlly_AllyHemlock, 0.0, 0.0, 0.0, 0.0, 0.0, AllyHemlock_UnivLaz, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
    {Home_Apartments, 0.0, 0.0, 0.0, 0.0, Apartment_UnivSunview, Apartments_Simons, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
    {0.0, 0.0, 0.0, 0.0, Apartment_UnivSunview, 0.0, 0.0, Sunview_UnivAlbert, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
    {0.0, 0.0, 0.0, 0.0, Apartments_Simons, 0.0, 0.0, Simons_UnivAlbert, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
    {0.0, 0.0, AlbertAlly_UnivAlbert, 0.0, 0.0, Sunview_UnivAlbert, Simons_UnivAlbert, 0.0, 0.0, UnivAlbert_Arts, UnivAlbert_Lib, UnivAlbert_UnivGreen, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
    {0.0, 0.0, 0.0, AllyHemlock_UnivLaz, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, UnivLaz_UnivGreen, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, UnivAlbert_Arts, 0.0, 0.0, 0.0, 0.0, 0.0, Art_Green, Art_Rail, Art_Stairs, 0.0, 0.0, 0.0},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, UnivAlbert_Lib, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Lib_Stairs, 0.0, 0.0, 0.0},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, UnivAlbert_UnivGreen, UnivLaz_UnivGreen, 0.0, 0.0, 0.0, UnivGreen_UnivMusic, UnivGreen_Green, 0.0, 0.0, 0.0, 0.0, 0.0},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, UnivGreen_UnivMusic, 0.0, 0.0, 0.0, 0.0, 0.0, UnivMusic_Field, 0.0},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Art_Green, 0.0, UnivGreen_Green, 0.0, 0.0, Green_Rail, 0.0, 0.0, Green_Field, 0.0},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Art_Rail, 0.0, 0.0, 0.0, Green_Rail, 0.0, 0.0, Rail_Bricker, 0.0, 0.0},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Art_Stairs, Lib_Stairs, 0.0, 0.0, 0.0, 0.0, 0.0, Stairs_Bricker, 0.0, 0.0},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Rail_Bricker, Stairs_Bricker, 0.0, 0.0, Bricker_Science},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, UnivMusic_Field, Green_Field, 0.0, 0.0, 0.0, 0.0, Field_Science},
    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, Bricker_Science, Field_Science, 0.0}
};

/** --MAIN FUNCTION--
 * 
 * Calls the shortest path algorithm and prints the results.
 * 
 */
int main(void)
{
    printf("Let's find the quickest way to school!\n");

    dijkstra(graph, HOME);

    printResults();
    printPath(HOME, SCIENCE_BUILDING);

    return 0;
}