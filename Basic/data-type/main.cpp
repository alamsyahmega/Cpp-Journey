#include <iostream>

// prologue
/*
    Pada bahasa C++ ada beberape tipe data yang mungkin tidak dimiliki oleh bahasa 
    pemrograman modern / tingkat tinggi.
    Berikut merupakan tipe data yang ada pada C++
    integer, float, double, char, wchart_t
*/
int main() {

    /*
    C++ Integer
    ukurannya biasanya 2 atau 4 bytes, artinya nilai yang bisa disimpan adalah -2147483648 sampai 214748647
    */
    int salary = 7000000;

   
    /*
    C++ Float dan Double
    float dan double digunakan untuk menyimpan nilai desimal dan eksponensial
    ukuran float adalah 4 bytes, sedangkan double adalah 8 bytes(2 kali dari float)
    */
    float area = 112.45;
    double volume = 134.64534;
   // atau bisa menggunakan eksponensial
    double distance = 11E22; // atau 11*10^22


    /*
    C++ Char
    char digunakan untuk characters, dengan panjang 1 bytes, menggunakan single quote ' '.
    */
    char alphabet = 'a';


    /*
    C++ wchar_t
    wide character 'wchar_t' mirip dengan tipe data 'char', namun ukurannya 2 bytes.
    -> 
    */
    wchar_t test = L'ם'; // perhatikan huruf L sebelum quote mark
    // ada juga fixed size char yang lain, yaitu char16_t dan char32_t


    /*
    C++ bool
    boolean hanya punya dua kemungkinan data: true atau false, digunakan sebagai kondisional statement
    dan juga loop.
    */
    bool condition = false;
    bool is_good = true;


    /*
    C++ Void
    void keyword menandakan ketiadaan data. artinya "nothing" atau "no value"
    digunakan ketika mempelajari fungsi dan pointer 
    */
   // note: kita tidak bisa mendeklarasikan void



    /*  ====> C++ MODIFIER  <==== */
    /*
    1. signed
    2. unsigned
    3. short
    4. long

    yang bisa digunakan untuk 
    1. int
    2. double
    3. char
    */
}