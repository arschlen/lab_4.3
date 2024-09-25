#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, Xp, Xk, dX, F, x;

    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    cout << "Xp: "; cin >> Xp;
    cout << "Xk: "; cin >> Xk;
    cout << "dX: "; cin >> dX;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(10) << "F(x)" << " |" << endl;
    cout << "---------------------------" << endl;

    for (x = Xp; x <= Xk; x += dX) {
        if (x + 10 < 0 && b != 0) {
            F = a * x * x - c * x + b;
        }
        else if (x + 10 > 0 && b == 0) {
            F = (x - a)/(x-c);
        }
        else {
            F = -x / (a - c);
        }

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(3) << F << " |" << endl;
    }

    cout << "---------------------------" << endl;

    return 0;
}
