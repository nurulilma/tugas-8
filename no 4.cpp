#include <iostream>
using namespace std;

//Fungsi untuk mendapatkan nilai kalkulasi perkalian dari dua matrix
int** matrixCalculation(int** mat1, int** mat2) {
	int** res = new int*[3];
	for(int i = 0; i < 3; i++) {
		res[i] = new int[3];
		
		for(int j = 0; j < 3; j++) {
			int temp = 0;
			
			for(int k = 0; k < 3; k++) {
				temp += mat1[i][k] * mat2[k][j];
			}
			
			res[i][j] = temp;
		}
	}
	
	return res;
}

main() {
	int** mat1 = new int*[3];
	int** mat2 = new int*[3];
	
	//Proses mengisi array matrix 1
	cout<<"Masukkan matrix 1: "<<endl;
	for(int i = 0; i < 3; i++) {
		mat1[i] = new int[3];
		
		for(int j = 0; j < 3; j++) {
			cin>>mat1[i][j];
		}	
	}
	
	cout<<endl;
	
	//Proses mengisi array matrix 2
	cout<<"Masukkan matrix 2: "<<endl;
	for(int i = 0; i < 3; i++) {
		mat2[i] = new int[3];
		
		for(int j = 0; j < 3; j++) {
			cin>>mat2[i][j];
		}	
	}
	
	cout<<endl<<"Hasil perkaliannya: "<<endl;
	
	//Proses memanggil fungsi mendapatkan nilai perkaliannya
	int** result = matrixCalculation(mat1, mat2);
	
	//Display
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
}
