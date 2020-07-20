#include <iostream>

/* ada 2 cara type conversion pada Cpp, yaitu implisit dan explisit(type casting) 
  1. Implisit, yaitu perubahan dari satu tipe data ke tipe data lain secara otomatis
  2. Explisit, yaitu perubahan dari satu tipe data ke tipe data lain secara manual oleh user */
int main() {
  /* Implisit */
  
  // 1.  Perubahan dari integer ke double
  int num_int = 9;
  double num_double;
  num_double = num_int;
  std::cout << "num_int = " << num_int << std::endl;
  std::cout << "num_double = " << num_double << "\n" << std::endl;
  
  // 2. Perubahan dari double ke integer
  int numb_int;
  double numb_double = 19.45;
  numb_int = numb_double;
  std::cout << "numb_int = " << numb_int << std::endl;
  std::cout << "numb_double = " << numb_double << "\n" << std::endl;

  /* Data loss saat konversi */
  /* Data loss terjadi apabila ada perubahan dari lower data type ke higher data type, seperti berikut:
     [long double] --> [ double ] --> [ float ] --> [ long ] --> [ int ] --> [ short ] --> [ char ]
  */



  /* Explisit */

  // C-style type casting (cast notation)
  // (data_type)expression;
  int int_numb = 99;
  double double_numb;
  double_numb = (double)int_numb;

  // Function sytle casting
  int int_numb2 = 99;
  double double_numb2 = double(int_numb2);

  // contoh lain:
  double nomor_dbl = 101.01;
  std::cout << "nomor_dbl = " << nomor_dbl << std::endl;

  int nomor_int1 = (int)nomor_dbl;
  std::cout << "nomor_int1 = " << nomor_int1 << std::endl;
  int nomor_int2 = int(nomor_dbl);
  std::cout << "nomor_int2 = " << nomor_int2 << "\n" << std::endl;


}