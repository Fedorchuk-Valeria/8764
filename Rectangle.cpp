//---------------------------------------------------------------------------

#pragma hdrstop

#include "Rectangle.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

 void Rectan::Show (TCanvas* Canvas)
 {
		Canvas->Pen->Color=clBlack;
		Canvas->Rectangle(x1, y1, x1+width, y1+height);

 }

 void Rectan::Hide(TCanvas *Canvas)
 {
	  Canvas->Pen->Color=clWhite;
	  Canvas->Rectangle(x1, y1, x1+width, y1+height);
	  Canvas->Pen->Color=clBlack;
 }



 float Rectan::Perimetr()
 {
	  P = (height + width) * 2 ;
	  return P;
 }

 float Rectan::Area()
 {
	  S =  height * width;
      return S;
 }

 float Rectan::CenterOfMassX()
 {
	 xc = (x1+x1+width)*2 / 4.0;
	 return xc;
 }

 float Rectan::CenterOfMassY()
 {
	 yc = (y1+y1+height)*2 / 4.0;
	 return yc;
 }

 void Rectan::Move(TCanvas *Canvas, int x, int y)
 {
	  Hide(Canvas);
	  float difx = x - xc;
	  xc = (float)x;
	  float dify = y - yc;
	  yc = (float)y;
	  x1 += difx;
	  y1 += dify;
	  width += difx;
	  height += dify;
	  Show(Canvas);
 }

void Rectan::Change(TCanvas *Canvas, int t1, int t2)
{
	  Hide(Canvas);
	  x1 += t1;
	  y1 += t2;
	  Show(Canvas);
}

void Rectan::Movement(TCanvas *Canvas, int x, int y)
{
	 if(y1 < 200)
	 {
	 Hide(Canvas);
	 x1 += x;
	 y1 += y;
	 Show(Canvas);
     }
}

void Rectan::Decrease(TCanvas *Canvas)
{
	if (x1 < 155)
	{
	Hide(Canvas);
	x1 += 1;
	y1 += 1;
	height -= 1;
	width -= 2;
	Show(Canvas);
	}
}

void Rectan::Increase(TCanvas *Canvas)
{
	if (x1 > 130)
	{
	Hide(Canvas);
	x1 -= 1;
	y1 -= 1;
	height += 1;
	width += 3;
	Show(Canvas);
	}
}
