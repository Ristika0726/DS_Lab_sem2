/*to input two sets in find their cartasian product*/
#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],c[10],i,j,k,l;
	cout<<"Enter the number of elements of set A: "<<endl;
	cin>>k;
	cout<<"Enter the elements of set A: "<<endl;
	for(i=0;i<k;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the number of elements of Set B: "<<endl;
	cin>>l;
	cout<<"Enter the elements of set B"<<endl;
	for(i=0;i<l;i++)
	{
		cin>>b[i];
	}
	cout<<"Cartessian Product: "<<endl;
	cout<<"{";
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			cout<<"(";
			cout<<a[i]<<","<<b[j];
			cout<<") ";
			cout<<",";
		}
	}
	cout<<"}";
	return 0;
}
