#include<iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout<<"n is"<<n<<endl;
}
/*int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
       return fib(n-1)+fib(n-2);
    
    
}*/
int main()
{
    /*int n;
     cin>>n;
     cout<<"fibonacci"<<fib(n)<<endl;
    
    return 0;*/

    //pass by value
    int n;
    cin>>n;
    dummy(n);
    cout<<"number n is"<<n<<endl;
    return 0;
}