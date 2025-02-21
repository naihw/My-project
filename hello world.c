#include<iostream>
using namespace std;

int main() {
	double data[10] = {12.5, 6.4, 8.9, 10.2};
	double total = 0.0;
	
	//menghitung elemen-elemen aray
	for (int i = 0; i < 10; i++) {
		total += data[i];
	}
	//menghitung rata-rata array 
	double rata_rata = total / 10;
	
	cout << "total: " << total << endl;
	cout << "rata-rata: " << rata_rata << endl;
	
	
	return 0;
}