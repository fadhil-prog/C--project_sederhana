#include <iostream>
using namespace std;
int main (){
    int tepung,gula,harga_modal,gula1,tepung1,jumlah_donat,pendapatan,keuntungan;
    int tepung_10donat=500,donat1=10,harga_modal_tepung=200000,tepung_yg_dibeli=20000;
    int gula_10donat=100,harga_modal_gula=120000,harga_jual=6000,gula_yg_dibeli=10000;
    
    tepung=tepung_10donat/donat1;
    gula=gula_10donat/donat1;

    harga_modal=harga_modal_gula+harga_modal_tepung;
    tepung1=tepung_yg_dibeli/tepung;
    gula1=gula_yg_dibeli/gula;

    if(tepung1<=gula1){
        jumlah_donat=tepung1;
    }   else{jumlah_donat=gula1;}

    pendapatan=harga_jual*jumlah_donat;
    keuntungan=pendapatan-harga_modal;

    cout<<"Jumlah Donat yang Bisa Dibuat = "<<jumlah_donat<<endl;
    cout<<"Keuntungan Penjualan = "<<keuntungan<<endl;
    
    return 0;
}