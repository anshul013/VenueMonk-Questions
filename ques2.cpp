#include<bits/stdc++.h>
using namespace std;
int cnt(int notes[], int n, int w)
{
    int t[n+1][w+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<w+1;j++)
        {
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<w+1;j++)
        {
            if(notes[i-1]<=j)
                t[i][j]=t[i-1][j]+t[i][j-notes[i-1]];
            else
                t[i][j]=t[i-1][j];
        }
    }
    return t[n][w];
}
int main()
{
    int notes[]={10,20,50,100,200,500,1000,2000},n=8,w=2000;
    cout<<cnt(notes,n,w)<<endl;
    return 0;
}
