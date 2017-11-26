#include <iostream>
using namespace std;

int max (int angka []){
	int terbesar;
	
	for (int i = 0; i< 10; i++){
		if (i == 0 || angka [i]> terbesar)
				terbesar= angka [i];
				
	}
	return terbesar;
}
int min (int angka[]){
	int terkecil;
	
	for ( int i = 0; i< 10; i++){
		if (i == 0 || angka [i] < terkecil)
				terkecil = angka [i];
	}
	return terkecil;
}

main (){
	// proses inisialisasi angka dari user
	int angka [10];
	
	for (int i = 0; i < 10; i++){
		cout <<"masukan angka ke-"<<i + 1<<":";
		cin>>angka[i];
	}
	cout<<"angka terbesar: "<<max(angka)<<endl;
	cout<<"angka terkecil: "<<min(angka)<<endl;
}
