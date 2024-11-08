#include<iostream>
using namespace std;

void printArr(string arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
   cout<<endl;
}
void sortIn(string arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                string temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter the number of strings you want\n";
    cin>>n;
    string arr[n];
    cout<<"enter the strings\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sortIn(arr,n);
    cout<<"Dictionary sorted strings:\n";
    printArr(arr,n);
    return 0;
}