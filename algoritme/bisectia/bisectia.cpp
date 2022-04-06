#include <iostream>
#include <cmath>
#include <iomanip>

//metoda bisectiei

using namespace std;
float f(float x)
{
	return //functia
}
int main()
{
	float a, b, c; // a = a; b = b;
	int n; //n = numarul de repetari  
	for(int i = 0; i < n; i++)
	{
		c = (a+b)/2;
		if(f(c) == 0) break; else
			if(f(a) * f(c) > 0) a = c; else b = c;
	}
	cout<<fixed;
	cout<<"solutia este "<<setprecision(5)<<c<<endl;
	return 0;
}
