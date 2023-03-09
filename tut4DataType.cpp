#include<iostream>
using namespace std;

int globalVar = 10;            // Global Variable
void  sum(){
    cout<<globalVar;
}


int main(){
    int a=14, b = 15;
    char ch = 'C';          // Onle one Character can be used
    int globalvar = 78;           // Local Variable Dup name
    cout<<"The Addition\n"<<a+b<<endl;
    cout<<"The Ch is\n"<<ch<<endl;
    sum();                  // Check for Fun  calls it instantly
    cout<<"\n";
    cout<<globalVar;          // First checks Local and exec 

}