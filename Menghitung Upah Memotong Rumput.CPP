#include <iostream>
using namespace std;

int main (){

    int p_rumah=15;
     float l_rumah=7.5;
     int t_rumah=10;
     int p_halaman=20;
     int l_halaman=15;
     
     int d=3;
     float phi=3.14;
     int upah=5000;
     
     int L_halaman=p_halaman*l_halaman;
     float L_rumah=0.5*(p_rumah+l_rumah)*t_rumah;
     float L_kolam=0.25*phi*d*d;
     float L_rumput=L_halaman-(L_rumah + L_kolam);
     float JumlahUpah=L_rumput*upah;

     cout<<JumlahUpah<<endl;
return 0;
}