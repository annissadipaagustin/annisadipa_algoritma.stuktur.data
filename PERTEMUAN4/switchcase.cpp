#include<iostream> 
using namespace std;

main()
{
	char kode;
	cout<<"Masukkan Kode Barang [A..C] ";
	cin >>kode;
	
	switch(kode){
		case 'A':
		cout<<"Alat Olahraga";
		break;
		case 'B':
		cout<<"Alat Elektronik";
		break;
		case 'c':
		cout<<"Alat Masak";
		break;
		default:
		cout<<"Anda Salah Memasukan Kode";
		break;
	}
	getchar();
}
