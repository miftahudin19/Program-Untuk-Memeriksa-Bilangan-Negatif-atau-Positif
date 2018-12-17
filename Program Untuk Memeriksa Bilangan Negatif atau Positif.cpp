#include<iostream>
using namespace std;
int main(){
int bilangan;

cout<<"PROGRAM MEMERIKSA BILANGAN POSITIF ATAU NEGATIF"<<endl;

cout<<"Input Bilangan = ";
cin>>bilangan;

if(bilangan>0){
cout<<" Hasilnya      = "<<bilangan<<" Merupakan Bilangan Positif "<<endl;
}
else
if(bilangan<0){
cout<<" Hasilnya      = "<<bilangan<<" Merupakan Bilangan Negatif "<<endl;

}
return 0;


}
