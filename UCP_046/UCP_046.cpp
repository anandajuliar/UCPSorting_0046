// 1. Algoritma Insertion Sort membandingkan dan menukar elemen dengan
//    cara melakukan penyisipan(sesuai dengan namanya) dimana memisahkan
//    data paling kiri dan membandingkannya dengan kumpulan data lain 
//    (yang sebelumnya merupakan kumpulannya) berurutan sesuai data yang 
//    paling kiri dan begitu seterusnya.
// 2. Algoritma Selection Sort membandingkan dan menukar elemen dengan
//    cara melakukan scan list data secara berulang (dicari mana yang 
//    lebih kecil). dan jika sudah mendapatkan data yang lebih kecil, maka
//    akan ditempatkan disebelah kiri (paling kiri) secara berurutan dari 
//    kecil ke besar.
// 3. Untuk mengetahui jumlah langkah yang dilakukan dalam algoritma sortir
//    dapat dilakukan dengan cara mengethaui jumlah datanya. 
//    Misal jumlah data/n adalah 5, maka pass/jumlah langkahnya adalah 4
//    mengapa demikian? karena jumlah langkah/ pass = n - 1, dimana "n" 
//    adalah jumlah data

// 4. Using Selection Sort(harusnya), tapi maaf saya menggunakan Insertion 
//    Sort karena belum paham bagaimana coding menggunakan selection
#include <iostream>
using namespace std;

int ananda[46];
int n;

void input() { // procedur untuk input
    while (true) {
        cout << "masukkan banyaknya elemen array :"; // Output ke layar
        cin >> n; // Input dari pengguna
        if (n <= 20) // Jika n kurang dari atau sama dengan 20
            break; // Keluar dari loop
        else { // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
        }
    }
    cout << endl; // Output baris kosong
    cout << "=====================" << endl; // Output ke layar
    cout << "Masukkan elemen array" << endl; // Output ke layar
    cout << "=====================" << endl; // Output ke layar

    for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> ananda[i]; // Input dari pengguna
    }
}

void Algoritma() {
    int j, min_index, i;
    int min_index = i; //i

    for (j = 0; j <= n - 2; j++) { //step 1

        min_index = j; //step 2a

        for (i = j + 1; i <= n - 1; i++) //step 2b

            while (ananda[i] < ananda[nim_index]) //step 2c
            {
                ananda[j] = ananda[min_index];  //step 3          
                j--;
            }

    }
}

}
void  display() {
    cout << endl; // Output baris kosong
    cout << "=================================" << endl; // Output ke layar
    cout << "Element Array yang telah tersusun" << endl; // Output ke layar
    cout << "=================================" << endl; // Output ke layar
    cout << endl; // Output baris kosong
    for (int j = 0; j < n; j++) {
        cout << ananda[j];
        if (j < n - 1) {
            cout << " --->";
        }
    }
    cout << endl; // Output baris kosong
    cout << endl; // Output baris kosong
    cout << "Jumlah pass =" << n - 1 << endl; //Output jumlah pass
    cout << endl; // Output baris kosong
}

int main() {
    input();  // call the input function to get user input
    Algoritma(); //call the insertion
    display(); // display the sortde array
    system("pause");

    return 0;
}
