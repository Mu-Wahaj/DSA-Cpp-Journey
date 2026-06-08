// book alocation problem in dsa is quite popular problem and it is asked in many interviews. The problem is to allocate books to students such that the maximum number of pages allocated to a student is minimum. The problem can be solved using binary search algorithm.
#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int maxAllocatedPages)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllocatedPages)
        {
            return false;
        }
        if (pageSum + arr[i] <= maxAllocatedPages)
        {
            pageSum += arr[i];
        }
        else
        {

            studentCount++;
            pageSum = arr[i];
        }
    }

    return studentCount > m ? false : true;
}
int allocateBooks(int arr[], int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0;
    int end = sum;
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid))
        {
            res = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {2,1,3,4};
    int m = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of pages allocated to a student is " << allocateBooks(arr, n, m) << endl;
    return 0;
}   