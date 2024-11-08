#include<iostream>
using namespace std;

class student
{
    private:
    int score[5];
    
    public:
    student(){}
    void input()
    {
       for(int i=0;i<5;i++)
       {
        cin>>score[i];
       }
    }
    int calTotalScore()
    {
       int total=0;
       for(int i=0;i<5;i++)
       {
         total+=score[i];
       }
       return total;
    }
};
int main()
{
    int n;
    cout<<"enter the number of students:\n";
    cin>>n;

    student s1[n];

    for(int i=0;i<n;i++)
    {
        cout<<"enter the scores of student : "<<i+1<<endl;
        s1[i].input();
    }
    int annaScore=s1[0].calTotalScore();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i].calTotalScore()>annaScore)
        {
            count++;
        }
    }
    cout<<"\nnumber of students who scores higher than anna: "<<count<<endl;
    return 0;
}