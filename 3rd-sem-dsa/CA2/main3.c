/* Recursive C program for merge sort */
#include<stdlib.h>
#include<stdio.h>

/* Function to merge the two haves
arr[l..m] and arr[m+1..r] of array arr[] */
void merge(int arr[], int l, int m, int r);

/* l is for left index and r is
right index of the sub-array
of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
if (l < r)
{
	// Same as (l+r)/2 but avoids
	// overflow for large l & h
	int m = l+(r-l)/2;
	mergeSort(arr, l, m);
	mergeSort(arr, m+1, r);
	merge(arr, l, m, r);
}
}

/* Function to merge the two haves arr[l..m]
and arr[m+1..r] of array arr[] */
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}
int main()
{
	int arr[] = {8,2,1,5,4,3};
	int n = sizeof(arr)/sizeof(arr[0]);


	mergeSort(arr, 0, n - 1);

	printf("\nSorted array is \n");
	for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}
