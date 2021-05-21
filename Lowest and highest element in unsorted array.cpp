#include<iostream>
using namespace std;
int main()
{
	int a[]={2,7,8,5,9,1,10,11};
	int n= sizeof(a)/sizeof(a[0]);
	int low=a[n-1];
	int high=a[0];
	for(int i=0;i<n;i++)
	{	
		if(high<a[i])
		{
			high=a[i];
		}
		else if(low>a[i])
		{
			low=a[i];
		}
	}
	cout<<low<<"  "<<high;
}

