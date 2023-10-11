#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, S;
    double n, i, k;
    P = 1;
    k = 1;
    while (k <= 20) {
        S = 1;
        n = 1;
        while (n <= 25 - k) {
            S *= (k - n) / (k + n) + 1;
            n++;
        }
        P *= S;
        k++;
    }
    cout << P << endl;

    P = 1;
    k = 1;
    do {
        S = 1;
        n = 1;
        do {
            S *= (k - n) / (k + n) + 1;
            n++;
        } while (n <= 25 - k);
        P *= S;
        k++;
    } while (k <= 20);
    cout << P << endl;

    P = 1;
    for (k = 1; k <= 20; k++) {
        S = 1;
        for (n = 1; n <= 25 - k; n++) {
            S *= (k - n) / (k + n) + 1;
        }
        P *= S;
    }
    cout << P << endl;

    P = 1;
    for (k = 20; k >= 1; k--) {
        S = 1;
        n = 25 - k;
        while (n >= 1) {
            S *= (k - n) / (k + n) + 1;
            n--;
        }
        P *= S;
    }
    cout << P << endl;

    return 0;
}
