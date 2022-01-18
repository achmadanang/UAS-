#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

//variabel
    string barang[]={"odol","sikat","sapu"};
    int harga[]={15000,7500,20000};
    string cart_barang[100];
    int cart_harga[100];
    int jumlah,diskon,diskon_member,total,total_member,ulang,indek=-1,N;

int menu(){
    char input;
    char ulang;
    do
	{
        int pilih;
        cout <<"list barang\n";
        cout<<"0. odol -15000\n";
        cout<<"1. sikat -7500\n";
        cout<<"2. sapu -20000\n";
        cout<<"masukan pilihan";
        cin>>pilih;
       {
        cout<<"anda memilih "<<barang[pilih]<<endl;
        indek=indek+1;
        cart_barang[indek]=barang[pilih];
        cart_harga[indek]=harga[pilih];
        jumlah=jumlah+harga[pilih];
        diskon=jumlah*10/100;
        total=jumlah-diskon;
        diskon_member=total*1/100;
        total_member=total-diskon_member;
        }
        cout<<"belanja lagi (y/t)";
        cin >>ulang;
        cout<<endl;
    }while(ulang!='t');
}

string keranjang(int maks,string cart_barang[],int cart_harga[])
{
	char ulang;
    cout<<"Daftar Barang yang anda beli: "<<endl;
    for(int i=0;i<=maks;i++)
	{
		cout<<i+1<<". "<<cart_barang[i]<<endl;
		cout<<"Rp. "<<cart_harga[i]<<endl;
    }
    cout<<endl;
    cout<<"total "<<jumlah<<endl;
    cout<<"diskon "<<diskon<<endl;
    cout<<"bayar "<<total<<endl;
    do
	{
        int pilih;
       {
        indek=indek+1;
        cart_barang[indek]=barang[pilih];
        cart_harga[indek]=harga[pilih];
        }
        cout<<endl;
        cout<<"member (y/t)";
        cin>>ulang;
        cout<<"diskon member"<<diskon_member<<endl;
        cout<<"bayar"<<total_member;
        cout<<endl;
    }while(ulang!='t');
    cout <<"trimakasih";
}

int main()
{
    menu();
    keranjang(indek,cart_barang,cart_harga);
}
