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
				if(arr[j]<arr[min_index])
				{
					min_index=j;

				}
		}
	temp=arr[min_index];
	arr[min_index]=arr[i];
	arr[i]=temp;
		}
		cout<<"kth smallest element is:"<<arr[k-1];
		return 0;
	}
	/*OUTPUT:
	Enter the number of elements in the array4
Enetr an array:3 6 2 7
Enter the value of k2
kth smallest element is:3*/
