#include<iostream>

using namespace std;
                                                                        // Arrays Pointers are Different than Usual Pointer the Address is Array itself 
int main(){                                                     // cannot use &Marks  instead assign new variable Arr = Marks; Arr++ o
                                                                                            //  *Arr   if Marks[0];    *(Arr+i) if Marks[1]  it shows value 
    int Marks[] = {0,10,20,30,40,50,60,70,80};
    int* Arr = Marks;
    cout<<"The Value of Marks is now "<<Arr<<endl;
    cout<<"The Value of Marks is now "<<*Arr<<endl;
    cout<<"The Value of Marks is now "<<*(Arr+1)<<endl;
    cout<<"The Value of Marks is now "<<*(Arr+2)<<endl;
    cout<<"The Value of Marks is now "<<*(Arr+3)<<endl;
    // cout<<"----------------==============-------"<<endl;

    // cout<<*(Arr++)<<endl;           // {0,10,20,30}  Arr = 0 then ++ Arr+next thats 10 check printing Arr below line
    // cout<<*Arr<<endl;                   // Shows Current  Arr position is 10 as above said
    // cout<<*(++Arr)<<endl;        // First incremented 2 positions then printed Arr - 0,10 = Arr


    return 0;
}