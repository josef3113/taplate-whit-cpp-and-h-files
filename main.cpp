#include <iostream>
#include "tryh.h"
#include "Tampl.cpp"

using namespace std;



void main()
{
	
	Tampl <int> test (2);
	cout<<test.mymin(3)<<endl;

	system("pause");
}

