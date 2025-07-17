/*#include<iostream>
using namespace std;
//to searchg an element and how to create an 2d array
bool ispresent(int arr[3][4],int target,int i,int j)
{
    for(int i=0;i<3;i++)
    {
        for( int j=0;j<4;j++)
        {
           if(arr[i][j]== target)
           {
            return 1;
           }
        }
    }
    return 0;
}


int main()
{
    int arr[3][4];
    for(int i=0;i<3;i++)
    {
        for( int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for( int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the element to search"<<endl;
    int target;
    cin>>target;

    if(ispresent(arr,target,3,4))
    {
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found";
    }


    return 0;
}*/



//row wise sum
/*#include<iostream>
using namespace std;

void printsum(int arr[][3], int rows, int cols) {
    cout << "Printing the sum" << endl;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter the elements" << endl;
    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printsum(arr, 3, 3);
    return 0;
}*/

//largest rowsum
#include<iostream>
using namespace std;

int largestrowsum(int arr[][3], int rows, int cols)
{
    int maxi= INT8_MIN;
    int rowindex=-1;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        
        if(sum>maxi)
        {
            maxi=sum;
            rowindex=rows;
        }
    }

    cout<<"maximum row sum is "<< maxi<<endl;
    return rowindex;

}

void printsum(int arr[][3], int rows, int cols) {
    cout << "Printing the sum" << endl;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter the elements" << endl;
    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printsum(arr, 3, 3);
    return 0;



    int ansindex=largestrowsum(arr,3,3);
    cout<<"max in index"<<endl;

    return 0;
}    

