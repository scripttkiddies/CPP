// Library/Repository

#include <iostream>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

// Function Tambahan Setiap perintah program

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
char d0[5][3] = {	178,178,178,
					178,' ',178,
					178,' ',178,
					178,' ',178,
					178,178,178	};
					
char d1[5][3] = {	' ',' ',178,
					' ',' ',178,
					' ',' ',178,
					' ',' ',178,
					' ',' ',178	};

char d2[5][3] = {	178,178,178,
					' ',' ',178,
					178,178,178,
					178,' ',' ',
					178,178,178	};

char d3[5][3] = {	178,178,178,
					' ',' ',178,
					178,178,178,
					' ',' ',178,
					178,178,178	};

char d4[5][3] = {	178,' ',178,
					178,' ',178,
					178,178,178,
					' ',' ',178,
					' ',' ',178	};

char d5[5][3] = {	178,178,178,
					178,' ',' ',
					178,178,178,
					' ',' ',178,
					178,178,178	};

char d6[5][3] = {	178,178,178,
					178,' ',' ',
					178,178,178,
					178,' ',178,
					178,178,178	};

char d7[5][3] = {	178,178,178,
					' ',' ',178,
					' ',' ',178,
					' ',' ',178,
					' ',' ',178	};

char d8[5][3] = {	178,178,178,
					178,' ',178,
					178,178,178,
					178,' ',178,
					178,178,178	};

char d9[5][3] = {	178,178,178,
					178,' ',178,
					178,178,178,
					' ',' ',178,
					' ',' ',178	};


char sep[5][3] = {	' ',' ',' ',
					' ',178,' ',
					' ',' ',' ',
					' ',178,'  ',
					' ',' ',' '	};
 

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
void setcursor(bool visible, DWORD size) {
	if(size == 0)
		size = 20;	
	
	CONSOLE_CURSOR_INFO lpCursor;	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}
void printDigit(int no, int x, int y ){
	 
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			switch(no){
				case 0:
					gotoxy(x+j, y+i); cout<<d0[i][j]; break;
				case 1:
					gotoxy(x+j, y+i); cout<<d1[i][j]; break;
				case 2:
					gotoxy(x+j, y+i); cout<<d2[i][j]; break;
				case 3:
					gotoxy(x+j, y+i); cout<<d3[i][j]; break;
				case 4:
					gotoxy(x+j, y+i); cout<<d4[i][j]; break;
				case 5:
					gotoxy(x+j, y+i); cout<<d5[i][j]; break;
				case 6:
					gotoxy(x+j, y+i); cout<<d6[i][j]; break;
				case 7:
					gotoxy(x+j, y+i); cout<<d7[i][j]; break;
				case 8:
					gotoxy(x+j, y+i); cout<<d8[i][j]; break;
				case 9:
					gotoxy(x+j, y+i); cout<<d9[i][j]; break;
				case 10:
					gotoxy(x+j, y+i); cout<<sep[i][j]; break;
			} 
		}
	}
	
}

void drawBorder(int x=0, int y=0){
	char v = 186; // vertical
    char h = 205; // horizontal
    char tr = 187;
    char br = 188;
    char tl = 201;
    char bl = 200;
    int width = 50;
    int height = 11;
    
    gotoxy((width/2)+x-11, y); cout<<"C U R R E N T  T I M E";
    
    for( int i=1; i<=height; i++ ){
		for( int j=1; j<=width; j++ ){
	    	gotoxy(j+x,i+y);
	    	if( i==1 && j==1 ) cout<< tl;
			else if( i==height && j==1 ) cout<< bl;
	    	else if( i==1 && j==width ) cout<< tr;
			else if( i==height && j==width ) cout<< br;
			else if( i==1 || i==height ) cout<< h;
			else if( j==1 || j==width ) cout<< v;
		}
	}
}
 
int main()
{
	int pil;
	char ulang;
  	do
	{
  	// Menu Utama Program
  	
  	system("cls");
    cout << "            SELAMAT DATANG" << endl;
    cout << "=====================================" << endl;
    cout << "         Program Menu Pilihan" << endl;
    cout << endl;
    cout << " 1. Biodata" << endl;
    cout << " 2. Deret" << endl;
    cout << " 3. Animasi " << endl;
    cout << " 4. Nilai Mahasiswa " << endl;
    cout << " 5. Hitung Luas Segitiga " << endl;
    cout << " 6. Menentukan Lulus & Tidak Lulus " << endl;
    cout << " 7. Menghitung Harga Bahan Bakar " << endl;
    cout << " 8. Exit" << endl;
    cout << endl;
    cout << "======================================" << endl;
    cout << endl;
    cout << " Masukan Pilihan anda [1-8] = "; cin >> pil;
 
    switch(pil){
    case 1:{
    	//Program Input Data Mahasiswa
    	
    	system("cls");

		string nama;
		string lahir;
		string kuliah;
		string kelas;
		string hobi;
		
		cout<<"=============================="<<endl;
		cout<<" Masukan Data Mahasiswa : "<<endl;
		cout<<"=============================="<<endl;
		cout<<endl;
		cout<<" Nama         : ";
		cin.ignore();				//Agar Inputan Spasi Terbaca
		getline(cin, nama);
		cout<<" Tempat lahir : ";cin>>lahir;
		cout<<" Kuliah       : ";cin>>kuliah;
		cout<<" Kelas        : ";cin>>kelas;
		cout<<" Hobi         : ";cin>>hobi;
		cout<<endl;
		cout<<"=============================="<<endl;
		
		cout<<endl;
		cout<<"=============================="<<endl;
		cout<<"        DATA MAHASISWA"<<endl; 
		cout<<"=============================="<<endl;	
		cout<<endl;
		cout<<" Nama         : "<<nama<<endl;
		cout<<" Tempat Lahir : "<<lahir<<endl;
		cout<<" Kuliah       : "<<kuliah<<endl;
		cout<<" Kelas        : "<<kelas<<endl;
		cout<<" Hobi         : "<<hobi<<endl;
		cout<<endl;
		cout<<"=============================="<<endl;
		cout<<"          THANK YOU"<<endl;
		cout<<"=============================="<<endl;
		cout<<endl;
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
    	// Program Animasi
    	
        setcursor(0,0); 
    srand((unsigned) time(NULL));
 	
	time_t now = time(0);
   
	// convert now to string form
	char* dt = ctime(&now);
	// convert now to tm struct for UTC
	tm *lotm = localtime(&now);
	dt = asctime(lotm);
	
 	int hour = lotm->tm_hour;  
 	int min  = lotm->tm_min;
 	int sec  = lotm->tm_sec;
	
	int gap  = 5;
	int posX;
	int posY  = 8;
	
	while(1){
		system("cls");
		drawBorder(9,4);
		
		posX  = 15;
		
		if(kbhit()){
			char ch = getch();
			if(ch==27){
				break;
			}
		} 
		if( hour < 10 ){
			printDigit(0, posX, posY);
			printDigit(hour, posX+=gap, posY);
		}
		else{
			printDigit(hour/10, posX, posY);
			printDigit(hour%10, posX+=gap, posY);
		}
		
		printDigit(10, posX+=gap, posY);
		
		if( min < 10 ){
			printDigit(0, posX+=gap, posY);
			printDigit(min, posX+=gap, posY);
		}
		else{
			printDigit(min/10, posX+=gap, posY);
			printDigit(min%10, posX+=gap, posY);
		}
		printDigit(10, posX+=gap, posY);
		if( sec < 10 ){
			printDigit(0, posX+=gap, posY);
			printDigit(sec, posX+=gap, posY);
		}
		else{
			printDigit(sec/10, posX+=gap, posY);
			printDigit(sec%10, posX+=gap, posY);
		}
		
		//50 millisecond processing time is deducted, you can change it...
		Sleep(950); 
		sec++;
		if( sec>=60 ){
			sec = 0;
			min++;
		}
		if( min>=60 ){
			min = 0;
			hour++;
		}
		if( hour>=24 ){
			sec = 0;
			min = 0;
			hour = 0;
		}
	}
	
    getch ();
    break;
}
    
    

    case 4:{
    	// Program Daftar Nilai Mahasiswa
    	system("cls");
    	
    	char nim[9];
		string nama;
		int tugas,uas,uts;
		float hasil;
		
			cout<<"                             DAFTAR NILAI MAHASISWA"<<endl;
			cout<<"-----------------------------------------------------------------------------"<<endl;
			cout<<" Masukan Nama          : ";
			cin.ignore();			
			getline(cin, nama);
			cout<<" Masukan Nilai Tugas   : ";cin>>tugas;
			cout<<" Masukan Nilai UTS     : ";cin>>uts;
			cout<<" Masukan Nilai UAS     : ";cin>>uas;
			cout<<"-----------------------------------------------------------------------------"<<endl;
		
			hasil=(tugas*20/100)+(uts*30/100)+(uas*50/100);
		
			cout<<endl;
			cout<<endl;
			cout<<"============================================================================="<<endl;
			cout<<"                                 DAFTAR NILAI                                "<<endl;
			cout<<"============================================================================="<<endl;
			cout<<"Nama              Nilai Tugas            Nilai UTS             Nilai UAS"<<endl;  
			cout<<"============================================================================="<<endl;
			gotoxy(0,16); cout<<nama;
			gotoxy(17,16); cout<<tugas<<" x 20% = "<<(tugas*20/100);
			gotoxy(40,16); cout<<uts<<" x 30% = "<<(uts*30/100);
			gotoxy(60,16); cout<<uas<<" x 50% = "<<(uas*50/100);
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"============================================================================="<<endl;
			cout<<"Total Nilai Yang Di Dapatkan = "<<hasil<<endl;
			cout<<"============================================================================="<<endl;
			
			getch();
    	
		break;
	}
	
	case 5:{
		//Program Hitung Luas Segitiga
    	system("cls");
    	
    	int a,t;
		float luas;
		
			cout <<"=================================="<<endl;
			cout <<" Program Menghitung Luas Segitiga "<<endl;
			cout <<"=================================="<<endl;
			cout<<endl;
			cout << " Masukkan Alas    : "; cin >> a;
			cout << " Masukkan Tinggi  : "; cin >> t;
			cout<<endl;
			
			luas = 0.5*a*t;
			cout <<"=================================="<<endl;
			cout << " Luas Segitiga Adalah : " << luas <<endl;
			cout <<"=================================="<<endl;
			cout<<endl;
			cout <<"            THANK YOU"<<endl;
		
		getch();
		
		break;
	}
	
	case 6:{
		// Program Menentukan Lulus & Tidak Lulus
    	system("cls");
    	
    	double Nilai;
    	string nama, matkul;
    	
    		cout <<"============================================"<<endl;
    		cout <<"| Program Menentukan Lulus Dan Tidak Lulus |" << endl;
    		cout <<"============================================"<<endl;
    		cout<<endl;
    		cout <<" Masukan Nama         : ";
			cin.ignore();			
			getline(cin, nama);
			cout <<" Mata Kuliah          : ";			
			getline(cin, matkul);
			cout <<" Masukkan Nilai       : "; cin >>Nilai;
			cout<<endl;
			cout <<"============================================"<<endl;
			cout <<" Nama         : "<<nama<<endl;
			cout <<" Kuliah       : "<<matkul<<endl;
			if (Nilai >=90)
				cout <<" Hasil        : A Lulus Istimewa  " <<endl;
			else if (Nilai >=80)
				cout <<" Hasil        : B Lulus Sempurna  " <<endl;
			else if (Nilai >=60)
				cout <<" Hasil        : C Lulus           " <<endl;
			else if (Nilai >=50)
				cout <<" Hasil        : D Lulus Besyarat  " <<endl;
			else if (Nilai <50)
				cout <<" Hasil        : Tidak Lulus       " <<endl;
			cout <<"============================================"<<endl;
				
			getch();
    	
		break;
	}
	
	case 7:{
		//Program Hitung Harga BBM
    	system("cls");
    	
    	int solar[50], premium[50], pertamax[50];
        int n, hsolar, hpremium, hpertamax;
        
        cout<<"=============================================================="<<endl;
    	cout<<"|                  Program Hitung Harga BBM                  |"<< endl;
    	cout<<"=============================================================="<<endl;
    	cout<<endl;
        cout<<" Masukan Harga Solar     = "; cin>>hsolar;
        cout<<" Masukan Harga Premium   = "; cin>>hpremium;
        cout<<" Masukan Harga Pertamax  = "; cin>>hpertamax;
        cout<<endl;
        cout<<" Masukan Jumlah liter    = "; cin>>n;

        cout<<endl;
        cout<<"=============================================================="<<endl;
    	cout<<"                         DAFTAR HARGA                       "<< endl;
    	cout<<"=============================================================="<<endl;
        cout<<"LITER          SOLAR             PREMIUM             PERTAMAX "<<endl;
        cout<<"=============================================================="<<endl;

        for (int i=1;i<=n;i++) {
                solar[i]=i*hsolar;
                premium[i]=i*hpremium;
                pertamax[i]=i*hpertamax;
                cout<<i<<"               "<<solar[i]<<"              "<<premium[i]<<"              "<<pertamax[i]<<endl;
        }
        cout<<"=============================================================="<<endl;
        getch();
    	
		break;
	}

    case 8:{
    	// Program Exit
    	
    	exit(0);
	}
    default:
    	//Kondisi Jika Pilihan Tidak Sesuai Kriteria
    	
    	cout<< " Tidak Ada Pilihan Tersebut, Silahkan Masukan Pilihan Yang Benar!!!" << endl;
    }
    cout<<endl;   
		//Kondisi Jika Program Selesai Dijalannkan
	 	
	    cout<< " Ingin Kembali Ke menu Utama (y/t)? ";
	    cin>> ulang;
	    cout<< endl;
  	}
  	while (ulang!= 't');
		cout<< "Terimakasih...";
		cout<< endl;
		return 0;
}
