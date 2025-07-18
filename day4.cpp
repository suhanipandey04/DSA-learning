#include<iostream>
using namespace std;
int main()
{
    //patterns
   /* int n;
    cin>>n;
    int i=0;
    while(i<=n)
    {
         int j=1;
        while(j<=n)
        {
            cout<<j;//1234
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/

   /* int n;
    cin>>n;
    int i=0;
    while(i<=n)
    {
         int j=1;
        while(j<=n)
        {
            cout<<n-j+1;//printing reverse pattern like 4321
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
  /* int n;
   cin>>n;
   int i =1;
   int count=1;
   while(i<=n)
   {
    int j =1;
    while(j<=n)
    {
        cout<<count<<" ";
        count = count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }*/

   /*int n;
   cin>>n;
   int i =1;
   while(i<=n)
   {
        int j=1;
        while(j<=i)
        {
            cout<<'*';//print in a triangle pattern
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
   }*/

   /*int n;
   cin>>n;
   int i =1;
   while(i<=n)
   {
    int j =1;
    while(j<=i)
    {
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }*/

  /*int n ;
   cin>>n;
   int i=1;
   int count=1;
   while(i<=n)
   {
        int j =1;
        while(j<=i)
        {
            cout<<count;
            count=count+1;//doubt
            j=j+1;

        }
        cout<<endl;
        i=i+1;
   }*/

  /*int n;
   cin>>n;
   int i =1;
   while(i<=n)
   {
    int j =1;
    int value=i;
    while(j<=i)
    {
        cout<<value;
        value=value+1;
        j=j+1;

    }
    cout<<endl;
    i=i+1;
   }*/
/*int n;
cin>>n;
int i =1;
while(i<=n)
{
     int j =1;
     while(j<=i)
     {
        cout<<(i-j+1)<< " ";
        j=j+1;
     }
     cout<<endl;
     i=i+1;
}

/*int n ;
cin>>n;
int row =1;
while(row<=n)
{
    int col =1;
    while(col<=n)
    {
        char ch='A'+row-1;
        cout<<ch;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
    
}*/

/*int n;
cin>>n;
int row =1;
while(row<=n)
{
    int col =1;
    while(col<=n)
    {
        char ch='A'+col-1;
        cout<<ch;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
    
}*/
/*int n;
cin>>n;
int row =1;
while(row<=n)
{
    int col =1;
    while(col<=n)
    {
        char ch='A'+ row+col-2;
        cout<<ch;
        col=col+1;
    }
    cout<<endl;
    row=row+1; 
}*/
/*int n;
cin>>n;
int row =1;
while(row<=n)
{
    int col =1;
    while(col<=row)
    {
        char ch='A' +row-1;
        cout<<ch;
        col=col+1;
    }
    cout<<endl;
    row=row+1; 
}*/
/*int n;
cin>>n;
int row =1;
while(row<=n)
{
    int col =1;
    char ch='A';
    while(col<=row)
    {
       
        cout<<ch;
        ch=ch+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1; 
}*/

/*int n;
cin>>n;
int row =1;
while(row<=n)
{
    int col =1;
    
    while(col<=row)
    {
        char ch ='A'+row+col-2;
        cout<<ch;
        col=col+1;
    }
    cout<<endl;
    row=row+1; 
}*/

/*int n;
cin>>n;
int row =1;
while(row<=n)
{
    int col =1;
    char ch ='A'+n-row;
    while(col<=row)
    {
      
        cout<<ch;
        ch=ch+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1; 
}*/
/*int n;
cin>>n;
int row =1;
while(row<=n)
{
    //space print kralo
    int space=n-row;
    
    while(space)
    {
      
        cout<<" ";
        space=space-1;
        
    }
    //stars print kralo
    int col=1;
    while(col<=row)
    {
        cout<<"*";
        col=col+1;
    }
    row=row+1;
    cout<<endl;


    
}*/
/*int n ;
cin>>n;
int row=1;
while(row<=n)
{
    //print karo space
    int space=n-row;
    while(space)
    {
        cout<<" ";
        space=space-1;
    }
    //print 1st triangle
    int  col=1;
    while(col<=row)
    {
        cout<<col;
        col = col+1;
    }
    //print second triangle
    int start=row-1;
    while(start)
    {
        cout<<start;
        start=start-1;
    }
    cout<<endl;
    row = row +1;
}*/

int n ;
cin>>n;
int row=1;
while(row<=n)
{
    
    //print right triangle
    int  col=1;
    while(col<=n-row)
    {
        cout<<col;
        col = col+1;
    }
    
   
    //print middle triangle
     col=0;
    while(col<(2*row))
    {
        cout<<"*";
        col=col+1;
    }
    //print left triangle
    col=n-row;
    while(col>=1)
    {
        cout<<col;
        col=col-1;
    }
    cout<<endl;
    row=row+1;
}