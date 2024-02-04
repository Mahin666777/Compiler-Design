#include<iostream>
using namespace std;
int main()
{

	int arr[7];
	int i,max,min;
	cout<<"enter elements of the array :-"<<endl;
	for(i=0;i<7;i++)
	{
		cin>>arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<7;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<"Maximum number is :"<<max<<endl<<"Minimum number is :"<<min;
}
