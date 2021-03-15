//---------------------------------------------------------------------------

#ifndef EllipseH
#pragma once
#define EllipseH
//---------------------------------------------------------------------------
#endif

#include <vcl.h>
#include "Figure.h"

class Ellip : public Figure
{ protected:
	  int radius1, radius2;
  public:
  Ellip(int xt, int yt, int r1, int r2): Figure(xt, yt)
  {
	   radius1 = r1;
	   radius2 = r2;
  }

  Ellip(int x, int y) : Figure(x, y)
  {

  }

  void Show(TCanvas *Canvas);

  void Hide(TCanvas *Canvas);

  float Perimetr();

  float Area();

  float CenterOfMassX();

  float CenterOfMassY();

  void Move(TCanvas *Canvas, int x, int y);

  void Change(TCanvas *Canvas, int a, int b);

  void Movement(TCanvas *Canvas, int x, int y);

  void Increase(TCanvas *Canvas);

  void Decrease(TCanvas *Canvas);

};
