#include <iostream>

using namespace std;

/* Switch case hampir sama dengan if-else */

int main() {
    // contoh program kalkulator sederhana
    char oprator;
    int choose;
    float num1, num2;
    cout << "KALKULATOR SEDERHANA" << endl;
    cout << "Silahkan Pilih \n 1. Mulai Calculator \n (any). Keluar. \nPilihan kamu : ";
    cin >> choose;
    if (choose == 1) {
        START:
        cout << "Silahkan masukkan operator ( +, -, /, *) : ";
        cin >> oprator;
        cout << "Silahkan masukkan dua buah nomor : ";
        cin >> num1 >> num2;
        switch (oprator)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        default:
            cout << "Error! Operator yang anda masukkan salah";
            break;
        }

        int ulangi;
        cout << "Lagi ? \n1.Ya \n(any).Tidak. \nPilihan Kamu? : \n";
        cin >> ulangi;
        switch (ulangi)
        {
        case 1:
            goto START;
            break;        
        default:
            goto EXIT;
            break;
        }

    }

    else {
        goto EXIT;
    }
    EXIT:
    return 0;
}
