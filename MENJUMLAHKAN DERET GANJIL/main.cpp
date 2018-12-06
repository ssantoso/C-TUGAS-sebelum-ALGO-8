#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int i,a,jumlah;

    cout<<"Ini adalah deret bilangan :";cin>>a;
    for (i=1;i<=2*a;i++)
    {
        if(i&2!=0)

            cout<<i<<"+";
    }
    cout<<endl;
    cout<<"Jumlah Bilangan Adalah ";
    jumlah=a*a;
    cout<<jumlah;
    return 0;
}
