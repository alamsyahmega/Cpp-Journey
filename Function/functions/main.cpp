#include <iostream>

/* Function 
  fungsi terdiri dari nama fungsi beserta tipe keluaran, body, dan parameter.
  misalnya seperti ini
  
  int addition (int a, int b) {
    return a + b;
  }

  1. int -> merupakan tipe data dari hasil return
  2. addition -> merupakan nama fungsi
  3. return -> merupakan keyword untuk mengeluarkan hasil fungsi
  4. a + b -> merupakan nilai dari keluaran

  fungsi itu intinya adalah suatu blok kode yang menjalankan suatu perintah tertentu.
  kemudian blok kode ini bisa dipanggil dimana saja (sesuai kebutuhan)
  Kenapa harus memakai fungsi? 
  misal kita akan melakukan sesuatu secara berulang kali, ambil contoh untuk mencari nilai suatu panjang pythagoras
  apabila kita tidak punya fungsi, maka kita harus menulis kode yang sama beberapa kali
  inilah fungsinya dari fungsi, yaitu cukup buat fungsi yang mengerjakan sesuatu (menghitung nilai panjang dgn rumus pythagoras)
  kemudian panggil ketika dibutuhkan

*/

int Multiply (int a, int b) {
  return a * b;
}

void MultiplyAndLog(int a, int b) {
  int result = Multiply(a, b);
  std::cout << "result: " << result << std::endl;
}

float LuasSegitiga(float a, float t) {
  // rumus : 1/2 alas * tinggi
  return (0.5 * a * t);

}

void MencariLuasSegitiga() {
  float alas, tinggi;
  std::cout << "Masukkan nilai alas : ";
  std::cin >> alas;
  std::cout << "Masukkan nilai tinggi : ";
  std::cin >> tinggi;
  float result = LuasSegitiga(alas,tinggi);
  std::cout << "Luas segitiga = " << result << std::endl;
}

int main() {
  MultiplyAndLog(4, 5);
  MultiplyAndLog(2, 12);
  MultiplyAndLog(14, 10);
  
  std::cout << "Mencari Luas Segitiga" << std::endl;
  MencariLuasSegitiga();
  MencariLuasSegitiga();
  std::cin.get();
  return 0;
}