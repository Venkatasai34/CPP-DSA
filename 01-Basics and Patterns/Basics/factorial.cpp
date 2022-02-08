#include<iostream>
using namespace std;
int main()
{
    int i=1,n,fact=1;
    cout<< "Enter any number : " << endl;
    cin>>n;
    while(i<=n)
    {
        fact=fact*i;
        i+=1;
    }
    cout<< "factorial of "<<n <<" is : "<< fact;
    return 0;
}