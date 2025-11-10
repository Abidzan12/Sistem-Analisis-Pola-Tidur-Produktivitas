Sistem Analisis Pola Tidur & Produktivitas

Deskripsi

Program ini adalah aplikasi konsol C++ sederhana yang dirancang untuk membantu pengguna melacak dan menganalisis pola tidur, jam belajar, dan tingkat produktivitas harian.
Program mencatat data harian yang dimasukkan pengguna, mengelolanya dalam struktur data, dan menyajikan analisis sederhana.

Tujuan program ini adalah:

1.Mencatat data tidur, belajar, dan produktivitas secara terstruktur.

2.Mengurutkan hari berdasarkan tingkat produktivitas (dari tertinggi ke terendah).

3.Memberikan analisis dan rekomendasi sederhana untuk membantu pengguna memahami korelasi antara jam tidur dan produktivitas.

Fitur Utama
Menu utama interaktif dengan opsi:

   1.Input Data: Memasukkan data harian (Jam Tidur, Jam Belajar, Produktivitas 1-10).
	 
   2.Lihat Data: Menampilkan semua data yang telah dimasukkan dalam format tabel.
	 
   3.Ranking Produktivitas: Menampilkan data yang telah diurutkan berdasarkan produktivitas tertinggi.
	 
   4.Cari Data Hari ke-N: Mencari dan menampilkan data dari hari tertentu.
	 
   5.Analisis & Rekomendasi: Menampilkan rata-rata, hari terbaik, dan rekomendasi pola tidur.
	 
   6.Validasi untuk memastikan data ditampilkan hanya jika sudah ada.
	 
   7.Keluar: Keluar dari program.


Algoritma & Struktur Program

Percabangan: if / else (untuk validasi data kosong), if-else if (untuk menu dan logika rekomendasi).

Perulangan: do-while (untuk menu utama agar terus tampil), for (untuk iterasi data saat menampilkan, sorting, searching, dan analisis).

Struct: struct Data digunakan untuk menggabungkan hari, jamTidur, jamBelajar, dan produktivitas ke dalam satu unit data.

Array: Menggunakan 1D Array of Structs (Data data[30]) untuk menyimpan data harian (kapasitas maks 30 hari).

Sorting: Menggunakan Bubble Sort (pada fungsi sortingProduktivitas) untuk mengurutkan data berdasarkan skor produktivitas dari tertinggi ke terendah.

Searching: Menggunakan Sequential Search (pada fungsi cariHari) untuk mencari data berdasarkan input hari ke-N.

Struktur File

Projek.cpp → Kode sumber utama program.

Projek.exe → Hasil kompilasi program (file executable).

.vscode/tasks.json → Konfigurasi build task untuk VS Code.

.gitignore → Daftar file yang diabaikan oleh Git.

README.md → Dokumentasi repo ini.

Catatan

Program ini dibuat untuk proyek mata kuliah Algoritma dan Pemrograman.
Fitur yang ada saat ini sudah fungsional untuk melacak dan menganalisis data dalam skala kecil (maks 30 data) selama program berjalan.
