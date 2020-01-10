#include <iostream>
#include <cmath>
using namespace std ;

int sumSqrt(int N){
    double result = 0 ;
    int a = 1 ;
    while (a<=N){
        result = result + 1/sqrt(a) ;
        a++ ;
    }
     return result ;   
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
