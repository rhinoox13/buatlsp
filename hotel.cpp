#include<iostream>
#include<conio.h>
using namespace std;

int lama,tipekamar,total;
string repeat;
main(){
	do{
		system("cls");
		cout << " program menginap di hotel : \n";
		cout << "\n";
		cout << "          | superior           | deluxe           | premium \n";
		cout << "----------+--------------------+------------------+--------------\n";
		cout << " 1-2 hari | 100.000/night      | 150.000/night    | 200.000/night \n";
		cout << " 3-4 hari | 90.000/night       | 135.000/night    | 180.000/night  \n";
		cout << " >=5 hari | 80.000/night       | 120.000/night    | 160.000/night  \n";
		cout << "----------+--------------------+------------------+-----------------\n";
		cout << " tipe kamar : \n";
		cout << "1.superior \n";
		cout << "2.deluxe \n";
		cout << "3.premium \n";
		do{
			cout << "pilih tipe kamar : ";
			cin >> tipekamar;
		}while(tipekamar < 1 || tipekamar > 3);
		do{
			cout << "lama menginap : ";
			cin >> lama;
		}while(lama < 1);
		
		switch(tipekamar){
			case 1:
				if(lama >= 1 && lama <=2){
					total = lama * 100000;
				}else if(lama >= 3 && lama <= 4){
					total = lama * 90000;
				}else{
					total = lama * 80000;
				}
				break;
			case 2:
				if(lama >= 1 && lama <=2){
					total = lama * 150000;
				}else if(lama >= 3 && lama <= 4){
					total = lama * 135000;
				}else{
					total = lama * 120000;
				}
				break;
			case 3:
				if(lama >= 1 && lama <=2){
					total = lama * 200000;
				}else if(lama >= 3 && lama <= 4){
					total = lama * 180000;
				}else{
					total = lama * 160000;
				}
				break;
		}
		cout << "total harga : " << total ;
		cout << endl << "ingin memesan lagi (y/n) : ";
		cin >> repeat;
		
	}while(repeat == "Y" || repeat == "y");
}
