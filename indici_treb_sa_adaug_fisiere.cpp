//12_INF_TEST_REAL_RO_SB17
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int maxNum(int x){
int max = 0;
while ( x > 0 )
{
    int remainder = x % 10;
    if ( remainder > max )
        max = remainder;

    x /= 10;
}
    return max;
}
int main(){

cout<< maxNum(12);
}
