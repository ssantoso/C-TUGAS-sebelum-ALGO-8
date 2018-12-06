#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a,b,c,x;
    cout<<"Masukan A: ";cin>>a;
    cout<<"Masukan B: ";cin>>b;
    cout<<"Masukan C: ";cin>>c;

    if(b < a)
    {
        x=b;
        b=a;
        a=x;
    }
    if(c < a)
    {
        x=c;
        c=a;
        a=x;
    }
    if(c < b)
    {
        x=b;
        b=c;
        c=x;
    }
    cout<<"Bilangan setelah diurutkan :"<<a<<" "<<b<<" "<<c;

    getch();
}
