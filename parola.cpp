#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string parole[10];
int nr;
int valid = 0;
bool litera(string x) {
	int lungimea = x.size();
	for (int i = 0; i < lungimea; i++) {
		if (islower(x[i]) == 0) {
			return true;
		}
	}
}
int main()
{
	ifstream par("parola.txt");
	par >> nr;
	for (int i = 0; i < nr; i++) {
		par >> parole[i];
	}
	for (int i = 1; i < nr; i++) {
		valid += litera(parole[i]);
	}
	cout << valid;
	par.close();
	return 0;
}
