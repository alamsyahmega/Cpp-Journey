#include <iostream>

/* C++ if, if...else, nested if...else */

using namespace std;

int main() {

    // IF STATEMENT
    cout << "IF STATEMENT \n";
    int number;

    cout << "Masukkan sebuah angka: ";
    cin >> number;
    cout << "Angka yang kamu masukkan adalah : " << number << endl;

    if (number > 1) {
        cout << "nomor lebih besar dari 1 \n";
    };
    cout << "ini diluar scope if, akan dieksekusi \n\n" << endl;


    // IF ELSE
    cout << "IF-ELSE STATEMENT\n";
    int number2;

    cout << "Masukkan sebuah angka : ";
    cin >> number2;

    cout << "Angka yang kamu masukkan adalah : " << number2 << endl;
    if (number2 >= 5) {
        cout << "Angka sama dengan 5 atau lebih besar dari 5";
    } else {
        cout << "Angka lebih kecil dari 5";
    }
    cout << "\n\n";


    // IF-ELSE IF-ELSE STATEMENT
    cout << "IF-ELSE IF-ELSE STATEMENT\n";
    int number3;
    cout << "Masukkan sebuah angka : ";
    cin >> number3;
    cout << "Angka yang kamu masukkan adalah : " << number3 << endl;

    if (number3 > 5 ) {
        cout << "Angka lebih besar dari 5";
    } else if (number3 < 0) {
        cout << "Angka lebih kecil dari 0";
    } else {
        cout << "Angka diantara 0 sampai 5";
    };
    cout << "\n\n";


    // NESTED IF
    cout << "NESTED IF\n";
    int number4;
    cout << "Masukkan sebuah angka : ";
    cin >> number4;
    cout << "Angka yang kamu masukkan adalah : " << number4 << endl;

    if (number4 > 0) {
        cout << "Angka lebih besar dari 0 \n";
        if (number4 % 2 == 0) {
            cout << "Angka yang kamu masukkan adalah genap\n";
        } else {
            cout << "Angka yang kamu masukkan adlah ganjil\n";
        }
    } else {
        cout << "Angka yang kamu masukkan lebih kecil dari 0";
    };
    cout << "\n\n";



    /* Body if else dengan 1 statement saja*/
    int num = 11;
    cout << "nilai nomor: " << num << endl;
    if (num >= 0)
        cout << "Nomor adalah positif\n";
    else
        cout << "Nomor adalah negatif\n";

    return 0;
}