#include<iostream>
using namespace std;

//  -----> minimum of two numbers

// int minOfTwo ( int a,int b){

//   if (a>b)
//   {
// return b;  }else{
//   return a;
// }
// }

// int main(){
//   cout<< minOfTwo(17,15);
//   return 0;
// }

//  ----> sum of N nummbers

// int printSum (int n){
//     int sum = 0 ;
//     for (int i = 1; i <=n; i++)
//     {
//         sum += i;
//     }
//         return sum;

// }
// int main()
// {
//     cout<< printSum(5)<<endl;
//     return 0;
// }

//   -----.> claculate N factorial

// int factN(int n)
// {
//    int fact = 1;
//    for (int i = 1; i <= n; i++)
//    {
//       fact *= i;
//    }
//    return fact;
// }

// int main()
// {
//    cout << factN(10) << endl;
//    return 0;
// }

//    -----> sum of digit in a number

// int digtSum()
// {
//    int n;
//    cin >> n;
//    cout << "sum of the digits is : ";
//    int finalSUm = 0;
//    while (n > 0)
//    {
//       int lastDigit = n % 10;
//       n = n / 10;
//       finalSUm += lastDigit;
//    }
//    return finalSUm;
// }

// int main()
// {

//    cout << "enter th number : " << digtSum() << endl;
//    return 0;
// }

int factN(int n)
{
   int fact = 1;
   for (int i = 0; i <= n; i++)
   {
      fact *= i;
   }
   return fact;
}

int binomialCal(int n, int r)
{
   int fact_n = factN(n);
   int fact_r = factN(r);
   int fact_nmr = factN(n - r);
   return fact_n / (fact_r * fact_nmr);
}

int main()
{
   int n = 8, r = 2;

   cout << binomialCal(n, r) << endl;
   return 0;
}