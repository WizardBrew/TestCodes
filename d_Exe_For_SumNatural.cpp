#include<iostream>

using namespace std;

int main(){
        cout<<"For Loop Sum of Natural Numbers " <<endl;
        int i, num, sum;
        i=1; sum=0;
        cout<<"Enter the Number -";
        cin>>num;

        for(i=1; i<=num;i++){
                sum = sum+ i;
        // }
        cout<<" Sum --> "<<sum;
        }
        return 0;
}