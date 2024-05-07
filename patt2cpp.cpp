#include<iostream>
using namespace std;

int main()
{
	int n=4;
	
	int row=1;

	while(row<=n)
	{
	int val=row;
	int col=1;
	while (col<=row)
	{
     cout<<val;
     val=val+1;
     col=col+1;
}
     cout<<endl;
     row=row+1;
}
}
