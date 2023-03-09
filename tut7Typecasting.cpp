#include<iostream>

using namespace std;

int c= 45;

int main(){
    
    int a, b, c;
    cout<<"Enter the Value of a  \n";
    cin>>a;
    cout<<"Enter the Value of b  \n";
    cin>>b;
    cout<<"a + b ="<<a+b<<endl;
    cout<<"Global C - "<<::c<<endl;
    cout<<"a+b n + Global is  "<<a+::c+a+b<<endl;

}