//bitwise operator
# include<iostream>
using namespace std;
int main()
{
    /*int a=4;
    int b=6;
    cout<<"a&b"<<(a&b)<< endl;
    cout<<"a|b"<<(a|b)<< endl;
    cout<<"a^b"<<(a^b)<< endl;
    cout<<"~a"<<(~a)<< endl;

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    int i =7;
    cout<<++i<<endl;//8
    cout<<i++<<endl;//9
    cout<<--i<<endl;//8
    cout<<i--<<endl;//7*/

    //for loop
    /*int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing counting from 1to n"<<endl;

    for(int i =1;i<n;i++)//(initialization;condition;updation)
    {
        cout<<i<<endl;
    }*/

   /* int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing counting from 1to n"<<endl;
    int i=1;

    for(;; )//(initialization;condition;updation)
    {
        if(i<=n){
        cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }*/
    /*int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"Printing counting from 1to n"<<endl;
    for(int a =0, b=1;a>=0 && b>=1; a--,b--)
    {
        cout<<a<<" " <<b<<" "<<endl;
    }*/
   //find sum till n number
   /*int n;
   cout<<"Enter the value of n"<<endl;
   cin>>n;
   int sum=0;
   for(int i=1;i<=n;i++)
   {
    sum=sum+i;
   }
   cout<<sum<<endl;*/
   //fibonacci series
   /*int n=10;
   int a=0;
   int b =1;
   cout<<a<<endl;
   cout<<b<<endl;
   for(int i =1;i<=n;i++)
   {
    int nextnumber=a+b;
    cout<<nextnumber<<endl;
    a=b;
    b=nextnumber;
   }*/

   //prime or not
   /*int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    bool flag=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime no"<<endl;
            flag=0;
            break;
        }
        if(flag=0)
        {
            cout<<"not a prime no"<<endl;
        }
        else
        {
            cout<<"is a prime no"<<endl;
        }

        
    }*/
    /*int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int  i =0;i<5;i++)
    {
        cout<<"hi"<<endl;
        cout<<"hey"<<endl;
        continue;
        cout<<"reply toh"<<endl;

    }*/
    //scope of variable
   /* int a=3;
    cout<<a<<endl;//value of a  is 3

    if(true)
    {
        int a=5;
        cout<<a<<endl;//here value of a is 5
    }
    cout<<a<<endl;//here value of a is 3*/

    //given an integer no n return the diffrence between the product of its digit and sum of its digit
    //n=234
    //output=15
    //2*3**4=24-(2+3+4)=15
    int n;
    cin>>n;
    int prod=1;
    int sum=0;
    while(n!=0)
    {
        int digit=n%10;
        prod=prod*digit;
        sum=sum+digit;

        n=n/10;

    }
    int answer=prod-sum;
    cout<<answer<<endl;






    









    



}