#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the  elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        int group=1;
        int start=i;
        while(start+group<=n)
        {
            for(int j=0;j<group;j++)
            {
                sum+=arr[start+j];
            }
            start+=group;
            group++;
        }
        if(sum>maxSum)
        {
            maxSum=sum;
        }
    }
    cout<<"the maximum special sum "<<maxSum<<endl;
}
