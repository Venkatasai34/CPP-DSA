#include<iostream>
using namespace std;


int main()
{
    int i=2,n,sum=0;

    cout<<"Enter a number : "<<endl;
    cin>>n;
    while (i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        i+=1;
    }
    cout<<"The Sum of even numbers till N is : "<<sum<<endl;
    return 0;  
}