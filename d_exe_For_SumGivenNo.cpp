#include<iostream>

using namespace std;

int main(){
        cout<<"For Loop Sum of Given Number "<< endl;
        int num, sum;
        num=271 ; sum=0;

        for(num; num>0; num= num/10){
                sum =sum+(num%10);
        }
        cout<<"sum - "<<sum;

        return 0;
}