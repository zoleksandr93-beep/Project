#include <iostream>   
#include <math.h>     
using namespace std;
int main()
{
    double d, z, a;             
    cout << "Vvedit d:";        
    cin >> d;
    cout << "Vvedit z:";
    cin >> z;
    cout << "Vvedit a:";
    cin >> a;
    double b = d * (atan(z) + exp(-(d + 3)));
    cout << "Vdpovid: b=" << b << endl;  
    return 0;
}