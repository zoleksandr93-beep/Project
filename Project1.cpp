#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double b, d, z;
	cout << "Vvid d=";
	cin >> d;
	cout << "Vvid z=";
	cin >> z;
   b = d * atan(z) + exp(-(d+3));
  cout << "b="<<b<<endl;
  
  return 0;


}
