#include <iostream>
using namespace std;

class polynomial{
    int coeff;
    int exponent;
    polynomial *next;
    polynomial *prev;

    polynomial(int c, int e){
        coeff = c;
        exponent = e;
        next = NULL;
        prev = NULL;
    }

};

int main(){

}
