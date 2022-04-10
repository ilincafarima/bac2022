#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int f,c, nr_tot;
string cvn[20];
int PP(string a) {
	if (a[0] == a.back()) {
		int c = 1;
		return c;
	}
	else
		int c = 0;
		return c;
	};

int main(){
	ifstream cuv("cuvant.in");
	cuv >> f;
	for (int i = 0; i < f; i++) {
		cuv >> cvn[i];
	}
	for (int i = 0; i < f; i++) {
			nr_tot += PP(cvn[i]);
	}
	ofstream out;
	out.open("cuvant.out");
	out<<nr_tot;
	out.close();
	cuv.close();
	return 0;
}
