
#include<iostream>
using namespace std;


int getMIN(int num[],int n)
{
    int min= INT8_MAX;

    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}


int getMAX(int num[],int n)
{
    int max= INT8_MIN;

    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}




/*void printArray(int arr[],int size)
{
    
    for (int i=0;i<=size;i++)
    {
        cout<<arr[i]<<endl;
    }
}*/
int main()
{
   /* int arr[10];//declare array
    cout<<"every thing is fine"<<endl;
    cout<<"value at 9"<<arr[9]<<endl;//garbage value will come in the output aas value is not assigned

    int num[15]={2,7};
    int n=15;
    for (int i=0;i<=n;i++)
    {
        cout<<num[i]<<endl;//printing an array//o/p will be 2,7,0,0,0,0,0,0,0,0,0,0,0,0,0
    }

    int one[15]={1};
    int n=15;
    for (int i=0;i<=n;i++)
    {
        cout<<one[i]<<endl;//o/p will be 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    }*/

   /*int four[5]={0};
    //int n=5;

    printArray(four,5);*/

    /*char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;*/
    


    int size;
    cin>>size;
    int num[100];
    for(int i=0; i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"Maximum value is"<< getMAX(num,size)<<endl;
    cout<<"Minimum value is"<< getMIN(num,size)<<endl;
    


    

    return 0;
     

}