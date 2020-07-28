#include <iostream>

/* Break digunakan ketika ingin keluar loop pada saat kondisi tertentu */
int main () {

  // contoh penggunaan break pada for
  int number;
  std::cout << "masukkan nomor (inputan) (1-10) : ";
  std::cin >> number;
  for (int i=0; i <10; ++i) {
    std::cout<< "nilai i = " << i << std::endl;
    if (i == number) {
      std::cout << "nilai i sama dengan nilai inputan, i = " << i << ", inputan = " << number <<  std::endl;
      break;
    }
  }
  
  std::cout << "\n\n";

  // contoh penggunaan break pada while loop
  int answer = 0;
  while (true) {
    std::cout << "10 + 10 = (?), jawaban kamu : ";
    std::cin >> answer;
    if (answer == 20) {
      std::cout<< "Jawaban benar" << std::endl;
      break;
    }
    std::cout << "Jawaban salah, Ulangi" << std::endl;
  }

  std::cout << "\n\n";

  // contoh break pada nested loop
  // hanya break pada loop yang didalam loop
  int angka;
  int jawaban;
  for (int i=0; i < 5; i++) {
    std::cout << "masukkan angka (1-10): ";
    std::cin >> angka;
    while(true) {
      std::cout << angka << "+" << i << "= (?), jawaban kamu : ";
      std::cin >> jawaban;
      if (jawaban == (angka + i)) {
        std::cout << "Jawaban Benar" << std::endl;  
        break;
      }
      std::cout << "Jawaban salah, ulangi" << std::endl;
    }
  }


  // Continue digunakan untuk melanjutkan loop, tetapi tidak akan mengeksekusi bagian program dibawahnya
  // Contoh
  std::cout << "Continue example" << std::endl;
  for (int x=0; x <= 10; ++x) {
    if (x >= 4 && x <=8 ) {
      continue;
    }
    // dari x=4 sampai dengan x=8 tidak akan dieksekusi
    std::cout << x << std::endl;
  }
}