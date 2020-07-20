#include <iostream>

int main() {
    // variable dengan deklarasi tipe data
    int number      = 15;
    int octal       = 021;
    int hex         = 0x7f;
    float weight    = 70.5;
    float rupiah    = 0.05E-3;
    char character  = 'A';

    // ini merupakan escape sequences (string)
    std::string string    = "alphabet";
    std::string backspace   = "\b";
    std::string formFeed    = "\f";
    std::string newline     = "\n";
    std::string _return     = "\r";
    std::string hTab        = "\t";
    std::string vTab        = "\v";
    std::string backSlash   = "\\";
    std::string singleQuotationMark = "\'";
    std::string doubleQuotationMark = "\"";
    std::string questionMark        = "\?";
    std::string nullCharacter       = "\0";

    // constant, artinya tidak dapat di ganti
    const float PI = 3.14;



    // note: 
    /*
    Pada bahasa pemrograman lainnya, mungkin mengubah value dari suatu variable itu mudah,
    tapi untuk bahasa C/C++, kita tidak bisa merubah value dari variable dengan tipe data
    tertentu ke tipe data lainnya. sebagai contoh:
    
    int age = 10;
    age = "10"; // akan menghasilkan error
    
    */

    return 0;
}