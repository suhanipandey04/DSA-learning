//stl

/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a={1,2,3,4};

    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"element at second index:"<<a.at(2)<<endl;
    cout<<"empty or not:"<<a.empty()<<endl;
    cout<<"first element:"<<a.front()<<endl;
    cout<<"last element:"<<a.back()<<endl;



}*/
//vector is dynamic

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    vector<int> a(5,1);//it will print an array of size 5 with all element 1
    cout<<"print a:"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(2);//to enter an element in the array(vector)
    cout<<"capacity:"<<v.capacity()<<endl;//kitne element ke liye space bacha h
    cout<<"size:"<<v.size()<<endl;//kitne element pade h

    v.pop_back();//element nikal deta h

    cout<<"before clear size"<<v.size()<<endl;
    v.clear();//vector ko clear kr deta h isme size 0 hojata h but capacity nhi
    cout<<"after clear size"<<v.size()<<endl;


}
