# TP3DPBOC22025
## Janji
Saya Muhammad Daffa Rizmawan Harahap mengerjakan TP3 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Diagram
![image](https://github.com/user-attachments/assets/1a435e85-26e0-4526-98b5-5aa93b07e5b6)


## Desain Program
Program ini menerapkan beberapa konsep dari composite, hybrid inheritance, hingga penggunaan array of object. Kelas-kelas yang digunakan adalah:
1. Author: Kelas composite untuk menyimpan data penulis.
2. Publisher: Kelas composite untuk menyimpan data penerbit.
3. Book: Kelas dasar atau parent class yang digunakan untuk menyimpan data buku secara umum. Memiliki hubungan komposit dengan kelas Author dalam bentuk List of Object dan kelas Publisher dalam bentuk satu object.
4. VoiceRecording: Kelas dasar atau parent class untuk menyimpan data rekaman suara.
5. PrintedBook: Kelas turunan dari Book dengan beberapa atribut tambahan.
6. AudioBook: Kelas turunan dari Book dan VoiceRecording dengan beberapa atribut tambahan (Multiple Inheritance).

Untuk method pada kelas yaitu getter dan setter untuk tiap atribut. Hanya berbeda pada Java untuk penerapan multiple inheritance digunakan juga konsep interface.

## Alur Program
1. Mengimport kelas-kelas yaitu Author, Publisher, PrintedBook, dan AudioBook
2. Membuat list of object dan mengisi beberapa data untuk data author dan publisher
4. Membuat list of object dan mengisi beberapa data untuk data printedBook dan audioBook dengan menggunakan data dari list author dan publisher
5. Kemudian ditampilkan semua data printedBook dan audioBook lengkap termasuk atribut dari parent classnya.
  
## Dokumentasi
![image](https://github.com/user-attachments/assets/eb21c630-0762-4edd-a98e-ac90c500ac8a)


