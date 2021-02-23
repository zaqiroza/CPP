// CPP_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;

int main()
{
	string input;
	float bilangan1, bilangan2;

	cout.precision(5);

	cout << "Hello World!\n";

	/*
	cout << "Ketik sesuatu (cin)\n";
	cin >> input;//satu kata
	cout << "Input yang telah dimasukkan: " << input << endl;
	*/
	/*
	cout << "Ketik sesuatu (getline)\n";
	getline(cin, input);//kalimat, banyak kata
	cout << "Input yang telah dimasukkan: " << input << endl;
	*/
	cout << "Masukkan bilangan pertama: ";
	cin >> bilangan1;
	cout << "Masukkan bilangan kedua: ";
	cin >> bilangan2;

	cout << "Hasil dari " << bilangan1 << " + " << bilangan2 << " = " << bilangan1 + bilangan2 << endl;
	//       Hasil dari 27 + 2 = 29
	cout << "Hasil dari " << bilangan1 << " - " << bilangan2 << " = " << bilangan1 - bilangan2 << endl;
	cout << "Hasil dari " << bilangan1 << " * " << bilangan2 << " = " << bilangan1 * bilangan2 << endl;
	cout << "Hasil dari " << bilangan1 << " / " << bilangan2 << " = " << bilangan1 / bilangan2 << endl;
	cout << "Hasil dari " << bilangan1 << " ^ " << bilangan2 << " = " << pow(bilangan1, bilangan2) << endl;
	cout << "Hasil dari " << bilangan1 << " ^(1/3) = " << cbrt(bilangan1) << endl;
	//       Hasil dari 27^(1/3) = 3

	// 0 - 360o = 0 - 2pi rad
	// 0 - 180o = 0 - pi rad
	// x o = x *pi/180 rad
	// x rad = x *180/pi o
	const float PI = 4 * atanf(1);
	float nilaiRad = bilangan2 * (PI / 180);
	float nilaiCos = cosf(nilaiRad);
	float nilaiSin = sinf(nilaiRad);
	float nilaiTan = sinf(nilaiRad) / cosf(nilaiRad);

	if (fabs(nilaiCos) < pow(10, -4))
		nilaiCos = 0;

	if (fabs(nilaiSin) < pow(10, -4))
		nilaiSin = 0;

	if (fabs(nilaiTan) < pow(10, -4))
		nilaiTan = 0;
	else if (fabs(nilaiTan) > pow(10, 4))
		nilaiTan = nilaiSin / nilaiCos;

	cout << "Hasil dari cos(" << bilangan2 << "deg) = " << "cos(" << nilaiRad << "rad) = " << nilaiCos << endl;
	//sin(x)
	cout << "Hasil dari sin(" << bilangan2 << "deg) = " << "sin(" << nilaiRad << "rad) = " << nilaiSin << endl;
	//tan(x)
	cout << "Hasil dari tan(" << bilangan2 << "deg) = " << "tan(" << nilaiRad << "rad) = " << nilaiTan << endl;

	float nilaiAcos = acosf(nilaiCos);
	float nilaiAsin = asinf(nilaiSin);
	float nilaiAtan = atanf(nilaiTan);
	float nilaiDeg;

	//acos(x)
	nilaiDeg = nilaiAcos * (180 / PI);
	cout << "Hasil dari acos(" << nilaiCos << ") = " << nilaiAcos << "rad = " << nilaiDeg << "deg" << endl;
	//asin(x)
	nilaiDeg = nilaiAsin * (180 / PI);
	cout << "Hasil dari asin(" << nilaiSin << ") = " << nilaiAsin << "rad = " << nilaiDeg << "deg" << endl;
	//atan(x)
	nilaiDeg = nilaiAtan * (180 / PI);
	cout << "Hasil dari atan(" << nilaiTan << ") = " << nilaiAtan << "rad = " << nilaiDeg << "deg" << endl;

	//abs(x) absolute value, nilai return selalu positif x = |-x|
	cout << "Hasil dari absf(" << bilangan1 << ") = " << fabs(bilangan1) << endl;

	//ceil(x) pembulatan ke atas
	cout << "Hasil dari ceilf(" << bilangan1 << ") = " << ceilf(bilangan1) << endl;

	//floor(x) pembulatan ke bawah
	cout << "Hasil dari floorf(" << bilangan1 << ") = " << floorf(bilangan1) << endl;

	//sqrt(x) akar kuadrat
	cout << "Hasil dari sqrtf(" << bilangan1 << ") = " << sqrtf(bilangan1) << endl;

	//log(x) logaritma naturalis
	cout << "Hasil dari logf(" << bilangan1 << ") = " << logf(bilangan1) << endl;
	
	//log10(x) logaritma basis 10
	cout << "Hasil dari log10f(" << bilangan1 << ") = " << log10f(bilangan1) << endl;
}