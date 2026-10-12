#include <iostream>
#include "config.h"
#include "raylib.h"
#include "render.h"
#include "game.h"
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

if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
getMouse();
}


EndDrawing();
}


CloseWindow();
return 0;
}
