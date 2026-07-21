#include <iostream>
using namespace std;

int calculateFactorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main(){
    return 0;
}
