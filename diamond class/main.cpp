#include <iostream>
#include "diamond.h"

using namespace std;

int main()
{
	Diamond d1(1,'&','^');
	d1.Summary();
	
	cout << endl;
	
	d1.Shrink();
	d1.Summary();
	d1.Grow();
	d1.Draw();
	d1.Grow();
	d1.Draw();

	d1.Summary();
	return 0;
}