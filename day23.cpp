/*#include<iostream>
using namespace std;

void update2(int& n)
{
    n++;//here we create a refrence variable so there will be changes
    //and this is called pass by refrence 
}



void update1(int n)
{
    n++;//by this it will only copy the value and there will be no changes
    //pass by call 
}


int main()
{

    //refrence variable->same memory but diffrent names
    /*int i=5;
    //create refrence variable
    int&j=i;
    cout<<i<<endl;//5
    i++;
    cout<<i<<endl;//6
    j++;
    cout<<i<<endl;//7
    cout<<j<<endl;//7

    int n=5;
    cout<<"Before"<<n<<endl;//5
    update1(n);
    cout<<"after"<<n<<endl;//5

    cout<<"Before"<<n<<endl;//5
    update2(n);
    cout<<"after"<<n<<endl;//6*/

    #include<iostream>
    using namespace std;

    int getsum(int *arr,int n)
    {
       
        int sum=0;
        for(int i=0; i<n ; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
    int main()
    {
        //dynamic memory allocation
        /*char ch='q';
        cout<<sizeof(ch)<<endl;//1

        char* c=&ch;
        cout<<sizeof(c)<<endl;//4*/

        //jo stack main  milega wo static(static allocation->here memory automatically release) hoga aur jo heap main milega wo dynamic hoga(dynamic allocation->here manually memory relese hogi by using delete keyword)

        int n;
        cin>>n;
        //variable size array
        int* arr=new int[n];

        //taking input in array
        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
        }
        int ans=getsum(arr,n);
        cout<<"answer is "<< ans <<endl;

        
        return 0;
    }


