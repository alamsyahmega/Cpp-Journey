#include <iostream>
using namespace std;

int main () {
    /* Menggunakan for untuk mengeprint nilai */
    // cetak dari 1 - 5
    for (int i = 1; i <= 5; ++i) {
        cout << "i = " << i << endl;
    }

    // cetak teks 5 kali
    for (int j=1; j <=5; ++j) {
        cout << "Ini bahasa C++" << endl;
    }

    // mencari hasil pertambahan dari tiap-tiap loop
    int num, sum;
    sum = 0;

    cout << "Masukkan nilai maksimum (positif integer) : ";
    cin >> num;

    for (int count=1; count <= num; ++count) {
        sum += count;
    }
    cout << "nilai sum = " << sum << endl;

    // Range based for loop
    // for (variable : collection) , seperti for x in array: pada python3
    int num_array[] = {1,2,3,4,5,6,7,8,9};
    for (int n : num_array) {
        cout << n << " ";
    }

    // infinite Loop
    /* terjadi apabila keadaan selalu true,
        misal 
        
        for (int i=1; i > 0; i++) {
            code block
        }

        akan selalu menjalankan code blok karena i selalu lebih besar dari 0
        dimana keadaan for itu seperti penjelasan berikut:

        for <- menunjukkan untuk melakukan perulangan
        int i=1; <-  inisialisasi nilai i dan assignment nilai 1 kedalam variable,
                    nilai i bisa diubah tergantung keinginan coder
        i > 0; atau i <= 5; <- menunjukkan seberapa banyak perulangan dilakukan.
                            apabila nilainya masih TRUE, maka akan tetap dieksekusi (perulangannya)
                            jadi i > 0 itu, selama i nilainya lebih besar dari 0, maka akan terus dilakukan looping
                            dan i <= 5 itu berarti selama i nilainya dibawah atau sama dengan 5, maka akan terus looping
                            dan ketika i = 6 misalnya, maka looping akan berhenti.
        ++i atau juga i++ <- menunjukkan operasi i = 1 + i dan i = i + 1.
                             jadi nilai i akan terus bertambah 1 selama looping
     */

    return 0; 
}
