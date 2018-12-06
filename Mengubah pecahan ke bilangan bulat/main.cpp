#include <iostream>

using namespace std;

typedef struct pecahan{
    int pb;
    int py;
};
int main(int argc,char *argv[])
{
    pecahan p1,p2;

    cout<<"MENGUBAH PECAHAN KE BILANGAN BULAT"<<endl;
    cout<<"MASUKAN PEMBILANG = ";cin>>p1.pb;
    cout<<"MASUKAN PENYEBUT = ";cin>>p2.py;
    cout<<"\t       "<<p1.pb<<endl;
    cout<<"\t P1 =  -"<<endl;
    cout<<"\t       "<<p2.py<<endl;
        if("/")
        {
            cout<<"HASILNYA ="<<(p1.pb)/(p2.py)<<endl;
        }
    return 0;
}
