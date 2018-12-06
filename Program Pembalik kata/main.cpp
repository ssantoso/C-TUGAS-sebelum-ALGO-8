#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int main()
{
char kata[20];
int panjang_kata,i;

cout<<"masukan kata : "; cin>>kata;
panjang_kata=strlen(kata);

cout<<"hasil : ";
for(i=panjang_kata;i>=1;i--)
{
char stack=kata[i-1];
cout<<stack;
}
getch();
}
