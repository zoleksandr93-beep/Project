#include<iostream>
#include <math.h>
using namespace std;
int main() {
	double x, z;
    cout << "Vvedit  x: ";
    cin >> x;
    if (x <= 0) {
        z = x + 3;
    }
    else if (x > 0 && x < 1.5) {
        z = x * sin(3 * x);
    }
    else if (x >= 1.5 && x <= 2.5) {
        z = pow(x, 2) - 1;
    }
    else {
        z = x - 5;
    }
    cout << "Rezyltat: z = " << z << endl;
    return 0;
}

