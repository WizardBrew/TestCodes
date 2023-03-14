#include<iostream>

using namespace std;

int main(){
        cout<<"Do While Loop "<< endl;
        int num;
        cout<<"Enter Number - ";
        cin>>num;

        do
        {
                cout<<num<<endl;
                num = num+1;
        } while (num<=10);
        
        return 0;
}