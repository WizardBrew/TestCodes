#include<iostream>

using namespace std;

int main(){
        cout<<"Natural Numb --"<< endl;
        int num, sum;
        num =1; sum = 0;

        while(num<=10){
                sum = sum+ num;
                num++;
        }cout<<"Sum - "<<sum<<endl;
        
        return 0;
}