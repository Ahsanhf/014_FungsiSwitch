#include <iostream>
using namespace std;

int bilA, bilB;


void input()
{
	cout << "Masukkan bilangan pertama = ";
	cin >> bilA;
	cout << "Masukkan bilangan kedua = ";
	cin >> bilB;
}

int penjumlahan(Int a, int b)
{
	return a + b;
}

int pengurangan(Int a, int b)
{
	return a - b;
}

int pembagian(Int a, int b)
{
	return a / b;
}

int perkalian(Int a, int b)
{
	return a % b;
}

int main()
{
	int pilihan;
	do
	{
		cout << "Kalkulator Sederhana" << endl;
		cout << "====================" << endl;
		cout << "1. Penjumlahana" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Pembagian" << endl;
		cout << "4. Perkalian" << endl;
		cout << "5. Keluar" << endl;
		cout << "=====================" endl;
		cout << "Masukkan menu pilihan : ";
		cin >> pilihan;
		
		switch (pilihan)
		
	}
}