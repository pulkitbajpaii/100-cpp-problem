#include<iostream>
using namespace std;
bool isPrime(int n){
    int count = 0;
    
    if(n<2)
    return false;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int l,h;
    cin>>l;
    cin>>h;
    for(int i=l;i<=h;i++)
    
         if(isPrime(i))
         cout<<i<<" ";
}