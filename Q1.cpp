//---------------Fibonacci sequence--------------------------------
  // --------------------------------------
  // fn takes a no and returns the Fibonacci no at that position
  // -------------------------------------

#include <iostream>
using namespace std;

// fctn prototyping
int fibonacciHandler(int x);

int num, fib_result;
  // control vars dfn

  // Using recursive fn approach
int fibonacciHandler(int x){
    // checks 1st possible case for i/p is 0
  if(x == 0){
      fib_result = 0;
      return fib_result;
  }
      // checks 2nd possible case for i/p is 1
  else if(x == 1){
      fib_result = 1;
      return fib_result;
  }
      // checks for subsequent cases
  else{
      fib_result = fibonacciHandler(x-2) + fibonacciHandler(x-1);
      std::cout << "/nFibonacci sequence = ";
      // returns result sequence
      return fib_result;
  }
}

// Main program control
int main()
{
    //prompt user for  a no.
    cout << "\n\t  Enter a number: ";
    cin >> num;

    // iterates through the range of given no from 0
    for(int n = 0; n < num; n++)
    {
       // call the fn handler
       // pass in user i/p no and prints out the no in the sequence
        cout << fibonacciHandler(n) << " ";
    }
    return 0;
}
