#include <iostream>
/* Example menggunakan using namespace std (jadi tidak perlu menggunakan std lagi setiap
membuat cout atau cin)*/
using namespace std; 

int main() {
    cout << "this is example \n";

    int a;
    cout << "Please insert an integer: ";
    cin >> a;
    cout << "integer is: " << a << endl;
    return 0;

}