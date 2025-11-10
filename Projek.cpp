#include <iostream>
#include <iomanip>
using namespace std;


struct Data {
    int hari;
    float jamTidur;
    float jamBelajar;
    int produktivitas;  
};


void inputData(Data d[], int &n);
void tampilkanData(Data d[], int n);
void sortingProduktivitas(Data d[], int n);
void cariHari(Data d[], int n);
void analisis(Data d[], int n);

int main() {
    Data data[30]; 
    int jumlah = 0;
    int pilih;
    
    cout << "===========================================\n";
    cout << "  ANALISIS POLA TIDUR & PRODUKTIVITAS\n";
    cout << "===========================================\n\n";
    
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Input Data\n";
        cout << "2. Lihat Data\n";
        cout << "3. Ranking Produktivitas\n";
        cout << "4. Cari Data Hari ke-N\n";
        cout << "5. Analisis & Rekomendasi\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        
        if (pilih == 1) {
            inputData(data, jumlah);
        } 
        else if (pilih == 2) {
            if (jumlah == 0) {
                cout << "\nBelum ada data!\n";
            } else {
                tampilkanData(data, jumlah);
            }
        }
        else if (pilih == 3) {
            if (jumlah == 0) {
                cout << "\nBelum ada data!\n";
            } else {
                sortingProduktivitas(data, jumlah);
                cout << "\n=== RANKING PRODUKTIVITAS ===\n";
                tampilkanData(data, jumlah);
            }
        }
        else if (pilih == 4) {
            if (jumlah == 0) {
                cout << "\nBelum ada data!\n";
            } else {
                cariHari(data, jumlah);
            }
        }
        else if (pilih == 5) {
            if (jumlah == 0) {
                cout << "\nBelum ada data!\n";
            } else {
                analisis(data, jumlah);
            }
        }
        else if (pilih == 0) {
            cout << "\nTerima kasih!\n";
        }
        else {
            cout << "\nPilihan salah!\n";
        }
        
    } while (pilih != 0);
    
    return 0;
}


void inputData(Data d[], int &n) {
    if (n >= 30) {
        cout << "\nData sudah penuh!\n";
        return;
    }
    
    cout << "\n=== INPUT DATA HARI KE-" << (n+1) << " ===\n";
    d[n].hari = n + 1;
    
    cout << "Jam Tidur (0-24): ";
    cin >> d[n].jamTidur;
    
    cout << "Jam Belajar (0-24): ";
    cin >> d[n].jamBelajar;
    
    cout << "Produktivitas (1-10): ";
    cin >> d[n].produktivitas;
    
    n++;
    cout << "\nData berhasil disimpan!\n";
}

void tampilkanData(Data d[], int n) {
    cout << "\n========================================\n";
    cout << left << setw(8) << "Hari" 
         << setw(10) << "Tidur" 
         << setw(10) << "Belajar"
         << "Produktif\n";
    cout << "----------------------------------------\n";
    
    for (int i = 0; i < n; i++) {
        cout << left << setw(8) << d[i].hari
             << setw(10) << fixed << setprecision(1) << d[i].jamTidur
             << setw(10) << d[i].jamBelajar
             << d[i].produktivitas << "/10\n";
    }
    cout << "========================================\n";
}

// Bubble Sort - Produktivitas dari tinggi ke rendah
void sortingProduktivitas(Data d[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (d[j].produktivitas < d[j + 1].produktivitas) {
                // Tukar
                Data temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }
}

// Sequential Search - Cari berdasarkan hari
void cariHari(Data d[], int n) {
    int cari;
    cout << "\nCari hari ke-: ";
    cin >> cari;
    
    bool ketemu = false;
    for (int i = 0; i < n; i++) {
        if (d[i].hari == cari) {
            cout << "\n--- Data Ditemukan ---\n";
            cout << "Hari ke-       : " << d[i].hari << endl;
            cout << "Jam Tidur      : " << d[i].jamTidur << " jam\n";
            cout << "Jam Belajar    : " << d[i].jamBelajar << " jam\n";
            cout << "Produktivitas  : " << d[i].produktivitas << "/10\n";
            ketemu = true;
            break;
        }
    }
    
    if (!ketemu) {
        cout << "\nData hari ke-" << cari << " tidak ada!\n";
    }
}

void analisis(Data d[], int n) {
    float totalTidur = 0;
    float totalBelajar = 0;
    int totalProduktif = 0;
    
    for (int i = 0; i < n; i++) {
        totalTidur += d[i].jamTidur;
        totalBelajar += d[i].jamBelajar;
        totalProduktif += d[i].produktivitas;
    }
    
    
    float rataTidur = totalTidur / n;
    float rataBelajar = totalBelajar / n;
    float rataProduktif = (float)totalProduktif / n;
    
    
    int maxProduktif = d[0].produktivitas;
    int hariTerbaik = d[0].hari;
    float tidurOptimal = d[0].jamTidur;
    
    for (int i = 1; i < n; i++) {
        if (d[i].produktivitas > maxProduktif) {
            maxProduktif = d[i].produktivitas;
            hariTerbaik = d[i].hari;
            tidurOptimal = d[i].jamTidur;
        }
    }
    
    cout << "\n======== ANALISIS ========\n";
    cout << fixed << setprecision(1);
    cout << "Total Data: " << n << " hari\n\n";
    
    cout << "RATA-RATA:\n";
    cout << "- Tidur       : " << rataTidur << " jam\n";
    cout << "- Belajar     : " << rataBelajar << " jam\n";
    cout << "- Produktif   : " << rataProduktif << "/10\n\n";
    
    cout << "HARI TERBAIK:\n";
    cout << "- Hari ke-    : " << hariTerbaik << endl;
    cout << "- Produktif   : " << maxProduktif << "/10\n";
    cout << "- Tidur       : " << tidurOptimal << " jam\n\n";
    
    cout << "REKOMENDASI:\n";
    

    if (rataTidur < 6) {
        cout << "- Tidur kurang! Usahakan 7-8 jam\n";
    } else if (rataTidur >= 7 && rataTidur <= 9) {
        cout << "- Pola tidur bagus! Pertahankan\n";
    } else {
        cout << "- Tidur terlalu lama, kurangi sedikit\n";
    }
    
    
    if (rataProduktif < 5) {
        cout << "- Produktivitas rendah, coba atur jadwal\n";
    } else if (rataProduktif >= 7) {
        cout << "- Produktivitas tinggi! Bagus!\n";
    }
    
    
    cout << "- Tidur optimal Anda: " << tidurOptimal << " jam\n";
    cout << "  (berdasarkan hari paling produktif)\n";
    
    cout << "==========================\n";
}