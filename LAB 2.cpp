#include <iostream>
#include <math.h>
using namespace std;
float x;
float y;
int main() {
	cout << "Vvedit x=";
	cin >> x;
	cout << "Vvedit y=";
	cin >> y;
	if ((x <= 0 && (x * x + y * y <= 1) || (x >= 0 && x <= 1 && y >= -1 && y <= 1)))
	cout << "Tochka nalezhyt oblasti";
	else
		cout << "Tochka ne nalezhyt zashtsykhovanii oblasti";
	return 0;
}