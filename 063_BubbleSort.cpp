// 063_BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>#
#include <strip>
using namespace std;

int arr(20); // Deklarasi variabel global array a dengan ukuran 20
int n; // deklarasi variabel global n untuk menyimpan banyaknya elemen array

void input() {
	while (true) {
		cout << "Masukan banyaknya elemen pada array :  "; // output ke layar
		cin >> n; // input dari pengguna 
		if (n <= 20) // jika n kurang dari atau sama dengan 20
			break; // keluar dari loop
		else { // jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen \n"; // output ke layar

		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan elemen array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n-1
		cout 

	}
}
