#include <iostream>
using namespace std;

int main(){
    
    int a, b, c, d;
    string hasil;
    
    cout<<"Masukan a : "; cin>>a;
        while (a==0){
            cout<<"Tidak boleh 0";
        
        }
    cout<<"Masukan b : "; cin>>b;
    cout<<"Masukan c : "; cin>>c; 
    
    cout<<"Hasil rumus ABC : "<< (d = b * b - 4 * a * c)<<endl;
    
    
        if (d<0){
            cout<<"Akar real"<<endl;
        
        }
        else if (d>0){
            cout<<"Akar Imajiner"<<endl;
        
        }
        else if (d==0){
            cout<<"Akar kembar"<<endl;
        
        }
    

    return 0;
}
