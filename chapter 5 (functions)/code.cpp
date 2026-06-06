#include <iostream>
using namespace std;
//  ---->>      function

  void printHello(){
    cout<< "hello";
  }
int main()
{
    printHello();
    return 0;
}

// ---->  function parameters

// ---> sum of two numbers
int sum ( int a,int b){
 int s= a+b;
 return s;
}

int main(){
  cout<< sum(12,14);
  return 0;
}

