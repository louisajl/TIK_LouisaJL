#include <iostream>
using namespace std;

int main() {
    /*
    jika nilai dengan sisa bagi = 0 , bilangan genap
    jika bukan, bilangan ganjil
    */
    
    int nilai;
    nilai = 0;
    cout<<"Masukan Nilai : ", cin>>nilai;
    if (nilai % 2 == 0 ) {
        cout<<"Bilangan Genap";
    }
    else { 
        cout<<"Bilangan Ganjil";
    }
}
