#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int largestn(int arr[],int n)
{
	int max=arr[0];
    for (int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}	
	return max;
} 
 int main()
 {
 	int arr1[]={2,3,8,5,7};
 	int n=5;
 	int max=largestn(arr1,n);
 	cout<<max;
 	return 0;
 }

