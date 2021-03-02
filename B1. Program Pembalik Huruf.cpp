#include <iostream>
using namespace std;

int main(){
	cout << "Program Array Pembalik Huruf" << endl;
	char a[6] = {'p', 'e', 'n', 's', 'i', 't'};
	int i, j;
	
	cout << "Kata sebelum dibalik :"<< endl;
	for (i=0; i<6; i++){
		cout << a [i];	
	}
	cout << "\n";
	cout << "kata setelah dibalik :"<< endl;
	for (j=6; j>=0; j--){
		cout << a [j];
	}
	return 0;
}
