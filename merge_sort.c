#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int lo,int mid,int hi)
{
	int i = lo;
	int j = mid;
	int k = hi;
	int dp[hi - lo + 1];
	int index = 0;
	while(i < mid && j < hi)
	{
		if(arr[i] < arr[j])
			dp[index++] = arr[i++];
		else
			dp[index++] = arr[j++];
	}
	while(i < mid) dp[index++] = arr[i++];
	while(j < hi) dp[index++] = arr[j++];
	index = 0;
	for(int a = lo;a<hi;a++)
		arr[a] = dp[index++];
	return;
}
void merge_sort(int arr[],int lo,int hi)
{
	if( lo + 1 < hi )
	{
		int mid = (lo + hi) / 2;
		merge_sort(arr,lo,mid);
		merge_sort(arr,mid,hi);
		merge(arr,lo,mid,hi);
	}
	return;
}

int main()
{
	int arr[12] = {5,4,0,9,1,10,1,1,1,1,1,9};
	merge_sort(arr,0,12);
	for(int i =0;i<12;i++)
		printf("%d ",arr[i]);
	return 0;
}
