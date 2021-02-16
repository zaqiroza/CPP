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
    cout << "Hasil dari cos(" << bilangan2 << "deg) = " << cos(bilangan2*M_PI/180) << endl;

    //sin(x)
    //tan(x)
    //acos(x)
    //asin(x)
    //atan(x)
    //abs(x) absolute value, nilai return selalu positif x = |-x|
    //ceil(x) pembulatan ke atas
    //floor(x) pembulatan ke bawah
    //sqrt(x) akar kuadrat
    //log(x) logaritma naturalis
    //log10(x) logaritma basis 10
}
