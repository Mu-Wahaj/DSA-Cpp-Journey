#include<iostream>
using namespace std;

int main()
{
    //   butterefly pattern

    //   top
    int n;
    cout << "enter size of butterfly : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // cout << i << " :";

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    //  bottom

    for (int i = 0; i < n; i++)
    {
        // cout << i << " :";

        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}