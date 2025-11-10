# 💤 Analisis Pola Tidur & Produktivitas

Program ini dibuat menggunakan **C++** untuk membantu pengguna menganalisis hubungan antara **jam tidur**, **jam belajar**, dan **tingkat produktivitas** harian.  
Data dapat diinput, ditampilkan, diurutkan berdasarkan produktivitas, dicari berdasarkan hari tertentu, serta dianalisis untuk memberikan rekomendasi pola tidur optimal.

---

## 📋 Fitur Utama

| No | Fitur | Deskripsi |
|----|--------|------------|
| 1 | **Input Data** | Menambahkan data harian berupa jam tidur, jam belajar, dan tingkat produktivitas (1–10). |
| 2 | **Lihat Data** | Menampilkan semua data yang telah diinput dalam format tabel. |
| 3 | **Ranking Produktivitas** | Mengurutkan data berdasarkan tingkat produktivitas tertinggi ke terendah menggunakan **Bubble Sort**. |
| 4 | **Cari Hari ke-N** | Mencari data berdasarkan nomor hari menggunakan **Sequential Search**. |
| 5 | **Analisis & Rekomendasi** | Menghitung rata-rata tidur, belajar, produktivitas, serta menampilkan rekomendasi pola tidur terbaik. |
| 0 | **Keluar Program** | Menutup aplikasi. |

---

## 🧮 Penjelasan Algoritma yang Digunakan

Dalam program ini terdapat beberapa algoritma utama yang digunakan untuk memproses data.  
Berikut penjelasan ringkasnya:

### 🔹 1. Bubble Sort
Digunakan untuk **mengurutkan data produktivitas dari tertinggi ke terendah** pada menu *Ranking Produktivitas*.  
Algoritma ini bekerja dengan cara:
- Membandingkan dua elemen bersebelahan.
- Jika urutannya salah, maka ditukar.
- Proses ini diulang sampai seluruh data terurut.

**Alasan pemilihan:**
- Mudah diimplementasikan dan dipahami.
- Cocok untuk dataset kecil (≤ 30 hari).
- Tidak membutuhkan struktur data kompleks.

---

### 🔹 2. Sequential Search (Linear Search)
Digunakan dalam fungsi *Cari Hari ke-N* untuk menemukan data berdasarkan nomor hari.  
Algoritma ini melakukan pencarian dari elemen pertama hingga terakhir sampai menemukan nilai yang sesuai.

**Alasan pemilihan:**
- Tidak memerlukan data terurut.
- Paling sederhana untuk implementasi pencarian.
- Efisien untuk jumlah data kecil.

---



## ⚙️ Struktur Data

Program menggunakan **struct `Data`** untuk menyimpan informasi setiap hari:

```cpp
struct Data {
    int hari;
    float jamTidur;
    float jamBelajar;
    int produktivitas;
};
