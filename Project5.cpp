#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double S = 1.0;
	int i = 1;
    while (i <= 10) {
        
        S *= pow(-1, i) * (i * i + 5 * i + 6) / (i * i + 5 * i);
        cout << i << "\t\t" << S << endl;
        i++; // перехід до наступного члена
    }

    cout << "Dobytok 10 chleniv chuslovoi poslidovnosti =" << S << endl;

    return 0;
}
