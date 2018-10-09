#include <iostream>
using namespace std;

void fact() {



    for (short i = 0; i < 200; i++) {
        //compute factorial of i
        double fact = 1;
        for (long j = 1; j <= i; j++) {

            fact *= j;
        }
        cout << fact << "\n" << i << "\n\n";
    }
}

void qSix(){
    float num = 0;
    for(float n = 1.0; n < 100000000; n += 1) {
        num += (1.0/n);
        cout << num-1 << "\n\n";
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;


    for (double i = 3.4; i < 4.4; i += 0.2)
    {
        cout << "i = " << i << endl;
    }

    //qSix();



    //fact();
/*
    long n = 0, i = 1;

    for (short iter = 0; iter < 80000; iter++) {
        cout << i << "\n";
        i += n++;
        std::cout << i << "\n" << n << "\n\n";
    }

*/
    return 0;
}




