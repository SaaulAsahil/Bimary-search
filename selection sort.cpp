#include <iostream>
using namespace std;
int main()
{
	int arr[5],i,j,min,temp;
	for(i=0;i<5;i++)
	{
	cout<<"Enter value= ";
	cin>>arr[i];
	}
	cout<<"original values in array: ";
	cout<<arr [i]<<"  ";
	for(i=0;i<4;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	cout<<"/nThe sorted array/n";
	for(i=0;i<5;i++)
	cout<<arr[i]  <<"  ";
	return 0;
}