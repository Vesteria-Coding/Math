// Gregory-Leibniz series
#include <iostream>

bool flip(bool input) {
    if (input) {
        return false;
    } else {
        return true;
    }
}

int main() {
    long count = 1;
    bool is_sub = false;
    double pi_approx = 0;
    while (true) {
        if (count >= 4294967294) { // Highest possible value that can be stored in long
            break;
        } else if (is_sub) {
            is_sub = flip(is_sub);
            pi_approx = pi_approx - 4.0 / count;
        } else {
            is_sub = flip(is_sub);
            pi_approx = pi_approx + 4.0 / count;
        }
        count += 2;
    }
    std::cout << pi_approx << std::endl;
    return 0;
}
