#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b ,c;
    cin>>a;
    cin>>b;
    cin>>c;

    // if(a>b && a>c) {cout<<"a";}
    // else if(b>a && b>c){  cout<<"b";  }
    // else {     cout<<"c"; }
    cout<<max(a,(max(b,c)));
}