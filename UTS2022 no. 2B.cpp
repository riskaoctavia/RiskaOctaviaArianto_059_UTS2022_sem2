#include<iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(void)
{
	int a[1000], b[1000], c[1000], d[1000], n, jumlah1, jumlah2, jumlah3;
	double rata_pertahun, rata_pc, rata_alg, rata_ind;
	
	cout<<"Program hitung Rata-rata/matkul dan Rata-rata/mhs \n";
	cout<<"Masukan banyak data yang ingin diinput : "; cin>>n;
	cout<<endl<<endl;
	
	for (int i=0;i<n;i++){
		cout<<" Data ke-"<<i+1<<endl;
		cout<<" Tahun Prodi     : ";
  		cin>>a[i];
  		cout<<" PANCASILA : "; cin>>b[i];
  		cout<<" ALGORITHMA  : "; cin>>c[i];
  		cout<<" B. INDONESIA  : "; cin>>d[i];
  		
	}
 	
	 system("cls");
 	cout<<"Output:\n\n";
 	cout<<"\t\t     DATA NILAI MAHASISWA"<<endl;
	cout<<" ______________________________________________________________ "<<endl;
	cout<<"| Tahun Prodi  |  PANCASILA   | ALGORITHMA   |   B.INDO  |Rata-rata kelulusan per |"<<endl;
	cout<<"|              | 			 |		 	 	|	    	|	  tahun semua prodi    |"<<endl;
	cout<<" ============================================================== "<<endl;
	
 	for(int i=0;i<n;i++){
  		cout<<"| "<<setiosflags(ios::left)<<setw(13)<<a[i];
  		cout<<"| "<<setiosflags(ios::left)<<setw(9)<<b[i];
  		cout<<"| "<<setiosflags(ios::left)<<setw(8)<<c[i];
  		cout<<"| "<<setiosflags(ios::left)<<setw(7)<<d[i];
  		rata_pertahun=(b[i]+c[i])*0.5;
  		cout<<"| "<<setiosflags(ios::left)<<setw(24)<<rata_pertahun<<" |";
		cout<<"\n|______________________________________________________________|\n";
	}
	
	jumlah1=0;
	jumlah2=0;
	jumlah3=0;
	for(int i=0;i<n;i++){
		jumlah1=jumlah1+b[i];
		jumlah2=jumlah2+c[i];
		jumlah3=jumlah2+d[i];
		rata_pc=jumlah1/n;
		rata_alg=jumlah2/n;
		rata_ind=jumlah3/n;
		
	}
	
	cout<<"|  Rata-rata   |          |         |                          |"<<endl;
	cout<<"| pertahun per | "<<setiosflags(ios::left)<<setw(9)<<rata_pc;
	cout<<"| "<<setiosflags(ios::left)<<setw(8)<<rata_alg;
	cout<<"| "<<setiosflags(ios::left)<<setw(7)<<rata_ind;
	cout<<"|                          |"<<endl;
	cout<<"|     prodi    |          |         |                          |"<<endl;
	cout<<" =============================================================== "<<endl;
	
	getch();
	return 0;
	
	
}
