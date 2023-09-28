
// Counting Digits
// Suppose We Have User Input 123 And How Many Digits The Number Contained That We Have To Print 
// Answer Of This Input Is 3

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    int cnt=0;
    while(n>0){
        int ld=n%10;
        cnt+=1;
        n=n/10;
    }
    cout<<"Digits : "<<cnt;
    return 0;
}