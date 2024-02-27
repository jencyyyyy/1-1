#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <graphics.h>

int main (void)
{
  int i, gd, gm;

  gd = DETECT;
  initgraph (&gd, &gm, "");
  setbkcolor (BLACK);
  cleardevice ();
  outtextxy (0, 0, "Drawing 1000 lines...");
  for (i = 0; i < 1000; i++)
    {
    setcolor (1 + random (15));
    line ( random(getmaxx()), random(getmaxy()),
    random(getmaxx()), random(getmaxy()) );
  }
  getch ();
  closegraph ();
  return 0;
}
