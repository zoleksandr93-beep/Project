#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double arr[5] = { 0,2,-3.14159,1,-2 };
	double S = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > 0)
			S += arr[i];
	}
	cout << "S=" << S << endl;
	cout << "Tabylyvanna y=cos^2(x)+S:" << endl;
	for (int i = 0; i < 5; i++) {
		double x = arr[i];
		double y = pow(cos(x), 2) + S;
		cout << "x=" << x << "\t y=" << y << endl;
	}
	int max = 0;
	int min = 0;
	for (int i = 1; i < 5; i++) {
		if (arr[i] > arr[max])
			max = i;
		if (arr[i] < arr[min])
			min = i;
	}
	cout << "Naibilshyj element =" << arr[max] << endl;
	cout << "Naimenshyi element =" << arr[min] << endl;
	if (max < min)
		cout << "\n Naibilshyj element stoit blezhche do po4atku masyvu \n";

	else
		cout << "\n Naimenshe element stoit blyzhche do po4ayku masyvu \n";
	return 0;
}