#include <iostream>
using namespace std;

//mencari total bilangan genap
int getEvenCount (int*angka, int n){
	int count = 0;
	for (int i= 0; i < n; i++){
			if(angka[i] % 2== 0){
					count++;
			}
	}
	return count;
} 
//fungsi untuk memilih genap dan membuat aray baru
int*evenNumberFilter(int* angka, int n){
	//memanggil fungsi pertama
	int count = getEvenCount(angka, n);
	
	//pembuatan aray genap
	int* even = new int[count];
	int j = 0;
	for (int i = 0; i < n; i++){
			if (angka [i] % 2 == 0){
				even[j]= angka[i];
				j++;
			}
	}
	//mengembalikan aray genap
	return even;
}

main (){
	int n;
	cout<<"masukan  nilai n:";
	cin>>n;
	
	int angka[n];
	
	//proses inisialisasi angka oleh user
	for (int i = 0; i < n; i++){
		cout<<"Masukan angka ke-"<<i + 1<<":";
		cin>>angka[i];
	}
	cout<<endl;
	
	//memanggil fungsi panjang aray genap
	int count = getEvenCount(angka, n);
	
	// memanggil fungsi aray genap
	int* genap= evenNumberFilter(angka, n);
	
	//untuk looping nilai genap
	for(int i = 0; i< count; i++){
			cout<<genap[i]<<endl;
			
	}
}

