#include <iostream>

using namespace std;
int main(){
 int batasbawah, batasatas;
 cout<<"Masukan Batas Bawah = "; cin>>batasbawah;
 cout<<"Masukan Batas Atas = " ; cin>>batasatas;
 if (batasbawah<batasatas){
     while (batasbawah ++ <batasatas ){
     cout<<"Data ke - "<<batasbawah<<endl;
   }
 }
 else {
     cout<<"Batas bawah tidak boleh lebih dari batas atas"<<endl;
 }
    return 0;
}
