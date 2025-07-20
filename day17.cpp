#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for(int i = 1; i < n; i++) // for round 1 to n-1
    {
        for(int j = 0; j < n - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}