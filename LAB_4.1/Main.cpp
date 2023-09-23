#include <iostream>
using namespace std;

int main() {
    int N = 10;
    double result = 0.0;

    // while цикл
    int i = N;
    while (i <= 16) {
        result += 1.0 / (2 * i * i + N * N);
        i++;
    }
    cout << "While: " << result << endl;

    // do-while цикл
    i = N;
    result = 0.0;
    do {
        result += 1.0 / (2 * i * i + N * N);
        i++;
    } while (i <= 16);
    cout << "Do-while: " << result << endl;

    // for цикл (++)
    result = 0.0;
    for (i = N; i <= 16; i++) {
        result += 1.0 / (2 * i * i + N * N);
    }
    cout << "For (++): " << result << endl;

    // for цикл (--)
    result = 0.0;
    for (i = 16; i >= N; i--) {
        result += 1.0 / (2 * i * i + N * N);
    }
    cout << "For (--): " << result << endl;

    return 0;
}
