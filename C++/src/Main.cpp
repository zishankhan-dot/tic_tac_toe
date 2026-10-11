#include <iostream>
#include "config.h"
#include "raylib.h"
#include "render.h"
#include "types.h"

using namespace std;



int main(){


/* raylib starter */
InitWindow(windowSize,windowSize,"Tic tac toe Game- Zishan" );


/* game runner 8 */
while(!WindowShouldClose()){


BeginDrawing();
drawVerticalLines(windowSize, gridSize, cellSize);
drawHorizontalLines(windowSize, gridSize, cellSize);

EndDrawing();
}


CloseWindow();
return 0;
}
