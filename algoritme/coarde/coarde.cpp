#include <iostream>
#include <iomanip>

//metoda coardelor 

using namespace std;
float f(float x)
{
	return //functia
}
int main()
{
	float a, b, c, e, x; //a = a; b = b;
	int n; //n = nr de aproximari
	c = a - (f(a) * (b-a)) / (f(b) - f(a));
	if(f(c) * f(a) < 0) 
	{
		e = a;
		x = b;
	} else 
	{
		e = b;
		x = a;
	}
	for(int i = 0; i < n; i++)
	{
		x = x - (f(x) * (e - x)) / (f(e) - f(x));
	}
	cout<<fixed;
	cout<<"solutia este "<<setprecision(5)<<x<<endl;
	return 0;
}

