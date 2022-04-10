#include <fstream>
using namespace std;
int main(){
    int m,n,s=0,x,smax=0,nr=0;
    ifstream fi("sondaj.in");
    fi>>n>>m;
    ofstream fo("sondaj.out");
    for(int i=1;i<=n;i++){
        s=0;
        for(int j=1;j<=m;j++){
            fi>>x;
            s=s+x;
        }
        if(s>smax){smax=s;nr=1;}else if(s==smax)nr++;
        fo<<i<<' '<<s<<endl;
    }
    fo<<smax<<endl<<nr;
    return 0;
}
