#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float a,b;
    int kode;

    menu :
        cout<<"SURYO SANTOSO\n\n";
        cout<<"PILIHAN MENU :\n";
        cout<<"1.Penjumlahan \n";
        cout<<"2.Pengurangan \n";
        cout<<"3.Perkalian \n";
        cout<<"4.Pembagian \n\n";
        cout<<"MASUKAN KODE :";cin>>kode;
        if(kode > 4 || kode < 1){
            cout<<"\n Kode yang anda masukan tidak terdaftar \n silahkan masukan ulang kode.";
            system("pause");
            system("cls");
            goto menu;
        }
        else{
            cout<<"Masukan angka pertama    :";cin>>a;
            cout<<"Masukan angka kedua      :";cin>>b;
            if(kode ==1){
                cout<<"\n Hasil penjumlahan dari"<<a<<"+"<<b<<"adalah="<<a+b<<endl;
            }
            else if (kode ==2){
                cout<<"\n Hasil pengurangan dari"<<a<<"-"<<b<<"adalah="<<a-b<<endl;
            }
             else if (kode ==3){
                cout<<"\n Hasil perkalian dari"<<a<<"*"<<b<<"adalah="<<a*b<<endl;
            }
             else if (kode ==4){
                cout<<"\n Hasil pembagian dari"<<a<<"/"<<b<<"adalah="<<a/b<<endl;
            }
        }
    return 0;
}
