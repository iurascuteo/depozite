#include <fstream>
#define N 10005
using namespace std;
ifstream fin("input.dat");
ofstream fout("output.dat");
int n;
int C[N];
int a[N][2];
void read(){
    fin>>n;
    for(int i=1; i<=n; i++)
        fin>>C[i];
    fin.close();
}
int suma(int start, int sfarsit)
{
    int s=0;
    for(int j=start; j<=sfarsit; j++)
        s=s+C[j];
    return s;
}
void calcul_resturi()
{
    for(int i=1; i<=n; i++)
    {
        a[i][1]=suma(1,i);
        a[i][2]=a[i][1]%n;
    }
}
