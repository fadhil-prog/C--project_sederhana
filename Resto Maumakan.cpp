#include <iostream>
using namespace std;
int main(){
    char lagi;
    int kode;
    float soto =18000,sate =22500,ayam_bakar =20000,jus_mangga =10000,es_teh=5000,kopi=7000;
    float jumlah_beli,totalharga,jarak,hargajarak,total_ongkir,total_yg_dibayar,total_diskon,hm,hargaminuman;
    float hargasoto=0,hargaab=0,hargasate=0,hargajm=0,hargaet=0,hargak=0;

    cout<<"Mau Beli Makan Apa?"<<endl;
    cout<<"1. Soto : Rp.18000"<<endl;
    cout<<"2. Ayam Bakar : Rp.20000"<<endl;
    cout<<"3. Sate : Rp.22500"<<endl;

    makanan:
    cout<<"Masukkan Angka Makanan= ";cin>>kode;
    cout<<"Mau Beli Berapa? ";cin>>jumlah_beli;
    cout<<"Pesanan Makanan =";

    switch (kode){
    case 1:{
        cout<<"Soto"<<endl;
        hargasoto=soto*jumlah_beli;
    }break;
    case 2:{
        cout<<"Ayam Bakar"<<endl;
        hargaab=ayam_bakar*jumlah_beli;
    }break;
    case 3:{
        cout<<"Sate"<<endl;
        hargasate=sate*jumlah_beli;
    }break;
    default:
    cout<<"Kode Salah";
    }
    cout<<"Mau Beli Lagi? [y/t] ";cin>>lagi;
    if(lagi=='y'){
        goto makanan;
    }else{
        goto total_makanan;
    }
    total_makanan:
    hm=hargasoto+hargaab+hargasate;
    cout<<"Jumlah Harga Makanan Adalah Rp."<<hm<<endl;
    
    cout<<"Mau Beli Minuman Apa? "<<endl;
    cout<<"1. Jus Mangga :Rp.10000"<<endl;
    cout<<"2. Es Teh :Rp. 5000"<<endl;
    cout<<"3. Kopi :Rp. 7000"<<endl;
    minuman:
    cout<<"Masukkan Angka Minuman= ";cin>>kode;
    cout<<"Mau Beli Berapa? ";cin>>jumlah_beli;
    cout<<"Pesanan Minuman =";

    switch (kode){
    case 1:{
        cout<<"Jus Mangga"<<endl;
        hargajm=jus_mangga*jumlah_beli;
    }break;
    case 2:{
        cout<<"Es TEH"<<endl;
        hargaet=es_teh*jumlah_beli;
    }break;
    case 3:{
        cout<<"Kopi"<<endl;
        hargak=kopi*jumlah_beli;
    }break;
    default:
    cout<<"Kode Salah";
    }
    cout<<"Mau Beli Lagi? [y/t] ";cin>>lagi;
    if(lagi=='y'){
        goto minuman;
    }else{
        goto total;
    }

    total:
    hargaminuman=hargajm+hargaet+hargak;
    cout<<"Jumlah Harga Minuman Anda Adalah Rp."<<hargaminuman<<endl;

    cout<<"Berapa Jauh Jarak Anda [dalam KM]=";cin>>jarak;
    if(jarak <5){
        hargajarak=9500;
    }else if((jarak >=5) && (jarak<=10)){
        hargajarak=12500;
    }else if(jarak>10){
        hargajarak=15000;
    }
    totalharga=hargaminuman+hm;
    cout<<"Total Harga Anda Adalah Rp. "<<totalharga<<endl;
    if(totalharga>=30000){
        total_diskon=hargajarak*0.1;
    }
    total_ongkir=hargajarak-total_diskon;
    cout<<"Total Ongkir Anda Adalah Rp. "<<total_ongkir<<endl;
    total_yg_dibayar=totalharga+total_ongkir;
    cout<<"Total Yang Harus Dibayar Adalah Rp. "<<total_yg_dibayar<<endl;

    return 0;
}