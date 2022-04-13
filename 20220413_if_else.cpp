#include <iostream>
using namespace std;

int main() {
    /*
    jika nilai >=90 sangat memuaskan
    jika nilai >=80 memuaskan
    jiks nilai >=75 cukup
    jika nilai <75 tidak lulus
    nilai tidak boleh lebih dari 100 dan kurang dari 0
    */
    
    int nilai;
    string keterangan;
    cout<<"Masukan Nilai : ", cin>>nilai;
    
    
    if (nilai < 0 || nilai > 100){
        keterangan ="Diluar_Jangkauan";
    }
    else if (nilai >= 90 ){
        keterangan ="Sangat_Memuaskan";
    }
    else if (nilai >= 80){ 
        keterangan ="Memuaskan";
    }
    else if (nilai >= 75){
        keterangan ="Cukup";
    }
    else {
        keterangan ="Tidak_Lulus";
    }
    
    return 0;
}
