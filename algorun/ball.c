#include <stdio.h>
#include "ball.h"
#include "scene.h"


void 
CircleInit(Circle *circles, int n) {

for (int i = 0; i < N; ++i)
    {
      circles[i].x = (int)(rand () % (WIN_WIDTH - 2 * RADIUS)) + RADIUS;
      circles[i].y = (int)(rand () % (WIN_HEIGHT - 2 * RADIUS)) + RADIUS;
      circles[i].vx = (int)(rand () % 11) - 5;
      circles[i].vy = (int)(rand () % 11) - 5;
    }


}

void
CircleMove (Circle *circles, int n) {
  for (int i = 0; i < n; ++i) {
    if (circles[i].x += circles[i].vx > WIN_WIDTH) {
      circles[i].x = WIN_WIDTH - circles[i].r;
      circles[i].x = -circles[i].x;
    }
    if (circles[i].y += circles[i].vy > WIN_HEIGHT) {
      circles[i].y = WIN_HEIGHT - circles[i].r;
      circles[i].y = -circles[i].y;
    }
  }
}
