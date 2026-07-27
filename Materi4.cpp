#include <iostream>

/*  Setiap entitas (seperti variabel atau fungsi) di dalam C++ membutuhkan nama yang unik. Kamu tidak bisa membuat dua variabel 
    dengan nama yang sama (misalnya int x = 0; dan int x = 1; di tempat yang sama), karena kompiler akan bingung dan memunculkan 
    eror "re-declaration".

    Nah, Namespace memberikan solusi untuk mencegah konflik penamaan tersebut (name conflicts), terutama ketika kamu bekerja di 
    proyek berskala besar. Namespace memungkinkan kamu memiliki dua atau lebih entitas dengan nama yang sama persis, asalkan 
    mereka diletakkan di dalam namespace yang berbeda. */

// Mengimpor secara spesifik (lebih aman daripada 'using namespace std;')
using std::cout;
using std::endl;

// Membuat namespace pertama
namespace first {
    int x = 1;
}

// Membuat namespace kedua
namespace second {
    int x = 2;
}

int main() {
    // Variabel x versi lokal
    int x = 0;

    // Menampilkan variabel x lokal (tidak perlu awalan namespace)
    cout << "Nilai x lokal: " << x << endl;

    // Menampilkan variabel x dari namespace 'first'
    cout << "Nilai x dari namespace pertama: " << first::x << endl; // pemanggilan menggunakan ::

    // Menampilkan variabel x dari namespace 'second'
    cout << "Nilai x dari namespace kedua: " << second::x << endl;

    return 0;
}

/*  Untuk memanggil variabel yang berada di dalam sebuah namespace, kamu harus menyebutkan nama namespace-nya terlebih dahulu, 
    diikuti dengan Scope Resolution Operator yang dilambangkan dengan dua titik dua (::), lalu nama variabelnya.
    Contoh: first::x (artinya kita memanggil variabel x yang ada di dalam namespace bernama first). */