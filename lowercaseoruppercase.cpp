#include<iostream>
using namespace std;
int main ()
{
    //check lowercase and uppercase
    char ch;
    cout << "Enter your character value : ";
    cin>> ch;
    if((ch >= 'a') && (ch <='z') ){
        cout<<"lowercase";
    }else{
        cout<<"uppercase";
    }
    return 0;
}