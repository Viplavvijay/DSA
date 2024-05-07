#include<iostream>
using namespace std;

bool search (int arr[],int n,int key)
{
for (int i=0;i<n;i++)
{
	if (arr[i]==key)
	{
	return 1;
}
}
return 0;

}

int main()
{
	int arr[10]={1,4,5,8,-2,7,11,9,12,-3};
	
	cout<<"enter element to search for"<<endl;
	int key;
	cin>>key;
	
	
	bool found = search(arr,10,key);
	if (found)
	{
		cout<<"key is present"<<endl;
	}
	
}
