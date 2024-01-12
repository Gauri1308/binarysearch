#include <iostream>
using namespace std;

void addmerge(int array[], int low, int end, int mid)
{
    int n1 = mid - low + 1;
    int n2 = end - mid;
    int leftarray[n1];
    int rightarray[n2];
    // copy numbers
    for (int i = 0; i < n1; i++)
    {
        leftarray[i] = array[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        rightarray[j] = array[mid + 1 + j];
    }
    // merge
    int i = 0;   // Initial index of first subarray
    int j = 0;   // Initial index of second subarray
    int k = low; // Initial index of merged subarray

    while (i < n1 && j < n2)
    {
        if (leftarray[i] <= rightarray[j])
        {
            array[k] = leftarray[i];
            i++;
        }
        else
        {
            array[k] = rightarray[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftarray[], if there are any
    while (i < n1)
    {
        array[k] = leftarray[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightarray[], if there are any
    while (j < n2)
    {
        array[k] = rightarray[j];
        j++;
        k++;
    }
}

void mergesort(int array[], int low, int end)
{
    if (low == end)
        return;
    int mid = (low + end) / 2;
    mergesort(array, low, mid);
    mergesort(array, mid + 1, end);

    addmerge(array, low, end, mid);
}
int main()
{
    int gauri[5] = {3, 6, 8, 5, 1};
    mergesort(gauri, 0, 4);

    cout << "Sorted array is \n";
    for (int i = 0; i < 5; i++)
        cout << gauri[i] << " ";
    cout << endl;

    return 0;
}
