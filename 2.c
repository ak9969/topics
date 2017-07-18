#include <bits/stdc++.h>
#include <string.h>
using namespace std; 
int main()
{

	int a1,a2,t=0;
	cin>>a1>>a2;
	if(a1==1&&a2==1)
	{
		cout<<t;
		return 0;
	}
	while(a1>0&&a2>0)
	{
		if(a1==a2&&a1==0)
			break;
		if(a1>a2)
		{
			a1=a1-2;
			a2=a2+1;
			t++;
			if(a1<=0)
			{
				break;
			}
			while(a1!=2&&a1!=1)
			{
				a1=a1-2;
				a2=a2+1;
				t++;
			}
		}
		else
		{
			a2=a2-2;
			a1=a1+1;
			t++;
			if(a2<=0)
			{
				break;
			}
			while(a2!=1&&a2!=2)
			{
				a2=a2-2;
				a1=a1+1;
				t++;
			}
		}
	}
	cout<<t;
}
