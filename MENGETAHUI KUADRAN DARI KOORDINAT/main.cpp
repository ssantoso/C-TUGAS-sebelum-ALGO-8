#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int x,y;

    cout<<"MENGETAHUI KUADRAN DARI INPUT KOORDINAT X DAN Y \n\n"<<endl;
    cout<<"Masukan nilai x:";cin>>x;
    cout<<"Masukan nilai y:";cin>>y;

    if(x>0&&y>0)
        printf("KUADRAN I");
    if(x>0&&y<0)
        printf("KUADRAN II");
    if(x<0&&y<0)
        printf("KUADRAN III");
    if(x<0&&y>0)
        printf("KUADRAN IV");
    if(x==0&&y==0)
        printf("TITIK PUSAT");
    getch();
}
