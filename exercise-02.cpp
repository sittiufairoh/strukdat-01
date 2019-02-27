/*
Nama Program	: exercise-02
Nama			: SITTI UFAIROH AZZAHRA
NPM				: 140810180002
Deskriptif		: program ini dibuat untuk konversi celcius ke fahrenheit
Tahun			: 2019
*/
#include<iostream>
using namespace std;
 
float cel2fah (float temp){
    return temp* 9/5 + 32; // rumus menghitung celcius ke fahrenheit
}
 
int main()
{
	int celcius = 9; // suhu celcius 
	float fahrenheit = cel2fah(celcius);
	cout << "temp is " << fahrenheit;
}

