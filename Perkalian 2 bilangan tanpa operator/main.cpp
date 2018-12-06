#include <iostream>
 using namespace std;

main()
 {
 int angka,pengali,hasil=0; // pendeklarasian variabel yg akan digunakan
 cout<<"masukkan Bilangan         : "; cin>>angka;//input data bilangan yang akan diolah
 cout<<"Masukkan Bilangan Pengali : "; cin>>pengali;//input data bilangan pengali

for(int i=1; i<=pengali; i++)//perulangan untuk menjumlahkan bilangan
 {
 hasil+=angka;// atau bisa ditulis hasil=hasil+angka (nilai hasil diisi dengan penjumlahan bilangan sejumlah bilangan pengali.
 }

cout<<endl<<"hasil kalinya adalah :"<<hasil;// pencetakan hasil

cout<<endl;

 }
