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