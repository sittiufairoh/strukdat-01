/*
Nama Program	: exercise-04
Nama			: SITTI UFAIROH AZZAHRA
NPM				: 140810180002
Deskriptif		: program ini dibuat average in array
Tahun			: 2019
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, average;

    cout << "masukkan jumlah data: ";
    cin >> n;

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << "masukkan angka: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
