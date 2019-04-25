#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <conio.h>
#include <sstream>
#include <stdio.h>
#include <iomanip> //untuk desimal

using namespace std;



int main(int argc, char** argv) {
 
// variabel utama
	float a1, a2, hasil,am,aj,total;
	char op_menu;
	char perintah;
	char c_op;
	char satuan;
	cout.precision(4);
// variabel	tambahan
	string bye ="*****************************\n"
				"*                           *\n"
				"*   Selamat Tinggal   >_<   *\n"
				"*                           *\n"
				"*****************************\n";
								
// program mulai				
	menu:
		printf ("***************************************\n"
				"* Selamat Datang di Kalkulator FISIKA *\n"
				"***************************************\n"
				"* Menu :                              *\n"
				"***************************************\n"
				"* 1. Masuk Ke Kalkulator              *\n"
				"* 2. Tentang Kalkulator               *\n"
				"* 3. Keluar                           *\n"
				"***************************************\n"
				"* Creator BY   : Irfan Dharmawan      *\n"
				"* NIM          : 181011450462         *\n"
				"***************************************\n"
				"masukan pilihan anda : "); 
				cin>> op_menu;
		switch (op_menu){
						case '1':
// main kalkulator
							system ("CLS");
							menu_main:
								printf ("**********************************************\n"
										"*                                            *\n"
										"*   kalkulator ( Kecepatan, Jarak, Waktu )   *\n"
										"* silahkan pilih KALKULATOR yang di butuhkan *\n"
										"*                                            *\n"
										"**********************************************\n"
										"*                                            *\n"
										"* 1. Mencari Kecepatan                       *\n"
										"* 2. Mencari Jarak Tempuh                    *\n"
										"* 3. Mencari Waktu Tempuh                    *\n"
										"*                                            *\n"
										"*                                            *\n"
										"*                                            *\n"
										"* (M) = Menu                      (X) = Exit *\n"
										"**********************************************\n"
										"                                              \n"
										"masukan pilihan anda : "		
								);
								cin>>c_op;
								switch (c_op){
									case '1':
										system ("CLS");
										cout<<"Masukan Jarak Tempuh Dengan Satuan KM : ";
										cin>>a1;
										waktu :
										system ("CLS");
										cout<< "pilih satuan waktu, (J)=jam atau (M)=Menit = ";
										cin>>satuan;
										if (satuan == 'm'|| satuan == 'M'){
											system ("CLS");
											cout<<"masukan waktu tempuh dengan satuan Menit = ";
											cin>>am;
											hasil = am/60;
											total = hasil+aj;
											cout<<"kecepatan dari jarak tempuh "<<a1<<" KM"<<" dengan waktu "<<am<<" menit adalah "<<a1/total<<" KM/Jam";
										}else if (satuan == 'J' || satuan == 'j'){
											system ("CLS");
											cout<<"masukan waktu tempuh dengan satuan Jam = ";
											cin>>aj;
											total = hasil+aj;
											cout<<"kecepatan dari jarak tempuh "<<a1<<" KM"<<" dengan waktu "<<total<<" jam"<<" adalah "<<a1/total<<"KM/Jam";
										}else{
											system ("CLS");
											cout<<"pilihan yang anda masukan salah \n";
											goto waktu;
										};
										
										break;
									case '2':
										printf ("Jarak");
									case '3':
										printf ("waktu");
									case 'm' :
										system ("CLS");
										goto menu;
									case 'M' :
										system ("CLS");
										goto menu;
									case 'x':
										system ("CLS");
										cout<<bye;
										break;
										exit(0);
									case 'X':
										system ("CLS");
										cout<<bye;
										break;
										exit(0);
								};
							break;
//akhir kalkulator
						case '2':
//tentang 
							system ("CLS");
							tentang:
								printf ("**********************************************************************\n"
										"*                                                                    *\n"
										"* Kalkulator fisika ini di buat untuk melunasi tugas yang di berikan *\n"
										"*                                                                    *\n"
										"*    (M) = Menu                                        (X) = Exit    *\n"
										"**********************************************************************\n"
										
								);
							cin>>perintah;
							if (perintah == 'M' || perintah == 'm'){
								system ("CLS");
								goto menu;
								}else if (perintah == 'x' || perintah == 'X'){
								system ("CLS");
								cout<<bye;
								break;
								exit(0);
								}else {
								system ("CLS");
								goto tentang;
								};
// akhir tentang
						case '3':
							system ("CLS");
							cout<<bye;
							break;
							exit(0);
						case 'x':
							system ("CLS");
							cout<<bye;
							break;
							break ;
							exit(0);
						case 'X':
							system ("CLS");
							cout<<bye;
							break;
							exit(0);						
						default :
							system ("CLS");
							printf 	("\n"
									"  Pilihan Yang Anda Masukan Salah !!! \n"
									"\n"
									);
							goto menu;										
		}

	getch();
}

