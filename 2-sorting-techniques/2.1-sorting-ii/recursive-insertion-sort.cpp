//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

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
    // swapping the elements
private:
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }

public:
    // Function to sort the array using insertion sort algorithm.
    void recursiveInsertionSort(int arr[], int n, int i)
    {
        if (i == n)
            return;
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
            swap(&arr[j - 1], &arr[j]);

        recursiveInsertionSort(arr, n, i + 1);
    }

public:
    // Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        recursiveInsertionSort(arr, n, 0);
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
        ob.insertionSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends