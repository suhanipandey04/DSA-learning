#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d)
    {
        cout<< i <<" ";
        
    }

    cout<<"before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);//vector ko clear kr deta h isme size 0 hojata h but capacity nhi
    cout<<"after erase"<<d.size()<<endl;

}