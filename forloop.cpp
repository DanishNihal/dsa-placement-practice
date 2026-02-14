#include<iostream>
using namespace std;
int main ()
//print sum of number from 1 to n and use of break statement
{
    // int i,n;
    // int sum =0;
    // cout<<"enter the n :";
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     sum +=i;
    //     // if (i==3){
    //     //     break;
    //     // }

    // }
    // cout<< "sum is :" << sum <<endl;

    //sum of odd number from 1 to n
    int n,i;
    int sum = 0;
    cout<<"Enter the range: ";
    cin >> n;
    for(i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
    

    }
    cout<< "sum of odd number :" <<sum;
    return 0;
}