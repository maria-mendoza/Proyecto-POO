//
// Created by rumin on 25/11/2019.
//

#ifndef NATRMARR_TIPOS_H
#define NATRMARR_TIPOS_H

#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
#include <random>
#include <fstream>
using namespace std;


#include <cstdlib>

using namespace std;
typedef int TipoEntero;
const int n=10; // horizontal size of the map
const int m=10; // vertical size size of the map
static int closed_nodes_map[n][m]; // map of closed (tried-out) nodes
static int open_nodes_map[n][m]; // map of open (not-yet-tried) nodes
static int dir_map[n][m]; // map of directions
const int dir=4; // number of possible directions to go at any position
// if dir==4
//static int dx[dir]={1, 0, -1, 0};
//static int dy[dir]={0, 1, 0, -1};
// if dir==8

static int dx[dir]={1, 0, -1, 0};
static int dy[dir]={0, 1, 0, -1};



#endif //NATRMARR_TIPOS_H
