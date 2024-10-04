DIJKSTRA'S FOR MY WALK TO SCHOOL

V is the set of all vertices.

Edges are pairs of two distinct vertices in V.
    -Some edges represent crosswalks, which have a probability of either waiting for 1min, or going across right away.
    -The "off campus" edges are more clear, as they are street corners and streets. People have less to do with the weights of edges.
    -The "on campus" edges might have varying weights as depending on the time of day, campus could be busy or not. 
    -The weights of edges will be calculated in seconds as to work with base 10 easier.



TODO

    make default prev node NULL or something

    Add the rest of the vertices and edges, make data better

    Have some sort of input for a target node (to some node, from some node) and show the whole path.
    ex) from home to science building the quickest route is (home->apartments->.....N1001)

    Make a function that converts seconds to minutes ( (float S) => return char * MM:SS:MS ) for clean output

    Previous node needs a value for when it is undefined



File Structure

-> maybe file for data constants

WTS/
|
|-src/
| |-main.c
| |-functions.c
|
|
|
|
|-include/
| |-functions.h
|
|
|
|


NAMES OF ALL NODES


IF EDGE IS PRESENT, ADJ MATRIX IS THE WEIGHT, ELSE 0

//off campus
HOME
HICKORY/ALBERT
HICKORY/HEMLOCK
HICKORY/LARCH
HICKORY/HAZEL
HICKORY/KING
APARTMENTS
SIMON'S
ALBERT/ALLY
ALLY/HEMLOCK
BALSAM/LARCH
LAZ BACKDOOR
UNIV/SUNVIEW
UNIV/ALBERT
UNIV/HEMLOCK
UNIV/LAZ
UNIV/HAZEL
UNIV/KING
UNIV/GREENHOUSE
ARTS CORNER
LIBRARY ALLY
AROUND LIBRARY -> shortcut to bricker through parking near bricker res
ALBERT/BRICKER
BRICKER/KING
UNIV/MUSIC

//on campus
BRICKER PARKING
FIELD
RAILING
GREENHOUSE
ARTS LOBBY
STAIRS

