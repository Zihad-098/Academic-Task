#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read number of test cases

    while (T--) {
        long long X;
        int Y;
        cin >> X >> Y;  // Read initial amount X and number of years Y

        for (int i = 0; i < Y; ++i) {
            // Each year, choose the better option: either add 1000 or double the amount
            if (X < 1000) {
                X += 1000;
            } else {
                X *= 2;
            }
        }

        cout << X << endl;  // Output the maximum amount for the current test case
    }

    return 0;
}
