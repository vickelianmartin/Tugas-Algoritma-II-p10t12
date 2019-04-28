#include<iostream>
#include<stdlib.h>
using namespace std;

int data[100],jml,ketemu=0,cari,hapus,edit,temp;
bool kondisi=0;

void sorting(){
    for (int i=jml-2;i>=0;i--){
      for (int j=0;j<=i;j++){
        if (data[j]>data[j+1]){
            temp=data[j];
            data[j]=data[j+1];
            data[j+1]=temp;
        }}}
cout<<"\n   S O R T I N G   D A T A \n";
    for (int i=0;i<jml;i++){
         cout<<"\nData Ke "<<i+1<<" : "<<data[i];}
}

void searching(){
cout<<"\n   S E A R C H I N G   D A T A \n";
cout<<"Masukkan nilai data yang dicari : ";cin>>cari;
cout<<"Nilai "<<cari<<" terdapat pada data ke ";
for (int i=0;i<jml;i++){
    if (cari==data[i]){
        kondisi=true;
        kondisi++;
         if(kondisi==1){
            cout<<i+1<<"  ,";
            ketemu=1;
        }}}
	     if(ketemu==0)
            cout<<"Maaf data tidak ditemukan ";
}

void hapusing(){
cout<<"\n   H A P U S   D A T A \n";
cout<<"Masukkan nilai data yang dihapus : ";cin>>hapus;
	for (int i=0;i<jml;i++){
		if (hapus==data[i]){
          for (int j=i;j<jml;j++){
				data[j]=data[j+1];
				}
			jml-=1;
		}}
	cout<<"Data baru : ";
	for (int k=0;k<jml;k++){
       cout<<"\nData ke "<<k+1<<" : "<<data[k];}
}

void editing(){
cout<<"\n   E D I T   D A T A  \n";
cout<<"Masukkan nilai data yang diedit : ";cin>>edit;
	for (int u=0;u<jml;u++){
		if (data[u]==edit){
			cout<<"Masukka nilai baru : ";cin>>data[u];
    }}
	for(int i=jml-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(data[j]>data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
        }}}
    cout<<"Data setelah diedit : ";
    for(int s=0;s<jml;s++){
    cout<<"\nData Ke "<<s+1<<" : "<<data[s];}
}

main(){
int pilihan;
char ul;
cout<<"   I N S E R T   D A T A \n";
cout<<"\nMasukkan jumlah data : ";cin>>jml;
    for(int i=0;i<jml;i++){
      cout<<"Masukkan data ke "<<i+1<<" : ";
      cin>>data[i];
    }
    system("CLS");
do{
cout<<"Data yang telah diinputkan akan di ??\n";
cout<<"1. sorting\n2. searching\n3. hapus\n4. edit\n";
cout<<"Pilihan (1/2/3/4) : ";cin>>pilihan;
if (pilihan==1)
   sorting();
else if (pilihan==2)
   searching();
else if (pilihan==3)
    hapusing();
else if (pilihan==4)
    editing();
cout<<"\n\nUlangi (y/t) : ";cin>>ul;
system("CLS");}
while (ul=='y');
}
