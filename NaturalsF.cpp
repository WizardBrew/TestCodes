#include<iostream>

using namespace std;

int main(){
        int i, num, sum;
        i =1; num=10; sum=0;

        for(i=1;i<=num;i++){
                sum= sum+i; cout<<sum<<"+"<<i<<endl;
        }
        cout<< sum<<endl;

        return 0;
}