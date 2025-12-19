#include <iostream>
using namespace std;
int main() {
	char s[50];
	char w[10];
	cin.getline(s, 50);
	int j = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		w[j] = s[i];
		j++;
		w[j] = '\0';
		if (s[i] == ':')
			break;
	}
	cout << w << endl;
	return 0;
}