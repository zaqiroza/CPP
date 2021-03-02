// CPP_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int fungsiDenganReturn() {
	//Body

	return 5;
}

void ukuranTipeData() {//fungsi tanpa return
	// C++ program to sizes of data types

	cout << "Size of char : " << sizeof(char)
		<< " byte" << endl;
	cout << "Size of int : " << sizeof(int)
		<< " bytes" << endl;
	cout << "Size of short int : " << sizeof(short int)
		<< " bytes" << endl;
	cout << "Size of long int : " << sizeof(long int)
		<< " bytes" << endl;
	cout << "Size of signed long int : " << sizeof(signed long int)
		<< " bytes" << endl;
	cout << "Size of unsigned long int : " << sizeof(unsigned long int)
		<< " bytes" << endl;
	cout << "Size of float : " << sizeof(float)
		<< " bytes" << endl;
	cout << "Size of double : " << sizeof(double)
		<< " bytes" << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t)
		<< " bytes" << endl;

}

int main()
{
	string kataPembuka = "Hello World!";//variabel string = huruf dan angka
	string firstName = "John";
	string lastName = "Doe";
	string fullName = firstName + " " + lastName;
	char iniKarakter[6] = "abc12";//karakter a,b,c,d,e,null
	int iniInteger = 2021;//integer menyimpan bilangan bulat - atau +
	unsigned int iniIntegerPlus = 14523;//integer khusus bilangan positif
	long int iniLongInteger = 78125387;//perpanjangan dari integer
	float iniFloat = 3.14;//bilangan berkoma/pecahan
	double iniDouble = 6152.7652;//kapasitas lebih besar dari float
	bool kondisi = true;

	cout << "Kata Pembuka: " << kataPembuka << "\n";
	//       Kata Pembuka: Hello World!
	cout << "Ini Integer : " << iniInteger << endl;
	//       Ini Integer: 2021

	int nilaiReturn = 0;
	cout << "nilaiReturn awal: " << nilaiReturn << endl;
	nilaiReturn = fungsiDenganReturn();
	cout << "nilaiReturn setelah memanggil fungsi: " << nilaiReturn << endl;

	if (kondisi == true) {
		cout << "Kondisi Benar" << endl;
	}
	else if (kondisi == false) {
		cout << "Kondisi Salah" << endl;
	}

	cout << "Banyak karakter di kataPembuka: " << kataPembuka.length() << endl;

	
	cout << fullName << endl;

	ukuranTipeData();

	return 123;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file