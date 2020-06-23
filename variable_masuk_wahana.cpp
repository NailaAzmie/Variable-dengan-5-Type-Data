#include <iostream>
using namespace std ;

int main () {
	char nama[100] ;
	int usia ;
	float beratBadan ;
	double tinggiBadan ;
	string noRegistrasi ;
	
	cout << "MASUKKAN DATA ANDA TERLEBIH DAHULU SEBELUM MEMASUKI WAHANA !" << endl ;
	cout << endl ;
	
	cout << "Masukkan nama lengkap anda:/n 	  	= " ;
	cin.getline(nama, 100) ;
	
	cout << "Masukkan usia anda (hanya angka)   	= " ;
	cin >> usia ;
	
	cout << "Masukkan berat badan anda (hanya angka) = " ;
	cin >> beratBadan ;
	
	cout << "Masukkan tinggi badan anda (hanya angka)= " ;
	cin >> tinggiBadan ;
	
	cout << "Masukkan no Registrasi anda 		= " ;
	cin >> noRegistrasi;
	cout << endl ;
	
	bool benar ;
	
	benar = usia > 10 && beratBadan > 35 && tinggiBadan >110 ;
	
	if(benar == true) {
		cout << "Anda boleh menaiki wahana ini, silahkan masuk :) " ;
	} else {
		cout << "! Anda belum boleh menaiki wahana ini, karena belum memenuhi syarat !" ;
	}
	return 0;
}
