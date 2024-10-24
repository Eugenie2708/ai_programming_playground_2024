#include <iostream>
#include <math.h>

int main(){
    double result = 0.0;
    double precRes = 0.0;
    double sum = 0;
    double a = 0.1;
    double b = 1.0 ;
    double k = 10.0;
    const double eps = 0.0001;
    double funcResult;
    double step = (b - a) / k;
    for(double x = a; x <= b; x += step){
        std::cout << "\nx = " << x << "\n";
        funcResult += (exp(x) - exp(-x)) / 2;
        for(int n = 0; n < 40; n++){
            result += pow(x, n*2 + 1)/tgamma(2 *n + 1 + 1);
        }
        int start = 0;
        for(int n = start; !(precRes > funcResult ? precRes - funcResult < eps : funcResult - precRes < eps); n++){
            precRes += pow(x, n*2 + 1)/tgamma(2 * n + 1 + 1);
        }
        std::cout<<"Actual result: " << funcResult << "\nAproximate result: " << result << "\nResult with precision of " << eps << " : " << precRes << std::endl;
    }
    return 0;
}