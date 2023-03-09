#include<iostream>
#include<iomanip>               // Useing manuplator
using namespace std;

int main(){

    const int fixedint = 10;   // cannot change Variable no mater what if used const. in senario example of PIE / Formula
    cout<< fixedint<<endl;
    // -------------------------------------------------------------------------
    // fixedint =20; 
    // cout<<fixedint<<endl;

    // ==== Manuplators //==================================
    int a = 20, b =40234,  c =160;
    cout<<"the Value of a is "<<a<<endl;
    cout<<"the Value of a is "<<b<<endl;
    cout<<"the Value of a is "<<c<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"the Value of a is "<<setw(5)<<a<<endl;       // the SetW sets the charater space of 4 or 5 as mentioned or Align the OP
    cout<<"the Value of a is "<<setw(4)<<b<<endl;
    cout<<"the Value of a is "<<setw(4)<<c<<endl;

    return 0;

}