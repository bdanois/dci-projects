//---------------------DIAMOND.CPP-------------------------
#include <iostream>
#include <cmath>
#include <iomanip>
#include "diamond.h"

using namespace std;

Diamond::Diamond(int sideSize, char borderChar, char fillChar)
{
	if(sideSize<1)
		size=1;
	else if (sideSize>39)
		size=39;
	else
		size=sideSize;
		
	if (borderChar<127 && borderChar>32)
		border = borderChar;
	else
		border='#';
	
	if (fillChar<127 && fillChar>32)
		fill = fillChar;
	else
		fill = '*';
}

int Diamond::GetSize()
{
	return size;
}	

int Diamond::Perimeter()
{
	return ((size)*4);
}

double Diamond::Area()
{
	double base = size; //arithmetic w/ an int would result in an int, double is needed for return type
	double height = (base/2)*(sqrt(3));
//the height of a 30/60/90 triangle is x root 3 in this case x is size/2
//the formula for area of a triangle is base*height/2, but there are 2 triangles
	return (base*height);
}

void Diamond::Grow()
{
	if(size!=39)
		size++;
}

void Diamond::Shrink()
{
	if (size!=1)
		size--;
}


void Diamond::SetBorder(char borderChar)
{
	if (borderChar<127 && borderChar>32)
		border =borderChar;	
	else
		border='#';
}

void Diamond::SetFill(char fillChar)
{
	if (fillChar<127 && fillChar>32)
		fill=fillChar;
	else
		fill='*';
}

void Diamond::Draw()
{
	int countBorder=1;
	int s=size;
	int v=size;
	int a=size;

	if(size<3)
	{
		for (int i=0;i<size;i++)
			cout << " ";
		cout << border << endl;
	}
	else
	{
		while (countBorder<3)
		{		
			for (int i=0;i<s;i++)
				cout << " ";

			s--;
			for(int i=0;i<countBorder;i++)
				cout << border << " ";

				cout<< endl;
				countBorder++;
		}
		
		while (countBorder<size)
		{
			for(int i=0; i<s;i++)
				cout << " ";
		
			cout << border << " ";
			
			for(int i = 0;i<countBorder-2;i++)
				cout << fill << " ";
				cout << border << endl;
			
			countBorder++;
			s--;
		}

		while(countBorder>2)
		{
			for(int i=0;i<s;i++)
			cout << " ";
		
			cout << border << " ";

			for (int i=0;i<v-2;i++)
				cout << fill << " ";
			cout << border << endl;

			countBorder--;
			s++;
			v--;
		}
	}
	if(size>1)
	{		
			for(int i=0;i<a-1;i++)
				cout << " ";
			cout << border << " " << border << endl;
			
			a++;
		
			for(int i=0;i<a-1;i++)
				cout << " ";
			cout << border<< endl;
	}
	cout << endl;
}

void Diamond::Summary()
{
	cout << "Size of diamond's side = " << GetSize() << endl;
	cout << "Perimeter of diamond = " << Perimeter() << endl;
	cout << "Area of diamond = " <<  fixed << showpoint << setprecision(2) << Area() << endl;
	cout << "Diamond looks like: " << endl;
	Draw();
}