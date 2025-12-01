#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a, b,y;
	float sum = 0;
	float x_posh, x_kin;//початкове і кінцеве значення
	float h;
	cout << "Vvedit x_posh=";
	cin >> x_posh;
	cout << "Vvedit x_kin=";
	cin >> x_kin;
	cout << "Vvedit a=";
	cin >> a;
	cout << "Vvedit b=";
	cin >> b;
	cout << "Vvedit h=";
	cin >> h;
	for (float x = x_posh; x <= x_kin; x += h) {

	 y = pow(1 + sqrt(a * x + b), 0.25) / (pow(sin(b * x), 2) + a);
		

		if (y > 1 && y < 3) {
			sum += y;
			cout << x << "\t\t" << y << "\t <-- Vhodut v sumy" << endl;
		}
		else {
			cout << x << "\t\t" << y<< endl;
		}
	}

	cout << "Rezultat = " << sum << endl;

	return 0;
}