#include<iostream>
using namespace std;
int main(){
    int marks[]= {23,45,67,89,90};
    for (int i = 0; i < 5; i++)
    {
        cout<<marks[i]<<endl;
    }
    int* p  = marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    
    return 0;
}