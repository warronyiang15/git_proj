#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

int partitions(int arr[],int l,int r)
{
	int pivot = arr[r];
	int l_pos = l;
	for(int i = l;i<r;i++)
	{
		if(arr[i] < pivot)
		{
			swap(&arr[i],&arr[l_pos]);
			l_pos += 1;
		}
	}
	swap(&arr[r],&arr[l_pos]);
	return l_pos;
}

void quicksort(int arr[],int l,int r)
{
	if(l < r)
	{
		int m = partitions(arr,l,r);
		quicksort(arr,l,m-1);
		quicksort(arr,m+1,r);
	}
}

