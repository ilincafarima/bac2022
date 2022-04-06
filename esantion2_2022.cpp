#include <iostream>
#include <fstream>
using namespace std;
int marim;
int email[10][10];
int NE(int i)
{
    int sum = 0;
    for (int j = 0; j < marim; j++)
        sum += email[i][j];
    return sum;
}
int main()
{
    ifstream f("email.in.txt");
    f>>marim;
    for (int i = 0; i < marim; i++) {
        for (int j = 0; j < marim; j++) {
            f >> email[i][j];
        }
    }

    int nr_Elevi = 0;
    for (int i = 0; i < marim; i++) {
        if (NE(i) <= 3)
            nr_Elevi += 1;
    }
    ofstream out;
    out.open("email.out.txt");
    out << nr_Elevi;
    cout << nr_Elevi;
}
