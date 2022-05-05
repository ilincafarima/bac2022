#include <iostream>
#include <fstream>
using namespace std;
//bac 2018 sesiunea de baza
int carti[100][100];
int n;
int indice = 0;
int max_vanzari = 0;
int nrCr = 0;
int CR(int i){
for(int i = 0; i<10; i++){
    nrCr +=carti[i][i+1];
}
return nrCr;
}
int main(){
ifstream vanzari("carte.in.txt");
vanzari>>n;
for(int i = 1; i<n-1; i++){
        vanzari>>carti[i][i+1];

}
for(int i = 0; i<n; i++){
    for(int j = 0; i<n; j++){
        if(max_vanzari<CR(carti[i][j])){
    max_vanzari = CR(carti[i][j]);
    indice = i;
}
}
}
 cout<<indice;
}
