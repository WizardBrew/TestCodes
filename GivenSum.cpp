#include<iostream>

using namespace std;

int main(){
        int num, sum;
        num =251; sum=0;
        while(num>0){
                sum= sum+(num%10); cout<<sum<<" + "<<num%10<<endl;
                num = num/10; cout<<num<<"/"<<"10"<<endl;
                cout<<"-----------------"<<endl;
        }
        cout<<" Sum - "<<sum;

        return 0;
}