#include <iostream>
#include <cstring>
using namespace std;
struct Student {
	int num;
	char prizvujche[25];
	char group[15];
	int schoolYear;
	int exp;
	int Ximia;
	int Fizica;
	int TKM;
};
int main(){
	const int max = 30;
	Student students[max];
	int n;
	cout << "Vvedit kilkist studentiv (max " << max << "): ";
	cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].num = i + 1;
        cout << "Prizvyshche: ";
        cin >> students[i].prizvujche;
        cout << "Group (MC-11): ";
        cin >> students[i].group;
        cout << "Rik shkoly: ";
        cin >> students[i].schoolYear;
        cout << "Stazh (1-yes, 0-no): ";
        cin >> students[i].exp;
        cout << "Borg Ximia (1-yes, 0-no): ";
        cin >> students[i].Ximia;
        cout << "Borg Fizica (1-yes, 0-no): ";
        cin >> students[i].Fizica;
        cout << "Borg TKM (1-yes, 0-no): ";
        cin >> students[i].TKM;
    }
    cout << "\nRezultat (MC-11 z 2 borgamy):\n";
    bool found = false;

    for (int i = 0; i < n; i++) {
        
     bool GroupMC = (strcmp(students[i].group, "MC-11") == 0)||(strcmp(students[i].group, "ля-11") == 0);
     if (GroupMC) {
         int sum = students[i].Ximia + students[i].Fizica + students[i].TKM;
         if (sum == 2) {
             cout << "- " << students[i].prizvujche << endl;
             found = true;
         }
     }
    }
    return 0;
}