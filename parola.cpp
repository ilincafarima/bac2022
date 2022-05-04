#include <iostream> //edited by fmto
#include <fstream>
#include <string>
using namespace std;
ifstream fin("parola.txt");
string pw;
int nr;
int valid = 0;
bool prelucrare(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (islower(s[i])) return true;
	}
	return false;
}
int main()
{
	
	fin >> nr;
	for (int i = 0; i < nr; i++) {
		cin >> pw;
		valid+=prelucrare(pw);
	}
	cout << valid;
	return 0;
}
