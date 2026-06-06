#include <iostream>
using namespace std;

void SumArray(int arr[], int sz)
{
    int TotalSum = 0;
    int product = 1;
    for (int i = 0; i < sz; i++)
    {
        TotalSum = TotalSum + arr[i];
        product = product * arr[i];
    }
    cout << "sum of alal element in the array" << " " << TotalSum << endl;
    cout << "product of alal element in the array" << " " << product << endl;
}

void swapArray(int array[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = 0, largestIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
            smallestIndex = i;
        }
        if (array[i] > largest)
        {
            largest = array[i];
            largestIndex = i;
        }
    }

    // Output before swapping
    cout << "Before swapping: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    swap(array[smallestIndex], array[largestIndex]);

    // Output after swapping
    cout << "After swapping: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void uniqueVal(int numbers[], int siz)
{
    cout << "Unique values in the array: ";

    for (int i = 0; i < siz; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < siz; j++)
        {
            if (i != j && numbers[i] == numbers[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;
}


void findIntersection(int arr1[], int s1, int arr2[], int s2)
{
    cout << "Intersection of the two arrays: ";

    for (int i = 0; i < s1; i++)
    {
        bool isDuplicate = false;

        for (int k = 0; k < i; k++)
        {
            if (arr1[i] == arr1[k])
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            for (int j = 0; j < s2; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    cout << arr1[i] << " ";
                    break;
                }
            }
        }
    }

    cout << endl;
}
int main()
{
    //  sum and product of the array
    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;
    SumArray(arr, sz);
    // sawp the min and the amx values in the array
    int array[] = {3, 66, 7, 8, 22, 78};
    int size = 6;

    swapArray(array, size);

    // print the unqiue values in the array
    int numbers[] = {1, 2, 1, 3, 4, 4, 5, 6, 7, 7, 8};
    int siz = 11;
    uniqueVal(numbers, siz);

    /// find the intersection
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int s1 = 5;
    int s2 = 5;
    findIntersection(arr1, s1, arr2, s2);
    

    return 0;
}