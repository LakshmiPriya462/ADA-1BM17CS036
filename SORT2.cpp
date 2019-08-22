#include<iostream>
using namespace std;
int main()
	{
		int j,n,i,k,temp,min_index;
		cout<<"Enter the number of elements in the array";
		cin>>n;
		int *arr=new int[n];
		cout<<"Enetr an array:";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"Enter the value of k";
		cin>>k;
		for(i=0;i<k;i++)
		{
			min_index=i;
			for(j=i+1;j<n;j++)
			{
				if(arr[j]>arr[min_index])
				{
					min_index=j;

				}
		}
	temp=arr[min_index];
	arr[min_index]=arr[i];
	arr[i]=temp;

		cout<<arr[i]<<" ";
		}
		return 0;
	}
/*output:
Enter the number of elements in the array6
Enetr an array:4 6 7 2 8 9
Enter the value of k5
9 8 7 6 4 */
