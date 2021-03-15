//---------------------------------------------------------------------------

#ifndef FigureH
#pragma  once
#define FigureH
//---------------------------------------------------------------------------
#endif

#include <vcl.h>

class Figure
{ protected:
	  int x1, y1;
	  float P, S, xc, yc;
  public:
	  Figure(int x, int y)
	  {
		  x1 = x;
		  y1 = y;
	  }
};

