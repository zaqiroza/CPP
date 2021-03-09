#include <iostream>
#include <string>

using namespace std;

int main()
{
	//bool status = false;//true (1) / false (0)

	//cout << "Nilai status: " << status << endl;

	//boolean expressions
	//int umurBudi = 25;
	//int umurAni = 23;

	/*cout << "Budi lebih tua dari Ani? " << (umurBudi > umurAni) << endl;
	cout << "Budi lebih muda dari Ani? " << (umurBudi < umurAni) << endl;
	cout << "Budi seumuran dengan Ani? " << (umurBudi == umurAni) << endl;
	cout << "Budi tidak seumuran dengan Ani? " << (umurBudi != umurAni) << endl;
	cout << "Budi berumur >=25?" << (umurBudi >= 25) << endl;
	cout << "Ani berumur <=23?" << (umurAni <= 23) << endl;*/

	//cout << "Nilai status: ";
	//if (status)
	//    cout << "True" << endl;
	//else
	//    cout << "False" << endl;

	//cout << "Nilai kebalikan dari status: ";
	//if (!status) // kondisi = !false = true
	//    cout << "True" << endl;
	//else
	//    cout << "False" << endl;

	//cout << "Budi lebih tua dari Ani? ";
	//if (umurBudi > umurAni)
	//    cout << "Ya" << endl;
	//else
	//    cout << "Tidak" << endl;

	//cout << "Budi lebih muda dari Ani? ";
	//if (umurBudi < umurAni)
	//    cout << "Ya" << endl;
	//else
	//    cout << "Tidak" << endl;

	//if (umurBudi > 30)
	//	cout << "Umur Budi >30" << endl;
	//else if (umurBudi > 27)
	//	cout << "Umur Budi >27" << endl;
	//else if (umurBudi > 24)
	//	cout << "Umur Budi >24" << endl;
	//else
	//	cout << "Umur Budi tidak masuk kategori" << endl;

	//if (true) {//pertama
	//	cout << "If pertama true" << endl;
	//	if (true) {//kedua
	//		cout << "If kedua true" << endl;
	//		if (false)//ketiga
	//			cout << "If ketiga true" << endl;
	//		else
	//			cout << "If ketiga false" << endl;
	//	}
	//	else
	//		cout << "If kedua false" << endl;
	//}
	//else
	//	cout << "If pertama false" << endl;

	string namaLengkapUser, namaLengkapPemenang,
		tempatLahirUser, tempatLahirPemenang,
		tanggalLahirUser, tanggalLahirPemenang;

	cout << "Masukkan sesuai data:" << endl;

	cout << "Nama lengkap (Ex: Budi Setiadi): ";
	getline(cin, namaLengkapUser);

	cout << "Tempat lahir (Ex: Malang): ";
	cin >> tempatLahirUser;

	cout << "Tanggal lahir (Ex: 10/02/1960): ";
	cin >> tanggalLahirUser;

	namaLengkapPemenang = "Ani Ningrum";
	tempatLahirPemenang = "Salatiga";
	tanggalLahirPemenang = "28/02/1966";

	if (namaLengkapUser == namaLengkapPemenang) {
		cout << "Nama benar" << endl;
		if (tempatLahirUser == tempatLahirPemenang) {
			cout << "Tempat lahir benar" << endl;
			if (tanggalLahirUser == tanggalLahirPemenang) {
				cout << "Tanggal lahir benar" << endl;
				cout << "Selamat, Anda memenangkan hadiah Mobil" << endl;
			}
			else
				cout << "Maaf, data yang Anda masukkan salah" << endl;
		}
		else
			cout << "Maaf, data yang Anda masukkan salah" << endl;
	}
	else
		cout << "Maaf, data yang Anda masukkan salah" << endl;


}