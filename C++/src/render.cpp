#include "raylib.h"
#include "config.h"
#include "types.h"
#include "render.h"


void drawVerticalLines(int windowSize,int grid,int cellSize){
//lines creation 

for(int i=1;i<grid;i++){
float line=i*cellSize;

//vector start{x,y}  vector end {x,y}, thickness , color
DrawLineEx({line,0.0f},{line,600.0f},5.0,RED);



}}


// horizontal lines creation 
void drawHorizontalLines(int windowSize,int grid,int cellSize){
//lines creation 

for(int i=1;i<grid;i++){
float line=i*cellSize;

//vector start{x,y}  vector end {x,y}, thickness , color
DrawLineEx({0.0f,line},{600.0f,line},5.0,RED);



}}


// Draw Circle 
void drawCircle(Vector2 co_ordinates){

DrawCircleV(co_ordinates,30.0,circleColor); 
}


void drawCross(Vector2 co_ordinates){
//using Rectangle struct defined in raylib.h library for 4 floats 
Rectangle shape={co_ordinates.x,co_ordinates.y,crossWidth,crossHeight};
Vector2 origin={crossWidth/2.0f,crossHeight/2.0f};
DrawRectanglePro(shape,origin,45,circleColor);
DrawRectanglePro(shape,origin,135,circleColor);
}