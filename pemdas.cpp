#include<iostream>
#include<conio.h>
using namespace std;

int a,b,c,i,j,temp,maxim,minim;

main(){
	cout << "Input 3 buah nilai :\n";
	cout << "nilai a :";
	cin >> a;
	cout << "nilai b :";
	cin >> b;
	cout << "nilai c :";
	cin >> c;
	
	int nilai[3]={a,b,c};
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(nilai[i]>nilai[j]){
				temp=nilai[i];
				nilai[i]=nilai[j];
				nilai[j]=temp;
			}
		}
	}
	cout << "nilai ascending : ";
	for(i=0;i<3;i++){
		cout << nilai[i]<<" ";
	}
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(nilai[i]<nilai[j]){
				temp=nilai[i];
				nilai[i]=nilai[j];
				nilai[j]=temp;
			}
		}
	}
	cout <<endl<<"nilai discending : ";
	for(i=0;i<3;i++){
		cout << nilai[i]<<" ";
	}
	
	maxim = nilai[0];
	minim = nilai[2];
	
	cout <<endl<<"nilai maximum :";
	cout << maxim;
	cout << endl<< "nilai minimum :";
	cout << minim;
	
	float jumlah=a+b+c;
	float rata = jumlah/3;
	
	cout <<endl<< "rata-rata :";
	cout << rata;
}
