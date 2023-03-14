#include<iostream>

using namespace std;

int main(){
        cout<<"While Loop reverse 1 to 10" <<endl;
        int num;
        cout<<"Enter the Number to reverse  - ";
        cin>>num;
        while(num>=1){
                cout<<num<<endl;
                num = num-1;

        }
        return 0;
}