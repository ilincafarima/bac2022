#include <iostream>
#include <iomanip>

//metoda lui Newton

using namespace std;
float f(float x)
{
	return //functia
}
float fprim(float x)
{ 
	return //derivata functiei
}
int main()
{
	float a, b, c, x; //a = a; b = b;
	int n; //n = nr de aproximari
	c = a - (f(a) * (b-a))/(f(b) - f(a));
	if(f(c) * f(a) < 0) x = a; else x = b;
	for(int i = 0; i < n; i++)
	{
		x = x - f(x) / fprim(x);
	}
	cout<<fixed;
	cout<<"solutia este "<<setprecision(5)<<x<<endl;
	return 0;
}

