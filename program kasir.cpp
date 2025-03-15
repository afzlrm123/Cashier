#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main ()
{
	int kode,pri,jumlah,total,bayar,kembalian;
	char mad;
	do
	{
		cout<<"Rumah Makan Sari Rasa"<<endl;
		cout<<"Solusi anda ketika kelaparan"<<endl;
		cout<<"Jln.Tentara Pelajar,Cikabuyutan Barat"<<endl;
		cout<<"======================================"<<endl;
		cout<<""<<endl;
		cout<<"Daftar Menu                            Harga"<<endl;
		cout<<"1.PAKET AYAM+NASI+AIR MINERAL		  Rp.16.000"<<endl;
		cout<<"2.PAKET AYAM BAKAR+NASI+ES TEH         Rp.18.000"<<endl;
		cout<<"3.PAKET AYAM GEPREK+NASI+ES TEH        Rp.17.000"<<endl;
		cout<<"4.PAKET PECEL AYAM+NASI+ES TEH         Rp.17.000"<<endl;
		cout<<"5.Nasi                                 Rp.3.000"<<endl;
		cout<<"6.Ayam(Bakar,Geprek,Goreng Pecel)      Rp.10.000"<<endl;
		cout<<"7.Es teh                               Rp.5.000"<<endl;
		cout<<"8.Es Jeruk                             Rp.5.000"<<endl;
		cout<<"9.Air Mineral                          Rp.3.000"<<endl;
		cout<<"10.Mendoan                             Rp.1.000"<<endl;
		cout<<'\n'<<"Masukkan Pilihan :";
		cin>>kode;
		switch(kode){
			
			case 1:
		    cout<<'\n'<<"AYAM GORENG + NASI PUTIH + AIR MINERAL"<<endl;
        pri=10000+3000+3000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
          
		  case 2:
        cout<<'\n'<<"AYAM BAKAR + NASI PUTIH + ES TEH"<<endl;
        pri=10000+3000+5000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
        
          case 3:
        cout<<'\n'<<"AYAM GEPREK + NASI PUTIH + AIR MINERAL"<<endl;
        pri=10000+3000+4000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
        
         case 4: 
        cout<<'\n'<<"PECEL AYAM + NASI PUTIH + AIR MINERAL"<<endl;
        pri=10000+3000+4000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
        
        case 5:
        cout<<'\n'<<"NASI"<<endl;
        pri=3.000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
        
        case 6:
        cout<<'\n'<<"AYAM(Bakar,Goreng,Geprek,Pecel)"<<endl;
        pri=10000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
        
        case 7:
        cout<<'\n'<<"ES TEH"<<endl;
        pri=5000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
        
        case 8:
        cout<<'\n'<<"ES JERUK"<<endl;
        pri=5000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
        
        case 9:
        	cout<<'\n'<<"AIR MINERAL"<<endl;
        pri=3000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
        
        case 10:
        cout<<'\n'<<"MENDOAN"<<endl;
        pri=1000;
        cout<<"Masukan jumlah:";
        cin>>jumlah;
        total=pri*jumlah;
        cout<<"Total harga: Rp."<<total<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"KEMBALI: Rp."<<kembalian<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    deafult:
    	cout<<"kode yang dimasukkan tidak ada ";
    }
	}	
    while(mad/='Y');
	cout<<"Terimakasih atas kunjungan anda";
	getch();
	return 0;   
				
}
