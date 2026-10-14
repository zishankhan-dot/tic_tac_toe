#include "render.h"
#include "config.h"
#include "types.h"
#include "raylib.h"
#include <vector>
#include <iostream>

Vector2 getMouse(){
// vector2 is for 2D float x,y struct in raylib 
Vector2 clickLocation=GetMousePosition();
std::cout<<clickLocation.x<<std::endl;
std::cout<<clickLocation.y<<std::endl;

//grid X and grid Y are the cell coordinates for the click
int gridX=clickLocation.x/cellSize;
int gridY=clickLocation.y/cellSize;
std::cout<<"GRID COORDINATES"<<std::endl;
std::cout<<gridX<<std::endl;
std::cout<<gridY<<std::endl;


Vector2 gridLocation;
gridLocation.x=gridX*cellSize+(cellSize/2);
gridLocation.y=gridY*cellSize+(cellSize/2);
std::cout<<"GRID COORDINATES IN VECTOR2"<<std::endl;
std::cout<<gridLocation.x<<std::endl;
std::cout<<gridLocation.y<<std::endl;
return gridLocation;

}









