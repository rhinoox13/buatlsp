#include <iostream>
#include <conio.h>
using namespace std;

int a,b,c,i,j,temp,maxim,minim,jumlah;
float rata;

int main(){
	
	cout << "masukan tiga buah nilai" << endl;
	cout << "Nilai A:";
	cin >> a;
	cout << "Nilai B:";
	cin >> b;
	cout << "Nilai C:";
	cin >> c;
	
	int nilai[3]={a,b,c};
	
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(nilai[i] > nilai[j]){
				temp = nilai[i];
				nilai[i] = nilai[j];
				nilai[j] = temp;
			}
		}
	}
	cout << "Urutan nilai Ascending: "<< endl;
	for(i=0;i<3;i++){
	cout << nilai[i]<< " ";
	}
	cout << endl;
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(nilai[i] < nilai[j]){
				temp = nilai[i];
				nilai[i] = nilai[j];
				nilai[j] = temp;
			}
		}
	}
	
	cout << "Urutan nilai Descending: "<< endl;
	for(i=0;i<3;i++){
	cout << nilai[i]<< " ";
	}
	cout<<endl;
	maxim=nilai[0];
	minim=nilai[2];
	
	cout << "nilai maximum:" << maxim << endl;
	cout << "nilai minimum:" << minim << endl;
	
	jumlah = a+b+c;
	rata= jumlah/3;
	
	cout << "nilai rata rata " << rata;
	
}
