#pragma hdrstop

#include "Polygon.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)


 void Pentagon::Show (TCanvas* Canvas)
 {
	  Canvas->Pen->Color=clBlack;
	  Canvas->MoveTo(x1,y1);
	  Canvas->LineTo(x2,y2);
	  Canvas->LineTo(x3,y3);
	  Canvas->LineTo(x4,y4);
	  Canvas->LineTo(x5,y5);
	  Canvas->LineTo(x1,y1);
 }

 void Pentagon::Hide(TCanvas *Canvas)
 {
	  Canvas->Pen->Color=clWhite;
      Canvas->MoveTo(x1,y1);
	  Canvas->LineTo(x2,y2);
	  Canvas->LineTo(x3,y3);
	  Canvas->LineTo(x4,y4);
	  Canvas->LineTo(x5,y5);
	  Canvas->LineTo(x1,y1);
	  Canvas->Pen->Color=clBlack;
 }

 float Pentagon::Sides(int x1, int y1, int x2, int y2)
 {
	 return sqrt(pow(abs(x2-x1),2) + pow(abs(y2-y1),2));
 }

 float Pentagon::Perimetr()
 {
	  float side1 = Sides(x1, y1, x2, y2);
	  float side2 = Sides(x2, y2, x3, y3);
	  float side3 = Sides(x3, y3, x4, y4);
	  float side4 = Sides(x4, y4, x5, y5);
	  float side5 = Sides(x5, y5, x1, y1);
	  P = side1 + side2 + side3 + side3 + side4 + side5;
	  return P;
 }

 float Pentagon::Area()
 {
	  S = 0.5 * abs(x1*y2 + x2*y3 + x3*y4 + x4*y5 + x5*y1
						  - x2*y1 - x3*y2 -x4*y3 - x5*y4 - x1*y5);
      return S;
 }

 float Pentagon::CenterOfMassX()
 {
	 xc = (x1+x2+x3+x4+x5) / 5.0;
	 return xc;
 }

 float Pentagon::CenterOfMassY()
 {
	 yc = (y1+y2+y3+y4+y5) / 5.0;
	 return yc;
 }

 void Pentagon::Move(TCanvas *Canvas, int x, int y)
	 {
		  Hide(Canvas);
		  float difx = x - xc;
		  xc = (float)x;
		  float dify = y - yc;
		  yc = (float)y;
		  x1 += difx;
		  x2 += difx;
		  x3 += difx;
		  x4 += difx;
		  x5 += difx;
		  y1 += dify;
		  y2 += dify;
		  y3 += dify;
		  y4 += dify;
		  y5 += dify;
		  Show(Canvas);
	 }

void Pentagon::Change(TCanvas *Canvas, int t1, int t2, int t3, int t4, int t5)
{
	  Hide(Canvas);
	  x1 += t1/2;
	  x2 += t2/2;
	  x3 += t3/2;
	  x4 += t4/2;
	  x5 += t5/2;
	  y1 += t1/3;
	  y2 += t2/3;
	  y3 += t3/3;
	  y4 += t4/3;
	  y5 += t5/3;
	  Show(Canvas);
}

void Pentagon::Movement(TCanvas *Canvas, int x, int y)
{
	 if(y5 < 250)
	 {
	 Hide(Canvas);
	 x1 += x;
	 x2 += x;
	 x3 += x;
	 x4 += x;
	 x5 += x;
	 y1 += y;
	 y2 += y;
	 y3 += y;
	 y4 += y;
	 y5 += y;
	 Show(Canvas);
	 }
}

void Pentagon::Decrease(TCanvas *Canvas)
{
	if (x2 > x4 + 20)
	{
	Hide(Canvas);
	x1 += 5;
	y1 += 4;
	x2 -= 1;
	y2 += 1;
	x3 -= 1;
	y3 -= 1;
	x4 += 5;
	y4 -= 4;
	x5 += 5;
	y5 -= 5;
	Show(Canvas);
	}
}

void Pentagon::Increase(TCanvas *Canvas)
{
	if (x2 < x4 + 40)
	{
	Hide(Canvas);
	x1 -= 1;
	y1 -= 2;
	x2 += 2;
	y2 -= 1;
	x3 += 2;
	y3 += 1;
	y4 += 3;
	x5 -= 2;
	y5 += 2;
	Show(Canvas);
	}
}


