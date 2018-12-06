#include <iostream>

using namespace std;

int main()
{
    int angka,pengali,hasil=0;

    cout<<"Masukan bilangan         =";cin>>angka;
    cout<<"Masukan bilangan pengali =";cin>>pengali;

    for(int i=1; i<=pengali; i++)

    {
        hasil+=angka;
    }

    cout<<endl<<"Hasil kali 2 bilangan adalah ="<<hasil;

    cout<<endl;

    return 0;
}
