#include <iostream>
#include <fstream>
using namespace std;
int sum = 0;
int sumStupi = 0;
int cantM, mN;
int Stupi[10];
int MA(int i) {
	if (i > 40)
		return i-= 15;
	else
		return i-= 12;
}
int main()
{
	ifstream f("Miere.in.txt");
	for(int i = 0; i <= 10;i++) {
		f >> Stupi[i];
		}
	for (int i = 0; i <= 10; i++) {
		if (Stupi[i] != 0)
			sumStupi += 1;
		else
			sumStupi += 0;
	}
	for (int i = 0; i <= sumStupi-1; i++) {
		sum += MA(Stupi[i]);
	}
	f.close();
	ofstream out;
	out.open("Miere.out.txt");
	out << sumStupi<< " " << sum;
	return 0;


	}
	