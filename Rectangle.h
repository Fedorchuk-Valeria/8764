//---------------------------------------------------------------------------

#ifndef RectangleH
#define RectangleH
//---------------------------------------------------------------------------
#endif
#include <vcl.h>
#include "Figure.h"

class Rectan : public Figure
{ private:
	int height, width;
  public:
	Rectan(int x, int y, int h, int w) : Figure(x, y)
	{
		 height = h;
         width = w;
	}

	void Show(TCanvas *Canvas);

	void Hide(TCanvas *Canvas);

	float Perimetr();

	float Area();

	float CenterOfMassX();

	float CenterOfMassY();

	void Move(TCanvas *Canvas, int x, int y);

	void Change(TCanvas *Canvas, int t1, int t2);

	void Movement(TCanvas *Canvas, int x, int y);

	void Increase(TCanvas *Canvas);

	void Decrease(TCanvas *Canvas);
};

