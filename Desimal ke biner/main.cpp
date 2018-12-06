#include <iostream>
#include <conio.h>

using namespace std;

int main () {


unsigned int bil,bit[50];

cout << "Masukkan bilangan desimal : ";
cin >> bil;

cout << "Maka bilangan " << bil << " dalam biner adalah : " << endl;

unsigned short int y=0;

do {
    bit[y] = bil % 2;
    bil = bil / 2;
    y++;
} while (bil>0);

y = y - 1;

for (int x=y;x>=0;x--) {
    cout << bit[x] << "  ";
}

cout << endl;
getch();

}
