/*
Nama Program	: exercise-01
Nama			: SITTI UFAIROH AZZAHRA
NPM				: 140810180002
Deskriptif		: program ini dibuat untuk membuat kelipatan 3 dan 5 fizzbuzz
Tahun			: 2019
*/

#include <iostream>  
using namespace std;

void fizzbuzz() // void untuk membuat kondisi fizzbuzz
{
   for (int i = 1; i < 101; ++i)
   {
    	if(i % 3 == 0 && i % 5 == 0) { // kelipatan 3 dan 5 muncul fizzbuzz
	   		cout << "FizzBuzz";}
      	else if (i % 3 == 0) {  // buat kelipatan 3 keluar fizz
			cout << "Fizz";} 
       	else if (i % 5 == 0){ // kelipatan 5 keluar buzz
			cout << "Buzz";}
       else{
	   		cout << i;}
	   	
       cout << endl;
   }
}

int main (){
	fizzbuzz();
}
