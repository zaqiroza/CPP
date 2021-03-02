#include <iostream>
#include <string>

using namespace std;

int main()
{
	//string kataPertama;
	//string kataKedua;
	//string kataGabungan;
	//int panjangKataGabungan;

	//cout << "Masukkan kata pertama: ";
	//cin >> kataPertama;

	//cout << "Masukkan kata kedua: ";
	//cin.ignore(256, '\n');
	//getline(cin, kataKedua);

	//kataGabungan = kataPertama + " " + kataKedua;
	//cout << "Gabungan kata pertama dan kedua: " << kataGabungan << endl;
	//panjangKataGabungan = kataGabungan.length();
	//cout << "Panjang kata gabungan: " << panjangKataGabungan << endl;
	//

	////string namaPanggilan = "Budiono";
	////puluhan     		   	  0000000
	////indeks(satuan)          0123456
	//
	//cout << "Indeks ke-10 dari kata gabungan: " << kataGabungan[10] << endl;
	//kataGabungan[10] = '8';
	//cout << "Kata gabungan sekarang: " << kataGabungan << endl;
	
	string namaBarang1, namaBarang2;
	float hargaBarang1, hargaBarang2, totalHarga, diskonTotal, totalTagihan;

	cout << "Nama Barang 1: ";
	getline(cin, namaBarang1);//tidak butuh ignore kare di atas tidak ada cin
	cout << "Harga Barang 1 : Rp. ";
	cin >> hargaBarang1;

	cout << "Nama Barang 2: ";
	cin.ignore(256, '\n');
	getline(cin, namaBarang2);//butuh ignore karena di atas ada cin
	cout << "Harga Barang 2 : Rp. ";
	cin >> hargaBarang2;

	totalHarga = hargaBarang1 + hargaBarang2;
	cout << "Total Harga Barang : Rp. " << totalHarga << endl;

	cout << "Diskon Total(%) :";
	cin >> diskonTotal;

	totalTagihan = totalHarga * (100 - diskonTotal) / 100;
	cout << "Total Tagihan : Rp. " << totalTagihan;
}
