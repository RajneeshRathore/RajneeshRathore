#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    cout<<"enter the string:\n";
    char st[200];
    cin.getline(st,200);
    char ch;
    cout<<"enter the specific charcter which you want to remove:\n";
    cin>>ch;
    int n=strlen(st);
    int l=0;
    char ans[n];
    for(int i=0;i<n;i++)
    {
        if(st[i]!=ch)
        {
          ans[l++]=st[i];
        }
    }
    cout<<"string after removal of specific character:\n";
    for(int i=0;i<l;i++)
    {
        cout<<ans[i];
    }
}