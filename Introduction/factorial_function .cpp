#include <iostream>
using namespace std;

int factorial(int n)
{
  int fact = 1;

  for (int i = 1; i <= n; i++)
  {
    fact = fact * i; // fact =* i
  }
  return fact;
}
int main()
{
  int n;
  cout << "Enter the number :";
  cin >> n;
  
  if (n <= 0)
  {
    cout << " factorial of the number is not available. ";
  }
  else{

  cout << "Factorial of " << " " << n << " is " << " " << factorial(n);
  }
  return 0;
}