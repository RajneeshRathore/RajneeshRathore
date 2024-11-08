#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   cout<<"enter the string:\n";
   char s[200];
   cin.getline(s,200);
   int n=strlen(s);
   char res[n];
   int i,j,l=0;
   for(i=0;i<n;i++)
   {
     bool repeat=false;
     for(j=0;j<n;j++)
     {
        if(s[i]==s[j] && i!=j)
        {
            repeat=true;
            break;;
        }
     }
     if(!repeat)
     {
        res[l++]=s[i];
     }
   }
   for(int i=0;i<l;i++)
   {
     cout<<res[i];
   }
   return 0;

}