#include<iostream>

using namespace std;

int main(){
        cout<< "For Loop "<<endl;
        int num;
        cout<<"Enter the Number to Loop - "<<endl;
        cin>>num;

        // for(num; num<=10; num++){
        for(num; num<=10; num=num+1){
        cout<<num<<endl;}

        return 0;
}