#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int tag;
    cout<<"enter the targeted sum:\n";
    cin>>tag;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]+arr[j]==tag)
            {
                int x1=i;
                int x2=j;
                cout<<"the index of an targeted sum : "<<x1<<" and "<<x2<<endl;
            }
        }
    }
    return 0;
}