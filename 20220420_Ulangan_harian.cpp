/*Buatlah sebuah program sederhana untuk menghitung nilai akhir
dengan ketentuan
nilai akhir 30% nilai tugas + 30% nilai uts+ 40% nilai uas
jika salah satu nilai lebih dari 100 program 
program akan berhenti
dengan statement tidak boleh lebih dari 100*/

#include <iostream>
using namespace std;
    
    int main()
    {
      
      int a;
      cout<<"Masukan Nilai Tugas : ";cin>>a;
      if (a>100){
         cout<<"Nilai Tidak Boleh Lebih dari 100"<<endl;
      }  
      
      int b;
      cout<<"Masukan Nilai UTS : ";cin>>b;
      if (b>100){
         cout<<"Nilai Tidak Boleh Lebih dari 100"<<endl;
      }  
     
      int c;
      cout<<"Masukan Nilai UAS : ";cin>>c;
      if (c>100){
         cout<<"Nilai Tidak Boleh Lebih dari 100"<<endl;
      }  
      
      int nilai;
      nilai = a*0.3 + b*0.3 + c*0.4;
      
      if (nilai>100) {
      cout<<"Nilai Tidak Boleh Lebih dari 100";
      }
      else{
      cout<<"Nilai Akhir : "<<nilai;
      }
      
      return 0;
    }
    
