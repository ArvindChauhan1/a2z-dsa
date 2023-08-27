//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
private:
    // swapping the elements
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }

public:
    int partition(int arr[], int l, int h)
    {
        int pivot = arr[l];
        int i = l, j = h;
        while (i < j)
        {
            while (arr[i] <= pivot && i < h)
                i++;
            while (arr[j] > pivot && j > l)
                j--;

            if (i < j)
                swap(&arr[i], &arr[j]);
        }
        swap(&arr[l], &arr[j]);
        return j;
    }

public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int l, int h)
    {
        if (l >= h)
            return;
        int pivotindex = partition(arr, l, h);
        quickSort(arr, l, pivotindex - 1);
        quickSort(arr, pivotindex + 1, h);
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.quickSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends