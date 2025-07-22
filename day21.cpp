#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot=arr[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }

    //pivot at right position
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);


    //left and right wala part sambhal lete h
    int i=s,j=e;

    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i] < pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }
        if(i<pivotindex && j > pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int arr[],int s,int e)
{
    //base case
    if(s>=e)
      return ;
    
    //partition
     int p=partition(arr,s,e);

      //recurssion call
      quicksort(arr,s,p-1);//left part sort
      quicksort(arr,p+1,e);//right part sort

}



int main()
{
    int arr[5]={1,4,5,2,7};
    int n=5;

    quicksort(arr,0,n-1);
    for( int i=0;i<n;i++)
    {
        cout<< arr[i] << " ";
    }cout<<endl;

}
//why quick sort is better than merge sort?
//space complexity-o(n)
//time complexity-o(nlogn)
//worst case complexity-o(n^2)