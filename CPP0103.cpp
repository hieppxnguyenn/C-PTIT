#include <iostream>

int main() {
    int N;
    std::cin >> N;

    double S = 0.0;
    for (int i = 1; i <= N; i++) {
        S += 1.0 / i;
    }
    printf("%.4f\n", S);
    return 0;
}

