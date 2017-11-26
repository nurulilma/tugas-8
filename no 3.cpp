#include <iostream>
using namespace std;

//Fungsi untuk mendapatkan list bilangan fibonacci
int* getFibonacci(int n) {
	int* fibbo = new int[n];
	
	int temp;
	for(int i = 0; i < n; i++) {
		if(i == 0 || i == 1)
			temp = 1;
		else
			temp = fibbo[i - 2] + fibbo[i - 1];
		
		fibbo[i] = temp;
	}
	
	return fibbo;
}

//Fungsi untuk mendapatkan nilai rata rata dari array
float getAverage(int n) {
	int sum = 0;
	int* fibbo = getFibonacci(n);
	
	for(int i = 0; i < n; i++) {
		sum += fibbo[i];
	}
	
	delete[] fibbo;
	
	return sum / n;
}

main() {
	int n;
	
	cout<<"Masukkan n: ";
	cin>>n;
	
	cout<<endl;
	
	int* fibbo = getFibonacci(n);
	
	//For untuk menampilkan daftar fibonacci
	for(int i = 0; i < n; i++) {
		cout<<fibbo[i]<<endl;
	}
	
	//Memanggil fungsi untuk mendapatkan rata ratanya
	cout<<endl<<"Rata ratanya: "<<getAverage(n);
	
delete[] fibbo;
}
