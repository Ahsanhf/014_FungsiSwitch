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

int penjumlahan(int a, int b)
{
	return a + b;
}

int pengurangan(int a, int b)
{
	return a - b;
}

int pembagian(int a, int b)
{
	return a / b;
}

int perkalian(int a, int b)
{
	return a * b;
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
		cout << "=====================" << endl;
		cout << "Masukkan menu pilihan : ";
		cin >> pilihan;
		
		switch (pilihan)
		{
		case 1:
			cout << "Hasil Penjumlahan = " << penjumlahan(bilA, bilB) << endl;
			break;
		case 2:
			cout << "Hasil Pengurangan = " << pengurangan(bilA, bilB) << endl;
			break;
		case 3:
			cout << "Hasil Pembagian = " << pembagian(bilA, bilB) << endl;
			break;
		case 4:
			cout << "Hasil Perkalian = " << perkalian(bilA, bilB) << endl;
			break;
		case 5:
			break;
		default:
			cout << "Pilihan anda salah" << endl;
			break;
		}
		system("pause");
		system("CLS");

	} while (pilihan != 5);
}