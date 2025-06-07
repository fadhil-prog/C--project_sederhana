#include <iostream>
using namespace std;
int main(){
    char lagi, i, n;
    int buku, atk;
    float a=0, b=0, c=0, d=0, e=0, f=0, jumlah_buku, jumlah_atk, totalbuku, totalatk, total;
    float pajak, harga_pajak;

    cout<<"=============================================================="<<endl;
    cout<<"|              Selamat Datang Di Toko Buku Siger             |"<<endl;
    cout<<"=============================================================="<<endl;
    cout<<endl;
    do{
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"Pilihan Buku: "<<endl;
        cout<<"1. Buku Matematika = Rp.20000"<<endl;
        cout<<"2. Buku IPA = Rp.25000"<<endl;
        cout<<"3. Buku IPS= Rp.30000"<<endl;
        cout<<"Masukkan Nomor Buku yang Ingin Dibeli = ";cin>>buku;
        cout<<"Masukkan Jumlah Buku = ";cin>>jumlah_buku;
        cout<<"Nama Buku Yang Anda Pesan Adalah ";
        switch(buku){
            case 1 :{
                cout<<"Buku Matematika"<<endl;
                a = 20000 * jumlah_buku;
            }break;
            case 2 :{
                cout<<"Buku IPA"<<endl;
                b = 25000 * jumlah_buku;
            }break;
            case 3 :{
                cout<<"Buku IPS"<<endl;
                c = 30000 * jumlah_buku;
            }break;
            default:
            cout<<"Kode Salah"<<endl;
        }
        cout<<"Mau beli lagi [y/t]"<<endl; cin >> i;
    }while(i == 'y');

    totalbuku=a+b+c;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Harga Pesanan Buku Anda Adalah Rp. "<<totalbuku<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;

    cout<<"Mau Beli Alat Tulis ? [y/t] ";cin>>lagi;
       if(lagi=='y')
    {
        goto alat;
    }else{
        goto total_akhir;
    }

    alat:
    do{
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"Pilihan ATK: "<<endl;
        cout<<"1. Pensil = Rp. 5000"<<endl;
        cout<<"2. Pena = Rp. 8000"<<endl;
        cout<<"3. Spidol = Rp. 12000"<<endl;
        cout<<"Masukkan Nomor ATK yang Ingin Dibeli =";cin>>atk;
        cout<<"Masukkan Jumlah ATK = ";cin>>jumlah_atk;
        cout<<"Nama ATK Yang Anda Pesan Adalah ";

        switch(atk){
            case 1 :{
                cout<<"Pensil"<<endl;
                d = 5000 * jumlah_atk;
            }break;
            case 2 :{
                cout<<"Pena"<<endl;
                e = 8000 * jumlah_atk;
            }break;
            case 3 :{
                cout<<"Spidol"<<endl;
                f = 12000 * jumlah_atk;
            }break;
            default:
            cout<<"Kode Salah"<<endl;
        }
        cout <<" Mau beli lagi? [y/t]"<<endl;cin>>n;
    }while(n == 'y');

    totalatk=d+e+f;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Harga Pesanan ATK Anda Adalah Rp. "<<totalatk<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<endl;
    
    total_akhir:
    total=totalbuku+totalatk;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Mohon Maaf Anda Dikenakan Pajak Sebesar 10%"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Total Seluruh Belanja Anda Adalah Rp. "<<total<<endl;
    pajak= total*0.1;
    harga_pajak=total+pajak;
    cout<<"Total yang Harus Dibayar Adalah Rp. "<<harga_pajak<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;

    return 0;
}