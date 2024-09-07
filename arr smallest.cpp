#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int smallestn(int arr[],int n)
{
	int min=arr[0];
    for (int i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}	
	return min;
} 
 int main()
 {
 	int arr1[]={2,3,8,5,7};
 	int n=5;
 	int min=smallestn(arr1,n);
 	cout<<min;
 	return 0;
 }


