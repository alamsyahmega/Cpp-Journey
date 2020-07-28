#include <iostream>

using namespace std;

 /* Goto digunakan untuk lompat dari satu program ke program lainnya.
    Tapi ini sangat bad practice dan sebisa mungkin dihindari. */

int main() {
    float average, num, sum = 0.0;
    int n, i;

    cout << "Masukkan nilai maksimum input : ";
    cin >> n;

    for (i=1; i < n; ++i) {
        cout << "Masukkan nilai n" << i << ": ";
        cin >> num;

        if (num < 0.0) {
            goto jump;
        }
        sum += num;
    }

jump:
    average = sum / (i - 1);
    cout << "Nilai rata-rata adalah : " << average << endl;
    return 0;
}
