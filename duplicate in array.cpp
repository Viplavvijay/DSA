#include<iostream>
#include<vector>
using namespace std;
int main()
{
int findDuplicate(vector<int> &arr) 
{
    int ans=0;

    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];

    }

    for(int i=0;i<arr.size();i++)
    {
        ans=ans^i;
    }
	return ans;
}
}
