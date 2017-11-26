#include <iostream>
using namespace std;

//Fungsi untuk mengecek bilagan itu perfect atau tidak
bool perfectCheck(int n) {
	int total = 0;
	
	for(int i = 1; i < n; i++)
		if(n % i == 0)
			total += i;
		
	return total == n;
}

main() {
	int n;
	
	cout<<"Masukkan angka: ";
	cin>>n;
	
	//Memanggil fungsi perfectCheck untuk mendapatkan status bool angka tersebut
	bool status = perfectCheck(n);
	
	if(status)
		cout<<"Given number is a perfect number";
	else
		cout<<"Given number is a not perfect number";
}
