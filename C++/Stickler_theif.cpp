#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int nums[n];
	for(int i=0;i<n;i++)
	cin>>nums[i];
	int dp[n+1];
	if(n==0)
	cout<<"0";
	else if(n==1)
	cout<<nums[0];
	else if(n==2)
	cout<<max(nums[0],nums[1]);
	else
	{
		dp[0]=0;
		dp[1]=nums[0];
		for(int i=2;i<n;i++)
		{
			dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
		}
		cout<<dp[n-1];
	}
}
