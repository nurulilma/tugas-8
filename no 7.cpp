#include <iostream>
using namespace std;

//Fungsi untuk mengecek apakah bilangan itu prima atau tidak
bool isPrima(int num) {
	bool prima = false;
	
	if(num == 2 || num == 3 || num == 5 || num == 7)
		prima = true;
	else if(num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
		prima = true;
		
	return prima;
}

//Fungsi untuk membuat array bilangan prima
int* getPrima(int n) {
	int count = 0;
	int* prima = new int[n];
	
	for(int i = 1; count < n; i++) {
		if(isPrima(i)) {
			prima[count] = i;
			count++;
		}
	}
	
	return prima;
}

main() {
	int n;
	
	cout<<"Masukkan n prima: ";
	cin>>n;
	
	//Memanggil fungsi untuk mendapatkan bilagan prima
	int* prima = getPrima(n);
	
	cout<<endl<<"List bilagan prima:"<<endl;
	
	//Display
	for(int i = 0; i < n; i++) {
		cout<<prima[i]<<endl;
	}
}
