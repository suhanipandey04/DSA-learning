#include<iostream>
using namespace std;

bool isprime(int n)//1->prime no//0->not a prime no
{
    for (int i =2;i<n;i++)
    if(n%i==0)//divide hogya h not a prime no
    {
        return 0;
    }
    else{
        return 1;
    }
}

/*void printcounting(int n)//void means this function will not return anything
{
   for(int i=1;i<=n;i++)
   {
     cout<<i<<endl;
   }
   
}*/
/*int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int num=factorial(n);

    int denom=factorial(r)*factorial(n-r);
    return num/denom;//nCr=n!/r!(n-r)!

}*/


/*bool iseven(int a){//1->even,//0->odd
    
    
    //odd
    if(a&1)
    {
        return 0;
    }
    return 1;
}

/*int power(int num1,int num2)
{
    int ans=1;
    for(int i=1;i<=num2;i++)
    {
        ans=ans*num1;
    }
    return ans;
}*/
int main()
{
    /*int a,b;
    cin>>a>>b;
     int ans=power(a,b);
     cout<<ans<<endl;
    
     int c,d;
    cin>>c>>d;
     int pow=power(c,d);
     cout<<pow<<endl;




    return 0;*/

   /* int num;
    cin>>num;
    if(iseven(num))
    {
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }*/

    /*int n,r;
    cin>>n>>r;
    cout<<"Answer is:"<<nCr(n,r)<<endl;

    return 0;*/

    /*int n;
    cin>>n;
    printcounting(n);
    return 0;*/
    int n;
    cin>>n;
    if(isprime(n)){
          cout<<"is a prime no"<<endl;
    }
    else{
        cout<<"not a prime no"<<endl;
    }
}