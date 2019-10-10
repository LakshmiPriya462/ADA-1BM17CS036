#include<iostream>
#include<cmath>
using namespace std;
void DPKnapsack(int *wt, int *val,int n,int w)
{
int i,j;
int dp[n+1][w+1];
	for(i=0;i<=n;i++)
		dp[i][0]=0;
	for(j=0;j<=w;j++)
		dp[0][j]=0;
	for(i=1;i<=n;i++){
	for(j=1;j<=w;j++){
if(j-wt[i]>=0)
	dp[i][j]=max(dp[i-1][j],val[i]+dp[i-1][j-wt[i]]);
else
	dp[i][j]=dp[i-1][j];
}
}
for(i=0;i<=n;i++)
{
cout<<"\n";
for(j=0;j<=w;j++)
{
cout<<dp[i][j]<<"";
}
}
cout<<"maximum value:"<<dp[n][w]<<endl;
cout<<"including items with weight:";
i=n;
j=w;
int sum=0;
while(i>0&&j>0)
{
	if(dp[i-1][j]==dp[i][j])
		i--;
	else{
		if(dp[i][i]==dp[i-1][j-wt[i]]+val[i])
			{
				cout<<"weight"<<wt[i]<<"value"<<val[i]<<"\t";
				sum+=val[i];
			j=j-wt[i];
			i--;
}
}
}
if(sum==dp[n][w])
	cout<<"weight:"<<wt[i]<<"value:"<<val[i]<<"\n";
}
int main()
{
int i=0;
int *wt,*val,n,w;
cout<<"enter the maximum capacity:";
cin>>w;
cout<<"enter the number of items:";
cin>>n;
wt=new int[n+1];
val=new int[n+1];
cout<<"enter the weight and value:";
for(i=1;i<=n;i++){

cin>>wt[i];
cin>>val[i];
}
DPKnapsack(wt,val,n,w);
}
			



