#include<iostream>
using namespace std;

// int main ()
// {
//     int num, sum = 0;
 
//     num=1239;
//     cout <<"\nThe number is: " << num; 
 
//     while(num!=0){
//         sum += num % 10;
//         num = num / 10;
//     }
//     cout <<"\nSum of digits: " << sum;
 
//     return 0;
// }



int main()
{
    int n,sum=0;
    cin>>n;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    cout<<sum;
}
















