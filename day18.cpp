//first and last occurence of an element in a sorted array
//you have been given a sorted arraylist ARR consisting of N elements you are also given an integer K now your task is to find the first and last occurence of K in ARR
#include<iostream>
using namespace std;

int FIRSTOCCURENCE( int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid= start +(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;//for last occurence change this as [start=mid+1]
        }
        else if(key>arr[mid])//right main jao
        {
            start=mid-1;
        }
        else if(key<arr[mid])//key<arr[mid] , left main jao
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int LASTOCCURENCE( int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid= start +(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;;//for last occurence change this as [start=mid+1]
        }
        else if(key>arr[mid])//right main jao
        {
            start=mid-1;
        }
        else if(key<arr[mid])//key<arr[mid] , left main jao
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int main()
{
    int even[5] ={1,2,3,3,5};
    cout<<"first occurence of 3 is"<<FIRSTOCCURENCE(even,5,3)<<endl;
    cout<<"last occurence of 3 is"<<LASTOCCURENCE(even,5,3)<<endl;
    return 0;

}

//total occurence =(lastindex-firstindex)+1


