#include <iostream>

using namespace std;

int main()
{
    int d,h,j,m,sisa;

    cout<<"\t KONVERSI WAKTU \n"<<endl;

    cout<<"Masukan Detik =";cin>>d;

    j=d/3600;
    sisa=d%3600;
    m=sisa/60;
    d=sisa/60;

    cout<<j<<"jam \n"<<m<<"menit \n"<<d<<"detik "<<endl;


    return 0;
}
