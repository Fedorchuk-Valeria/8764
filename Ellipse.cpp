

#pragma hdrstop

#include "Ellipse.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Ellip::Show(TCanvas* Canvas)
 {
	  Canvas->Pen->Color=clBlack;
	  Canvas->Ellipse(x1+radius1, y1-radius2, x1 - radius1, y1 + radius1);
 }

 void Ellip::Hide(TCanvas *Canvas)
 {
	  Canvas->Pen->Color=clWhite;
	  Canvas->Ellipse(x1+radius1, y1-radius2, x1 - radius1, y1 + radius1);
	  Canvas->Pen->Color=clBlack;
 }

 float Ellip::Perimetr()
 {
	  P = 4 * (3.14 * radius1 * radius2 + (radius1 - radius1)) / (radius1 + radius2);
	  return P;
 }

 float Ellip::Area()
 {
	  S = 3.14 * radius1 * radius2;
      return S;
 }

 float Ellip::CenterOfMassX()
 {
	 xc = x1;
	 return xc;
 }

 float Ellip::CenterOfMassY()
 {
	 yc = y1;
	 return yc;
 }

 void Ellip::Move(TCanvas *Canvas, int x, int y)
	 {
		  Hide(Canvas);
		  float difx = x - xc;
		  xc = (float)x;
		  float dify = y - yc;
		  yc = (float)y;
		  x1 += difx;
		  y1 += dify;
		  Show(Canvas);
	 }

 void Ellip::Change(TCanvas *Canvas, int a, int b)
{
	  if(radius1 > 10)
	  {
	  Hide(Canvas);
	  radius1 -= a;
	  radius2 -=b;
	  Show(Canvas);
      }
}

void Ellip::Movement(TCanvas *Canvas, int x, int y)
{
	 if(y1 < 250)
	 {
	 Hide(Canvas);
	 x1 += x;
	 y1 += y;
	 Show(Canvas);
	 }
}

void Ellip::Decrease(TCanvas *Canvas)
{
	if (radius2 > 15)
	{
	Hide(Canvas);
	radius1 -= 2;
	radius2 -= 2;
	Show(Canvas);
	}
}

void Ellip::Increase(TCanvas *Canvas)
{
	if (radius1 < 55)
	{
	Hide(Canvas);
	radius1 += 3;
	radius2 += 1;
	Show(Canvas);
	}
}