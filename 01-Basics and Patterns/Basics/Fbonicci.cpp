#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter any number " << endl;
    cin>>n;
    cout<<"Fibonacci Series upto "<<n <<" : "<<endl; 
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
            cout<<a<<" ";
        if(i==2)
            cout<<b<<" ";
        c=a+b;
        a=b;
        b=c;
        cout<< c <<" ";
    }
    
    
    return 0;
}