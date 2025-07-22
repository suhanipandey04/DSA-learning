//recursion->when a function call itself
//base condition -> where we have to stop
/*#include<iostream>
using namespace std;

int factorial( int n)
{
    if(n==0)//base case->if not used then  comes segmentation fault kuiki stack overflow hojata h
    
        return 1;
    
    int smallerproblem =factorial(n-1);
    int biggerproblem = n*smallerproblem;

    return biggerproblem;
}

int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout << ans << endl;
   
}*/
//types of recursion
//1->tail recursion->isme recursive relation end main aata h
//2->head recursion->isme recursive relation processing ke upr aata h

//code to find 2^n
/*#include<iostream>
using namespace std;

int power(int n)
{
    //base case
    if(n==0)
      return 1;

    //recursive relation  
    int smallerproblem=power(n-1);
    int biggerproblem=2*smallerproblem;

    return biggerproblem;
}

int main()
{
    int n;
    cin>>n;
    int ans=power(n);
    cout << ans << endl;
}*/

//code for printing counting -> for example->if n is 5 than output will be 5 4 3 2 1
/*#include<iostream>
using namespace std;

int count(int n)
{
    if(n==0)
      return 1;
    
    cout<< n << endl;//if we swap these to code line than it become head recursion than the output will be 1 2 3 4 5
     count(n-1);
}

int main()
{
    int n;
    cin>>n;
    int ans=count(n);
    cout << ans << endl; 
}*/
//fibonnacci series
/*#include<iostream>
using namespace std;

int fibonnaci( int n)
{
    if(n==0)
      return 0;

    if(n==1)
      return 1;  

     int ans = fibonnaci(n-1)+fibonnaci(n-2);
     return ans;
}

int main()
{
    int n;
    cin>>n;
     int ans=fibonnaci(n);
     cout<<"ans is:"<<ans<<endl;

}*/

//say digit
#include<iostream>
using namespace std;

void saydigit(int n,string arr[])
{
    //base case
    if(n==0)
      return ;


    //processing
    int digit=n%10;
    n=n/10;
   

    //recursive call
    saydigit(n,arr);
    cout<< arr[digit]<<" "; 
}

int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;

    cout<< endl << endl << endl;
    saydigit(n,arr);
    cout<< endl << endl << endl;
}
//input->412
//output->four one two