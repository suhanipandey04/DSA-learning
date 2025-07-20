//in binary search elements are in increasing or deacresing

#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid]) //go to right side
        {
            start=mid+1;
        }
        else//key is less than mid go to left
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
        
           
}


int main()
{
    int even[6] ={2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,17};

    int index=binarysearch(even,6,18);
    cout<<"Index of 18 is"<<index<<endl;

    int index1=binarysearch(odd,5,20);
    cout<<"index of 20 is"<<index1<<endl;

}

//we atre using mid=(start+end)/2 but if the integer value is in the range 2^31-1
//if both start and are of the same value of 2^31-1 than the mid value will be out of range of the integer 
//so we will use the another formula to find the mid that is
//(start+(end-start)/2)
//time complexity O(log)

/*#include <iostream>
int main() {
    std::cout << "C++ version: " << __cplusplus << std::endl;
    return 0;
}*/ //code to know the vedrsion of c++ we are using that is c++ 14
