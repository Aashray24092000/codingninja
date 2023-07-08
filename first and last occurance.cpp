#include<iostream>
using namespace std;
int firstoccurance(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			end=mid-1;
		//	return mid;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		else if(key<arr[mid])
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int lastoccurance(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;
		//	return mid;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		else if(key<arr[mid])
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int main()
{
	int even[6]={1,3,3,3,3,6};
     
    cout<<"the first indexx of 2 is: "<<firstoccurance(even,6,3)<<endl;
	cout<<"the last indexx of 2 is: "<<lastoccurance(even,6,3)<<endl;
}