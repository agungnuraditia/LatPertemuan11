#include <iostream>
using namespace std;

int main (){
int *P; //inisialiasi variabel pointer p dengan tipe data integer
P=new int; // Merupakan inisialisasi variable P agar dapat di pointer

*P=100; //merubah variabel p menjadi 100 dengan pointer
cout<<"Nilai *P : "<<*P<<endl; //mengeluarkan output variabel p yang telah di pointer
delete P; // menghapus nilai variabel p
return 0; //memberitahu kode yang telah selesai dieksekusi dengan exit code 0
}