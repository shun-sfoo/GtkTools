#ifndef _BALL_H_
#define _BALL_H_

#include "scene.h"

struct _Circle {
  int x;
  int y;
  int r;
  int vx;
  int vy;
};

typedef struct _Circle Circle;

void
CircleInit (Circle *circles, int n);

void
CircleMove (Circle *circles, int n);

#endif
