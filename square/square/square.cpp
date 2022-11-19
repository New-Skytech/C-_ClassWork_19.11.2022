#include <iostream>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4 , a, b, c;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (x1 == x2) {
        x4 = x3;
    }
    if (x2 == x3) {
        x4 = x1;
    }
    if (x3 == x1) {
        x4 = x2;
    }
    if (y1 == y2) {
        y4 = y3;
    }
    if (y2 == y3) {
        y4 = y1;
    }
    if (y3 == y1) {
        y4 = y2;
    }

    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    if (a == b and c == sqrt(pow(a, 2) + pow(b, 2))) {
        cout << "this is square, forth point is " << x4 << " " << y4;
    }
    if (a == c and b == sqrt(pow(a, 2) + pow(c, 2))) {
        cout << "this is square, forth point is " << x4 << " " << y4;
    }
    if (b == c and a == sqrt(pow(b, 2) + pow(c, 2))) {
        cout << "this is square, forth point is " << x4 << " " << y4;
    }

}
