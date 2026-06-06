#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    for (int i = 5; i >= a; i--)
    {
        cout << i + 1 << " :";
        for (int j = 5; j >= i; j--)
        {
            cout << j + 1 << " ";
        }

        cout << endl;
    };

       char b = 'D';
        for (char i = 'A'; i <=b ; i++)
        {
            cout << i  << " :";
            for (char j = i; j >= 'A'; j--)
            {
                cout << j << " ";
            }

            cout << endl;
        };



      char c = 'D';
          for (char i = 'A';i <=c; i++)
          {
         cout << i << " :";
        //  spaces
        for (char j = 'A'; j < i ; j++)
        {
          cout<<" " ;   }
         // num
         for (int j = 0; j<=c-i; j++)
         {
    cout <<(i)   ;  }

        cout <<endl;
          }
   
    return 0;
}
