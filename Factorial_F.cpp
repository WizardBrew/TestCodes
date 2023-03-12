#include<iostream>

using namespace std;

int main(){
        cout<<"Factorial For Loop "<< endl;
        int fact=1, num=8;
        for(num ;num>=1 ; num= num-1){
                fact = num*fact;
        }
        cout<<"fact -> "<<fact<<endl;
        return 0;
}