#include <iostream>
using namespace std;
int main() {
	int k;
	double x;
	cout << "Vvedit natural k: ";
	cin >> k;

	cout << "Vvedit disne x: ";
	cin >> x;
    double dobytok = 1.0;
    double fact = 1.0;   
    int i = 1;

    while (i <= k) {

        fact *= i;           
        dobytok *= x / fact;     

        i++;
    }

    cout << "Rezultat: " << dobytok << endl;

    return 0;
}
