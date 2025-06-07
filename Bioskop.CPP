#include <iostream>
using namespace std;
int main(){
    char lagi;
    int anak,remaja,dewasa,jumlah_tiket,umur,totalharga;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0;
    cout<<"========================================"<<endl;
    cout<<"|    Selamat Datang di Bioskop XXII    |"<<endl;
    cout<<"========================================"<<endl;
    atas:
    cout<<"Masukkan umur anda= ";cin>>umur;

    if (umur>=17){
        cout<<"Anda Termasuk Kategori Dewasa (17 Tahun Keatas)"<<endl;
        goto dewasa;
    }else if((umur>=13) && (umur<=16)){
        cout<<"Anda Termasuk Kategori Remaja (13-16 Tahun)"<<endl;
        goto remaja;
    }else if(umur<=12){
        cout<<"Anda Termasuk Kategori Anak-anak (0-12 Tahun)"<<endl;
        goto anak;
    }
    anak:
    cout<<"Pilihan Film Anda: "<<endl;
    cout<<"1. UP! (Rp. 40000)"<<endl;
    cout<<"2. Smurf: The Lost VIllage (Rp. 35000)"<<endl;
    cout<<"Pilih Sesuai Angka: ";cin>>anak;
    cout<<"Jumlah tiket= ";cin>>jumlah_tiket;
    cout<<"Nama Film Anda Adalah ";
    switch(anak){
        case 1:{
            cout<<"UP!"<<endl;
            a=40000*jumlah_tiket;
            goto perulangan;
        }break;
        case 2:{
            cout<<"Smurf: The Lost VIllage"<<endl;
            b=35000*jumlah_tiket;
            goto perulangan;
        }break;
        default:
        cout<<"Kode Salah";
    }

    remaja:
    cout<<"Pilihan Film Anda: "<<endl;
    cout<<"1. UP! (Rp. 40000)"<<endl;
    cout<<"2. Smurf: The Lost VIllage (Rp. 35000)"<<endl;
    cout<<"3. Black Panther (Rp. 45000)"<<endl;
    cout<<"4. Hacksaw Ridge (Rp. 45000)"<<endl;
    cout<<"Pilih Sesuai Angka: ";cin>>remaja;
    cout<<"Jumlah tiket= ";cin>>jumlah_tiket;
    cout<<"Nama Film Anda Adalah ";
    switch(remaja){
        case 1:{
            cout<<"UP!"<<endl;
            c=40000*jumlah_tiket;
            goto perulangan;
        }break;
        case 2:{
            cout<<"Smurf: The Lost VIllage"<<endl;
            d=35000*jumlah_tiket;
            goto perulangan;
        }break;
        case 3:{
            cout<<"Black Panther"<<endl;
            e=45000*jumlah_tiket;
            goto perulangan;
        }break;
        case 4:{
            cout<<"Hacksaw Ridge"<<endl;
            f=45000*jumlah_tiket;
            goto perulangan;
        }break;
        default:
        cout<<"kode salah";
    }

    dewasa:
    cout<<"Pilihan Film Anda: "<<endl;
    cout<<"1. UP! (Rp. 40000)"<<endl;
    cout<<"2. Smurf: The Lost VIllage (Rp. 35000)"<<endl;
    cout<<"3. Black Panther (Rp. 45000)"<<endl;
    cout<<"4. Hacksaw Ridge (Rp. 45000)"<<endl;
    cout<<"5. Habibi Dan Ainun (Rp. 70000)"<<endl;
    cout<<"6. The Greatest Showman (Rp. 65000)"<<endl;
    cout<<"Pilih Sesuai Angka: ";cin>>dewasa;
    cout<<"Jumlah tiket= ";cin>>jumlah_tiket;
    cout<<"Nama Film Anda Adalah  ";
    switch(dewasa){
        case 1:{
            cout<<"UP!"<<endl;
            g=40000*jumlah_tiket;
        }break;
        case 2:{
            cout<<"Smurf: The Lost VIllage"<<endl;
            h=35000*jumlah_tiket;
        }break;
        case 3:{
            cout<<"Black Panther"<<endl;
            i=45000*jumlah_tiket;
        }break;
        case 4:{
            cout<<"Hacksaw Ridge"<<endl;
            j=45000*jumlah_tiket;
        }break;
         case 5:{
            cout<<"Habibi Dan Ainun"<<endl;
            k=70000*jumlah_tiket;
        }break;
        case 6:{
            cout<<"The Greatest Showman"<<endl;
            l=65000*jumlah_tiket;
        }break;
        default:
        cout<<"kode salah";
    }
    perulangan:
    cout<<"Mau Beli Lagi? [y/t] ";cin>>lagi;
    if(lagi=='y'){
        goto atas;
    }else{
        goto total;
    }
    total:
    totalharga = a+b+c+d+e+f+g+h+i+j+k+l;
    cout<<"Total Harga Anda Adalah Rp. "<<totalharga<<endl;
    
    return 0;
}