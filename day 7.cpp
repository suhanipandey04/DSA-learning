#include<iostream>
using namespace std;

int main()
{
    //switch case
   /* int num=2;
    cout<<endl;
    switch(num)
    {
        case 1: cout<<"first"<<endl;
                 break;
        case 2: cout<<"second"<<endl;
                 break;    
        default:cout<<"it is default case"<<endl;
                              
    }*/

   /*char ch= '1';
    cout<<endl;
    switch(ch)
    {
        case 1: cout<<"first"<<endl;
                 break;
        case '1': cout<<"character one"<<endl;
                break;    //continue statement not within a loop
        default:cout<<"it is default case"<<endl;
                              
    }

    /*char ch= '1';
    int num =1;
    cout<<endl;
    switch(ch)
    {
        case 1: cout<<"first"<<endl;//case value can be int and char
                 break;
        case '1': switch(num)
                 {
                    case 1:cout<<"value of num is"<<num<<endl;
                    break;
                 }
                 break;    
        default:cout<<"it is default case"<<endl;
                              
    }*/

    //if in a infinite loop if there is a switch statement and we wants to comme out of loop then we will use exit()
    //calculator
    /*int a;
    
    cout<<"value of a is:"<<endl;
    cin>>a;
    int b;
    
    cout<<"value of b is:"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>op;
    switch(op)
    {
        case '+': cout<<"addition:"<<(a+b)<<endl;
                  break;

        case '/': cout<<"DIvision:"<<(a/b)<<endl;
                break;

        case '*': cout<<"Multiplication:"<<(a*b)<<endl;
                  break;

        case '-': cout<<"Subtraction:"<<(a-b)<<endl;
                  break;

        default: cout<<"enter valid operator"<<endl;
                 break;
    }*/
   /*int num=1330;
   int rs100,rs50,rs20,rs1;
   switch(1)
   {
    case 1 : rs100=num/100;
             num=num%100;
             cout<<"no of 100 rupee note"<<rs100<<endl;
            
    case 2: rs50=num/50;
            num=num%50;
            cout<<"no of 50 rupee note"<<rs50<<endl;
            
    case 3: rs20=num/20;
            num=num%20;
            cout<<"no of 20 rupee note"<<rs20<<endl;
            
    case 4: rs1=num/1;
            num=num%1;
            cout<<"no of 1 rupee note"<<rs1<<endl;
            
     }*/

    //functions
    //power of a,b
    /*int a,b;
    cin>>a>>b;
    int ans =1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    cout<<"answer is"<<ans<<endl;
    */


}