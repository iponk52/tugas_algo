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
	cout.precision(3);
// variabel	tambahan
	string bye ="*****************************\n"
				"*                           *\n"
				"*   Selamat Tinggal   >_<   *\n"
				"*                           *\n"
				"*****************************\n";
	string rumus =	"v = kecepatan \n"
					"t = jarak tempuh\n"
					"s = waktu tempuh \n";
	string jabar_1 = "jadi rumus yang di gunakan sekarang adalah = ";


								
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
//kecepatan start									
										system ("CLS");
										cout<<"Masukan Jarak Tempuh Dengan Satuan KM : ";
										cin>>a1;
										waktu :
										cout<< "pilih satuan waktu, (J)=jam atau (M)=Menit = ";
										cin>>satuan;
										if (satuan == 'm'|| satuan == 'M'){
											cout<<"masukan waktu tempuh dengan satuan Menit = ";
											cin>>am;
											hasil = am/60;
											system ("CLS");
											jawab_1 :
											cout<<"**************************************************************************************************************\n";
											cout<<"*                                                                                                            *\n";
											cout<<"      kecepatan dari jarak tempuh "<<a1<<" KM"<<" dengan waktu "<<am<<" menit adalah "<<a1/hasil<<" KM/Jam     \n";
											cout<<"*                                                                                                            *\n";
											cout<<"*   (Y) = melihat menjabaran     (M) = Kembali Ke Menu Utama      (X) = Keluar                               *\n";
											cout<<"**************************************************************************************************************\n";
											cout<<"\n";
											cout<<"ingin melihat menjabarannya ?, pilih 'Y' untuk melihat, atau 'M' untuk kembali ke menu = " ;
												cin>>op_menu;
													if (op_menu == 'y'||op_menu == 'Y'){
														system("CLS");
														j1:
														cout<<"untuk rumus mecari kecepatan adalah Jarak Di Bagi Waktu (v=s/t)\n";
														cout<<"\n";
														cout<< rumus;
														cout<<"\n";
														cout<< jabar_1<<" "<<a1<<" / ("<< am << "/60 )\n";
														cout<<"\n";
														cout<<"karena waktu yang di gunakan adalah menit, maka di ubah menjadi jam dengan cara (menit / 60)\n";
														cout<<"\n";
														cout<<"jadi "<<am<<"/ 60"<<" = "<<hasil<<" jam\n";
														cout<<"\n";
														cout<<	"dik : \n"
																<<"s = "<<a1<<" KM\n"
																<<"t = "<<hasil<<" jam\n"
																<<"dit : \n"
																<<"v   = ?\n"
																<<"v   = "<<a1<<"/"<<hasil<<"\n"
																<<"    = "<<a1/hasil<<" KM/Jam"
																<<"\n"
																<<"\n"
																<<"jadi kecepatan dari jarak tempuh "<<a1
																<<" KM"<<" dengan waktu "<<am<<" menit adalah "
																<<a1/hasil<<" KM/Jam"
																<<"\n"
																<<"\n";
														cout<<"(M) = Kembali Ke Menu Utama      (X) = Keluar";
														cout<<"\n"
															<<"\n"
															<<"silahkan masukan pilihan anda = ";
														cin>>op_menu;
														if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
														}else if (op_menu == 'x'|| op_menu == 'X'){
															system("CLS");
															cout<<bye;
															break ;
															exit(0);
														}else{
														system("CLS");
														cout<<"kode yang anda masukan salah \n";
														goto j1;
														}
														
													}else if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
													}else if (op_menu == 'x'|| op_menu == 'X'){
														system("CLS");
														cout<<bye;
														break ;
														exit(0);
													}else{
													system("CLS");
													cout<<"kode yang anda masukan salah \n";
													goto jawab_1;
													}
										}else if (satuan == 'J' || satuan == 'j'){
											cout<<"masukan waktu tempuh dengan satuan Jam = ";
											cin>>aj;
											system ("CLS");
											jawab_2j :
											cout<<"**************************************************************************************************************\n";
											cout<<"*                                                                                                            *\n";
											cout<<" kecepatan dari jarak tempuh "<<a1<<" KM"<<" dengan waktu "<<aj<<" jam"<<" adalah "<<a1/aj<<"KM/Jam     \n";
											cout<<"*                                                                                                            *\n";
											cout<<"*   (Y) = melihat menjabaran     (M) = Kembali Ke Menu Utama      (X) = Keluar                               *\n";
											cout<<"**************************************************************************************************************\n";
											cout<<"\n";
											cout<<"ingin melihat menjabarannya ?, pilih 'Y' untuk melihat, atau 'M' untuk kembali ke menu = " ;
												cin>>op_menu;
													if (op_menu == 'y'||op_menu == 'Y'){
														system("CLS");
														j2:
														cout<<"untuk rumus mecari kecepatan adalah Jarak Di Bagi Waktu (v=s/t)\n";
														cout<<"\n";
														cout<< rumus;
														cout<<"\n";
														cout<< jabar_1<<" "<<a1<<" / "<< aj <<"\n";
														cout<<"\n";
														cout<<"karena waktu yang di gunakan adalah jam, maka langsung di bagi menggunakan rumus \n";
														cout<<"\n";
														cout<<	"dik : \n"
																<<"s = "<<a1<<" KM\n"
																<<"t = "<<aj<<" jam\n"
																<<"dit : \n"
																<<"v   = ?\n"
																<<"v   = "<<a1<<"/"<<aj<<"\n"
																<<"    = "<<a1/aj<<" KM/Jam"
																<<"\n"
																<<"\n"
																<<"jadi kecepatan dari jarak tempuh "<<a1
																<<" KM"<<" dengan waktu "<<aj<<" jam adalah "
																<<a1/aj<<" KM/Jam"
																<<"\n"
																<<"\n";
														cout<<"(M) = Kembali Ke Menu Utama      (X) = Keluar";
														cout<<"\n"
															<<"\n"
															<<"silahkan masukan pilihan anda = ";
														cin>>op_menu;
														if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
														}else if (op_menu == 'x'|| op_menu == 'X'){
															system("CLS");
															cout<<bye;
															break ;
															exit(0);
														}else{
														system("CLS");
														cout<<"kode yang anda masukan salah \n";
														goto j2;
														}
														
													}else if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
													}else if (op_menu == 'x'|| op_menu == 'X'){
														system("CLS");
														cout<<bye;
														break ;
														exit(0);
													}else{
													system("CLS");
													cout<<"kode yang anda masukan salah \n";
													goto j2;
													};
										}else{
											system ("CLS");
											cout<<"pilihan yang anda masukan salah \n";
											goto waktu;
										};
										
										break;
//kecepatan end									
									case '2':
//jarak tempuh start				
										system ("CLS");
										cout<<"Masukan Kecepatan Dengan Satuan KM/Jam : ";
										cin>>a1;
										cout<< "pilih satuan waktu, (J)=jam atau (M)=Menit = ";
										cin>>satuan;
										if (satuan == 'm'|| satuan == 'M'){
											cout<<"masukan waktu tempuh dengan satuan Menit = ";
											cin>>am;
											hasil = am/60;
											system ("CLS");
											jawab_3 :
											cout<<"**************************************************************************************************************\n";
											cout<<"*                                                                                                            *\n";
											cout<<"      Jarak tempuh dari kecepatan "<<a1<<" KM/jam"<<" dengan waktu "<<am<<" menit adalah "<<a1/hasil<<" KM     \n";
											cout<<"*                                                                                                            *\n";
											cout<<"*   (Y) = melihat menjabaran     (M) = Kembali Ke Menu Utama      (X) = Keluar                               *\n";
											cout<<"**************************************************************************************************************\n";
											cout<<"\n";
											cout<<"ingin melihat menjabarannya ?, pilih 'Y' untuk melihat, atau 'M' untuk kembali ke menu = " ;
												cin>>op_menu;
													if (op_menu == 'y'||op_menu == 'Y'){
														system("CLS");
														cout<<"untuk rumus mecari jarak adalah Kecepatan Di Kali Waktu (s = v * t)\n";
														cout<<"\n";
														cout<< rumus;
														cout<<"\n";
														cout<< jabar_1<<" "<<a1<<" * ("<< am << "/60 )\n";
														cout<<"\n";
														cout<<"karena waktu yang di gunakan adalah menit, maka di ubah menjadi jam dengan cara (menit / 60)\n";
														cout<<"\n";
														cout<<"jadi "<<am<<"/ 60"<<" = "<<hasil<<" jam\n";
														cout<<"\n";
														cout<<	"dik : \n"
																<<"v = "<<a1<<" KM/jam\n"
																<<"t = "<<hasil<<" jam\n"
																<<"dit : \n"
																<<"s   = ?\n"
																<<"s   = "<<a1<<" * "<<hasil<<"\n"
																<<"    = "<<a1/hasil<<" KM"
																<<"\n"
																<<"\n"
																<<"jadi jarak dari kecepatan "<<a1
																<<" KM/jam"<<" dengan waktu "<<am<<" menit adalah "
																<<a1/hasil<<" KM/Jam"
																<<"\n"
																<<"\n";
														cout<<"(M) = Kembali Ke Menu Utama      (X) = Keluar";
														cout<<"\n"
															<<"\n"
															<<"silahkan masukan pilihan anda = ";
														cin>>op_menu;
														if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
														}else if (op_menu == 'x'|| op_menu == 'X'){
															system("CLS");
															cout<<bye;
															break ;
															exit(0);
														}else{
														system("CLS");
														cout<<"kode yang anda masukan salah \n";
														goto jawab_3;
														}
														
													}else if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
													}else if (op_menu == 'x'|| op_menu == 'X'){
														system("CLS");
														cout<<bye;
														break ;
														exit(0);
													}else{
													system("CLS");
													cout<<"kode yang anda masukan salah \n";
													goto jawab_3;
													}
										}else if (satuan == 'J' || satuan == 'j'){
											cout<<"masukan waktu tempuh dengan satuan Jam = ";
											cin>>aj;
											system ("CLS");
											jawab_1j :
											cout<<"**************************************************************************************************************\n";
											cout<<"*                                                                                                            *\n";
											cout<<"      Jarak tempuh dari kecepatan "<<a1<<" KM/jam"<<" dengan waktu "<<am<<" menit adalah "<<a1*aj<<" KM     \n";
											cout<<"*                                                                                                            *\n";
											cout<<"*   (Y) = melihat menjabaran     (M) = Kembali Ke Menu Utama      (X) = Keluar                               *\n";
											cout<<"**************************************************************************************************************\n";
											cout<<"\n";
											cout<<"ingin melihat menjabarannya ?, pilih 'Y' untuk melihat, atau 'M' untuk kembali ke menu = " ;
												cin>>op_menu;
													if (op_menu == 'y'||op_menu == 'Y'){
														system("CLS");
														cout<<"untuk rumus mecari jarak adalah Kecepatan Di Kali Waktu (s = v * t)\n";
														cout<<"\n";
														cout<< aj;
														cout<<"\n";
														cout<<	"dik : \n"
																<<"v = "<<a1<<" KM/jam\n"
																<<"t = "<<aj<<" jam\n"
																<<"dit : \n"
																<<"s   = ?\n"
																<<"s   = "<<a1<<" * "<<aj<<"\n"
																<<"    = "<<a1*aj<<" KM"
																<<"\n"
																<<"\n"
																<<"jadi jarak dari kecepatan "<<a1
																<<" KM/jam"<<" dengan waktu "<<am<<" menit adalah "
																<<a1*aj<<" KM"
																<<"\n"
																<<"\n";
														cout<<"(M) = Kembali Ke Menu Utama      (X) = Keluar";
														cout<<"\n"
															<<"\n"
															<<"silahkan masukan pilihan anda = ";
														cin>>op_menu;
														if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
														}else if (op_menu == 'x'|| op_menu == 'X'){
															system("CLS");
															cout<<bye;
															break ;
															exit(0);
														}else{
														system("CLS");
														cout<<"kode yang anda masukan salah \n";
														goto jawab_1j;
														}
														
													}else if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
													}else if (op_menu == 'x'|| op_menu == 'X'){
														system("CLS");
														cout<<bye;
														break ;
														exit(0);
													}else{
													system("CLS");
													cout<<"kode yang anda masukan salah \n";
													goto jawab_1;
													};
										}else{
											system ("CLS");
											cout<<"pilihan yang anda masukan salah \n";
											goto waktu;
										};
										
										break;
//jarak tempuh end										
									case '3':
//waktu tempuh
										system ("CLS");
										cout<<"Masukan Jarak Tempuh Dengan Satuan KM : ";
										cin>>a1;
										cout<< "Masukan Kecepatan Tempuh Dengan Satuan KM/Jam : ";
										cin>>aj;
										system ("CLS");
										jawab_4j :
										cout<<"**************************************************************************************************************\n";
										cout<<"*                                                                                                            *\n";
										cout<<"      Waktu tempuh dari Jarak "<<a1<<" KM"<<" dengan kecepatan "<<a1<<" KM/Jam adalah "<<a1/aj<<" jam     \n";
										cout<<"*                                                                                                            *\n";
										cout<<"*   (Y) = melihat menjabaran     (M) = Kembali Ke Menu Utama      (X) = Keluar                               *\n";
										cout<<"**************************************************************************************************************\n";
										cout<<"\n";
										cout<<"ingin melihat menjabarannya ?, pilih 'Y' untuk melihat, atau 'M' untuk kembali ke menu = " ;
											cin>>op_menu;
												if (op_menu == 'y'||op_menu == 'Y'){
													system("CLS");
													cout<<"untuk rumus mecari waktu tempuh adalah Jarak di bagi kecepatan (t = s / v)\n";
													cout<<"\n";
													cout<< rumus;
													cout<<"\n";
													cout<< jabar_1<<" "<<a1<<" / ("<< am << "/60 )\n";
													cout<<"\n";
													cout<<"karena waktu yang di gunakan adalah menit, maka di ubah menjadi jam dengan cara (menit / 60)\n";
													cout<<"\n";
													cout<<"jadi "<<am<<"/ 60"<<" = "<<aj<<" jam\n";
													cout<<"\n";
													cout<<	"dik : \n"
															<<"s = "<<a1<<" KM\n"
															<<"v = "<<aj<<" KM/jam\n"
															<<"dit : \n"
															<<"t   = ?\n"
															<<"t   = "<<a1<<" / "<<aj<<"\n"
															<<"    = "<<a1/aj<<" Jam"
															<<"\n"
															<<"\n"
															<<"jadi waktu dari jarak "<<a1
															<<" KM"<<" dengan dengan kecepatan "<<am<<" KM/Jam adalah "
															<<a1/aj<<" Jam"
															<<"\n"
															<<"\n";
													cout<<"(M) = Kembali Ke Menu Utama      (X) = Keluar";
													cout<<"\n"
														<<"\n"
														<<"silahkan masukan pilihan anda = ";
													cin>>op_menu;
														if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
														}else if (op_menu == 'x'|| op_menu == 'X'){
															system("CLS");
															cout<<bye;
															break ;
															exit(0);
														}else{
														system("CLS");
														cout<<"kode yang anda masukan salah \n";
														goto jawab_4j;
														}
														
													}else if (op_menu == 'm'||op_menu == 'M'){
														system("CLS");
														goto menu;
													}else if (op_menu == 'x'|| op_menu == 'X'){
														system("CLS");
														cout<<bye;
														break ;
														exit(0);
													}else{
													system("CLS");
													cout<<"kode yang anda masukan salah \n";
													goto jawab_1;
													};
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

