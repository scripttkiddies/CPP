#include <iostream>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include<time.h>
#include <Windows.h>

using namespace std;

void gotoxy(short x, short y)
	{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
void delay(int number_of_seconds)
	{
	    int milli_seconds = 1000 * number_of_seconds;
	    clock_t start_time = clock();
	    while (clock() < start_time + milli_seconds);
	}
 
int main()
{

	int pil;
	char ulang;
  	do
  {
  	// Menu Utama Program
  	
  	system("cls");
    cout << "         SELAMAT DATANG" << endl;
    cout << "==============================" << endl;
    cout << endl;
    cout << "      Silahkan Pilih Menu" << endl;
    cout << endl;
    cout << " 1. Biodata" << endl;
    cout << " 2. Deret" << endl;
    cout << " 3. Animasi " << endl;
    cout << " 4. Exit" << endl;
    cout << endl;
    cout << "==============================" << endl;
    cout << endl;
 
    cout << "Masukan Pilihan Anda : ";
    cin >> pil;
 
    switch(pil){
    case 1:{
    	//Program Input Data Mahasiswa
    	
    	system("cls");

        string nama;
		string kelas;
		string nim;
		string jurusan;
		
		cout<<"Masukan Data Berikut : "<<endl;
		cout<<"=============================="<<endl;
		cout<<"Nama     : "; cin>>nama; 
		cout<<"NIM      : "; cin>>nim;	 
		cout<<"Kelas    : "; cin>>kelas;	 
		cout<<"Jurusan  : "; cin>>jurusan;
		cout<<"=============================="<<endl;
		
		cout<<endl;
		cout<<"=============================="<<endl;
		cout<<"        DATA MAHASISWA"<<endl; 
		cout<<"=============================="<<endl;	
		cout<<"Nama     : "<<nama<<endl;
		cout<<"NIM      : "<<nim<<endl;
		cout<<"Kelas    : "<<kelas<<endl;
		cout<<"Jurusan  : "<<jurusan<<endl;
		cout<<"=============================="<<endl;
		getch();
        break;
	}
    case 2:{
    	//Program Deret
    	
    	system("cls");

        int a, b, c; 
		cout<<"Masukan Nilai : "; cin>>a;
		
		for (b=1; b<=a; b++) 
		{
		for (c=1; c<=b; c++) {
			if (c %2==1){
			cout<<c<<"A "; 
			}
		else {
			cout<<c<<"B "; 
			}
		}
		cout<<"\n"; 
		}
		getch();

        break;
    }
    case 3:{
    	// Program animasi
    	
    	system("cls");
        int i; 
		for(i=1;i<72;i++)
		{
			delay(1);
			system ("COLOR 6");
			gotoxy(i-1,10); cout<<" ";
		   	gotoxy(i,10); cout<<"Kelompok";
		   	gotoxy(i-1,12); cout<<" ";
		   	gotoxy(i,12); cout<<"1. Anggota kelompok";
		   	gotoxy(i-1,13); cout<<" ";
		   	gotoxy(i,13); cout<<"2. Anggota kelompok";
		   	gotoxy(i-1,14); cout<<" ";
		   	gotoxy(i,14); cout<<"3. Anggota kelompok";
		   	gotoxy(i-1,15); cout<<" ";
		   	gotoxy(i,15); cout<<"4. Anggota kelompok";
		   	gotoxy(i-1,16); cout<<" ";
		   	gotoxy(i,16); cout<<"5. Anggota kelompok";
	   	}
		getch();
        break;
    }
    case 4:{
    	// Program Exit
    	
    	exit(0);
	}
    default:
    	//Kondisi Jika Pilihan Tidak Sesuai Kriteria
    	cout << "Tidak Ada Pilihan Tersebut, Silahkan Masukan Pilihan Yang Benar!!!" << endl;
    }
    cout << endl;
    
 	//Kondisi Jika Program Selesai Dijalannkan
    cout << "Ingin Kembali Ke menu Utama (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');
 
  cout << "Terimakasih...";
 
  cout << endl;
  return 0;
}
