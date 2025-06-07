#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

char konversiAngkaMutu(float nilaiAkhir) {
    if (nilaiAkhir <=85  && nilaiAkhir >=76) return 'A';
    else if (nilaiAkhir <= 75.9 && nilaiAkhir >= 71) return 'B+';
    else if (nilaiAkhir <= 70.9 && nilaiAkhir >= 66) return 'B';
    else if (nilaiAkhir <= 65.9 && nilaiAkhir >= 61) return 'B+';
    else if (nilaiAkhir <= 60.9 && nilaiAkhir >= 55) return 'C';
    else if (nilaiAkhir <= 54.9 && nilaiAkhir >= 50) return 'D';
    else if (nilaiAkhir < 50) return 'E+';
}

float konversiHurufMutu(char hurufMutu) {
    switch (hurufMutu) {
        case 'A': return 4.0;
        case 'B+': return 3.5;
        case 'B': return 3.0;
        case 'C+': return 2.5;
        case 'C' : return 2.0;
        case 'D' : return 1.0;
        default: return 0.0;
    }
}
int main() {
    const int jumlahMataKuliah = 10;
    string matkul[10] = {"Pengetahuan Lingkungan", "Teknik Digital", "Pengantar Teknologi Informasi", "Algoritma dan Pemograman", "Kalkulus", "Industri Pertanian", "Praktikum Algoritma dan Pemograman", "Pendidikan Bahasa Indonesia", "Pendidikan Pancasila", "Pendidikan Etika dan Kearifan Lokal"};

    string nama, npm;
    float sks[jumlahMataKuliah], keaktifan[jumlahMataKuliah], tugas[jumlahMataKuliah],
          kuis[jumlahMataKuliah], uts[jumlahMataKuliah], uas[jumlahMataKuliah];

    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);

    cout << "Masukkan NPM mahasiswa: ";
    getline(cin, npm);

    for (int i = 0; i < jumlahMataKuliah; ++i) {
        cout << i+1 << ". Mata Kuliah " << matkul[i]<< endl;

        cout << "Masukkan SKS: ";
        cin >> sks[i];

        cout << "Masukkan nilai Keaktifan (0-85): ";
        cin >> keaktifan[i];

        cout << "Masukkan nilai Tugas (0-85): ";
        cin >> tugas[i];

        cout << "Masukkan nilai Kuis (0-85): ";
        cin >> kuis[i];

        cout << "Masukkan nilai UTS (0-85): ";
        cin >> uts[i];

        cout << "Masukkan nilai UAS (0-85): ";
        cin >> uas[i];
    }

    float totalAngkaMutu = 0;
    char hurufMutu;
    float angkaMutu;
    float nilaiAkhir;
    int i;
    for (int i = 0; i < jumlahMataKuliah; ++i) {
        nilaiAkhir = 0.1 * keaktifan[i] + 0.35 * tugas[i] + 0.15 * kuis[i] + 0.2 * uts[i] + 0.2 * uas[i];
        hurufMutu = konversiAngkaMutu(nilaiAkhir);
        angkaMutu = konversiHurufMutu(hurufMutu);
    }
        for (int j = 0; j < i; ++j){
        cout << j+1 << "\nMata Kuliah " << matkul[j]<< endl;
        cout << "Nilai Akhir: " << fixed << setprecision(2) << nilaiAkhir << endl;
        cout << "Huruf Mutu: " << hurufMutu << endl;
        cout << "Angka Mutu: " << angkaMutu << endl;

        // Akumulasi angka mutu untuk menghitung rata-rata IP
        totalAngkaMutu += angkaMutu;
    }

    // Hitung dan cetak nilai IP
    float ip = totalAngkaMutu / jumlahMataKuliah;
    cout << "\nIndeks Prestasi (IP): " << fixed << setprecision(2) << ip << endl;

    // Cetak Kartu Hasil Studi
    cout << "\nKartu Hasil Studi (KHS) untuk Mahasiswa " << nama << " (NPM: " << npm << ")\n";
    cout << "---------------------------------------------\n";
    cout << setw(20) << "Mata Kuliah" << setw(15) << "SKS" << setw(15) << "Nilai Akhir" << setw(15) << "Huruf Mutu" << endl;
    cout << "---------------------------------------------\n";

    for (int i = 0; i < jumlahMataKuliah; ++i) {
        float nilaiAkhir = 0.1 * keaktifan[i] + 0.35 * tugas[i] + 0.15 * kuis[i] + 0.2 * uts[i] + 0.2 * uas[i];
        char hurufMutu = konversiAngkaMutu(nilaiAkhir);

        cout << setw(20) << "Mata Kuliah " << i + 1 << setw(15) << sks[i] << setw(15) << nilaiAkhir << setw(15) << hurufMutu << endl;
    }

    cout << "---------------------------------------------\n";

    return 0;
}
