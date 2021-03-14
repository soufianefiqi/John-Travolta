#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

//DEKLARASI VARIABLE
	int gaji_perjam = 15000;
	int jam_normal = 40;
	int total_jamkerja, gaji_normal, total_gaji, pengeluaran, tabungan, tambahan_gaji;
//DEKLARASI FUNGSI 
	void hitung_gajiNormal();
	void hitung_totalgaji();
	void nabung();
	
int main() {
	char yt;
	cout<<"------------------------------------------------\n";
	cout<<"=========PROGRAM HITUNG GAJI BAPAK JOHN=========\n";
	cout<<"-------------------------------------------------\n";
	cout<<endl;
	awal:
	cout<<"Berapa jam kerja minggu ini ? ";
	cin>>total_jamkerja;
	cout<<"Berapa jumlah pengeluaran minggu ini ? ";
	cin>>pengeluaran;
	
	if(total_jamkerja > jam_normal){
		hitung_totalgaji();
		cout<<"*note :\n";
		cout<<"Jam kerja John melebihi 40 jam perminggu\n";
		cout<<"Tambahan gaji = Rp. "<<tambahan_gaji<<endl;
	}
	else if(total_jamkerja < jam_normal) {
		total_gaji = total_jamkerja * gaji_perjam;
	}
	else{
		total_gaji = total_jamkerja * gaji_perjam;
	}
	
	cout<<"Total gaji John Minggu ini = Rp. "<<total_gaji<<endl;
	cout<<endl;
	cout<<"-----TABUNGAN-----\n";
	nabung();
	cout<<"Jumlah uang yang bisa ditabung = Rp. "<<tabungan<<"\n"<<endl;
	cout<<"Entry Data Lagi?(y/n) ";
	cin>>yt;
	cout<<"\n"<<endl;
	cout<<"===========================================\n"<<endl;
	if(yt == 'Y'||yt == 'y'){
		goto awal;
	}
	if(yt == 'T'|| yt == 't'){
		goto akhir;
	}
	akhir:
		cout<<"TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI"<<endl;
	return 0;
}

void hitung_gajiNormal(){
	gaji_normal = gaji_perjam * jam_normal;
} 
void hitung_totalgaji(){
	hitung_gajiNormal();
	tambahan_gaji = (total_jamkerja - jam_normal) * 22500;
	total_gaji = gaji_normal + tambahan_gaji;
}
void nabung(){
	if(total_gaji > pengeluaran){
		cout<<"Mr.John bisa menabung"<<endl;
		tabungan = total_gaji - pengeluaran;
	}
	else if(total_gaji < pengeluaran){
		cout<<"Mr.John perlu mencari tambahan!"<<endl;
		tabungan = 0;
	}
	else if (total_gaji = pengeluaran){
		cout<<"Mr.John tidak bisa menabung"<<endl;
		tabungan = 0;
	}
}
