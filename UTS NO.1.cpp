/* UTS no.1 */
/* Kategori Umur */
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	//input
	int umur;
	
	cout<<"Program Menentukan Kategori sesuai usia \n";
	
	cout<<"Masukkan Umur anda	= ";cin>>umur;
	
	//deklarasi
	if(umur>=0 && umur<=0){
		cout<<"Anda Termasuk Kategori Bayi";
	}else if(umur>=1 && umur<=2){
		cout<<"Anda Termasuk Kategori Batita";
	}else if(umur>=3 && umur<=5){
		cout<<"Anda Termasuk Kategori Balita";
	}else if(umur>=6 && umur<=11){
		cout<<"Anda Termasuk Kategori Anak-anak";
	}else if(umur>=12 && umur<=17){
		cout<<"Anda Termasuk Kategori Remaja";
	}else if(umur>=18 && umur<=29){
		cout<<"Anda Termasuk Kategori Pemuda";
	}else if(umur>=30 && umur<=59){
		cout<<"Anda Termasuk Kategori Dewasa";
	}else if(umur>=60 && umur<=100){
		cout<<"\nAnda Termasuk Kategori Lansia";
	}else {
		cout<<"Umur yang anda masukan salah"<<endl;
	
	}

    return 0;
	
}
