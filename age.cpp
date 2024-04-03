#include<iostream>
using namespace std ;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age>18){
        cout<<"you can vote"<<endl;
    }
     else if (age==18){
    cout<<"empty"<<endl;
    }
    else{
        cout<<"you can not vote"<<endl;
    }
   return 0;
}
