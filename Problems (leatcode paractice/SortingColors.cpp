// sorting the colr in an array is another problem which is similar to the partitioning problem of quick sort
#include <iostream>
using namespace std;
void sortColors(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

//above is the brute force approach which is similar to the partitioning problem of quick sort and below is the optimal approach which is similar to the counting sort
void sortColorsOptimal(int arr[], int n)

{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++)
    {
        arr[i] = 2;
    }
}

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortColors(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int arr2[] = {2, 0, 2, 1, 1, 0};
    sortColorsOptimal(arr2, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}