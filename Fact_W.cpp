#include<iostream>

using namespace std;

int main(){
        cout<<"Factorail While"<< endl;
        int fact =1, num= 5;

        while(num>=4){
                fact = fact*num;
                num = num-1;
                cout<<"fact  "<<fact<<endl;
        }
        return 0;
}