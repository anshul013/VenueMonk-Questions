#include<bits/stdc++.h>
#define ll long long
const int Sun=1;
using namespace std;
int getDay(ll y, int m, int d)
{
	if(m<=2)
	{
		m+=12;
		y--;
	}
	return (d+13*(m+1)/5+y+y/4-y/100+y/400)%7;
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll y1=1901,y2=2000;
    int m1=1,m2=12,d1=1,d2=31;
    ll cy=y1;
    int cm=m1;
    if(d1>1)
    {
    	cm++;
    	if(cm>12)
    	{
    		cm-=12;
    		cy++;
    	}
    }
    int sum=0;
    while(cy+2800<y2)
    {
    	cy+=2800;
    	sum+=4816;
    }
    while(cm<m2||cy<y2)
    {
    	if(getDay(cy,cm,1)==Sun)
    		sum++;
    	cm++;
    	if(cm>12)
    	{
    		cm-=12;
    		cy++;
    	}
    }
    if(getDay(cy,cm,1)==Sun)
    	sum++;
    cout<<sum<<endl;
    return 0;
}
