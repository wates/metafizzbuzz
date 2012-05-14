#include <stdio.h>
template<int N=1,bool a=0==N%3,bool b=0==N%5>struct FizzBuzz{static void p(){printf("%03d\n",N);FizzBuzz<N+1>::p();}};
template<int N>struct FizzBuzz<N,true,false>{static void p(){printf("%03d Fizz\n",N);FizzBuzz<N+1>::p();}};
template<int N>struct FizzBuzz<N,false,true>{static void p(){printf("%03d Buzz\n",N);FizzBuzz<N+1>::p();}};
template<int N>struct FizzBuzz<N,true,true>{static void p(){printf("%03d FizzBuzz\n",N);FizzBuzz<N+1>::p();}};
template<>struct FizzBuzz<101,false,false>{static void p(){}};

int main(){
    FizzBuzz<>::p();
}
