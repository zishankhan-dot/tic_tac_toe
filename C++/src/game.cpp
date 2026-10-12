#include "render.h"
#include "config.h"
#include "types.h"
#include "raylib.h"
#include <vector>
#include <iostream>

void getMouse(){
// vector2 is for 2D float x,y struct in raylib 
Vector2 clickLocation=GetMousePosition();
std::cout<<clickLocation.x<<std::endl;
std::cout<<clickLocation.y<<std::endl;


}


