#include <iostream>

double factoral(const int intager) {
    double fact = 1.0;
    for (int i = 1; i <= intager; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    long count = 1;
    double e_approx = 1;
    while (true) {
        //if (count >= 4294967294) { // Highest possible value that can be stored in long (commented out bc it is very slow to compute)
            //break;
        //}
        if (count >= 100000) { // Faster way to compute but it is not as accurate
            break;
        }
        e_approx += 1 / factoral(count);
        count++;
    }
    std::cout << e_approx << std::endl;
    return 0;
}
