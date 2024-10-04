#include <stdio.h>
#include <stdlib.h>

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

//constants
#define INF 9999
#define V 19
#define HOME 0
#define SCIENCE_BUILDING 18

//edge weights
#define Home 0.0
#define Home_HickoryAlbert 57.87
#define Home_Apartments 132.6
#define Apartments_Simons 56.43
#define HickoryAlbert_AlbertAlly 91.44
#define AlbertAlly_UnivAlbert 120.00
#define Simons_UnivAlbert 108.3
#define Apartment_UnivSunview 103.81
#define Sunview_UnivAlbert 46.45      //cross
#define AlbertAlly_AllyHemlock 59.14
#define AllyHemlock_UnivLaz 140.65
#define UnivLaz_UnivGreen 30.0         //all lights 30
#define UnivAlbert_Arts 58.75          //cross street
#define UnivAlbert_UnivGreen 102.37    //cross street
#define UnivAlbert_Lib 55.90           //cross street
#define UnivGreen_UnivMusic 70.89
#define UnivGreen_Green 45.0
#define UnivMusic_Field 77.20
#define Art_Stairs 87.58
#define Art_Green 90.05
#define Art_Rail 128.62
#define Green_Rail 70.05
#define Green_Field 118.57
#define Field_Science 117.46
#define Bricker_Science 103.10
#define Stairs_Bricker 118.86
#define Rail_Bricker 89.40
#define Lib_Stairs 101.16

//data structures
typedef enum boolean{
    FALSE = 0,
    TRUE = 1
} BOOLEAN;

//functions

void rPrintPath(int start, int end);
void printPath(int start, int end);
void secToMins(char word[30], double num);
void printResults();
int minDistance(double dist[], BOOLEAN visited[]);
void dijkstra(const double graph[V][V], int start);

#endif /* FUNCTIONS_H_ */