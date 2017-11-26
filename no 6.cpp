#include <iostream>
#include <iomanip>
using namespace std;

float* getAveragePlusMinus(int* angka, int n) {
	float totalPlus = 0, totalMin = 0;
	int countPlus = 0, countMin = 0;
	
	//Procces penjumlahan pos dan neg,
	for(int i = 0; i < n; i++) {
		if(angka[i] > 0) {
			totalPlus += angka[i];
			countPlus++;
		}
		else {
			totalMin += angka[i];
			countMin++;
		}
	}
	
	//Rata rata disimpan dalam bentuk array
	float* avg = new float[2];
	avg[0] = totalPlus / countPlus;
	avg[1] = totalMin / countMin;
	
	return avg;
}

main() {
	int n;
	
	cout<<"Masukkan n angka: ";
	cin>>n;
	
	int angka[n];
	
	//User memasukan angka
	for(int i = 0; i < n; i++) {
		cout<<"Masukkan angka ke-"<<i + 1<<": ";
		cin>>angka[i];
	}
	
	//Set 2 angka di belakang koma
	cout<<setprecision(2)<<fixed;
	
	//memanggil fungsi untuk mendapatkan hasil rata rata 
	float* avg = getAveragePlusMinus(angka, n);
	
	//Print result
	cout<<endl<<"rata-rata bilangan positif: "<<avg[0]<<endl;
	cout<<"rata-rata bilangan negatif: "<<avg[1]<<endl;
}
