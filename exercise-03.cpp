/*
Nama Program	: exercise-03
Nama			: SITTI UFAIROH AZZAHRA
NPM				: 140810180002
Deskriptif		: program ini dibuat untuk swap two  number
Tahun			: 2019
*/

#include <iostream>
using namespace std;

// fungsi for swapping the values
void swap(int &x, int &y){
    y = x + y;
    x = y - x;
    y = y - x;
}

int main() {
int x = 5;
int y = 4;
	
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;

	swap(x, y);

	cout << "After swap" << endl;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;

}
