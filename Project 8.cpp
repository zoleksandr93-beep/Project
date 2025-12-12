#include <iostream>
using namespace std;

int main() {
	const int SIZE1 = 14;
	const int SIZE2 = 9;
	const int m = SIZE1;
	const int n = SIZE2;
	int a[m] = { 12,5,7,1,9,3,8,11,4,2,6,15,13,10 };
	int b[n] = { 20,14,18,16,19,17,21,23,22 };
	int c[m + n];
	int i, j;
	cout << "\n Zadanyu masuv a:\n ";
	for (i = 0; i < m; i++)
		cout << " " << a[i];
	cout << "\n Zadanyu masuv b:\n ";
	for (i = 0; i < n; i++)
		cout << " " << b[i];
	//Сортування масиву методом вибору
	for (i = 0; i < m - 1; i++) {
		int min = i;
		for (j = i + 1; j < m; j++) {
			if (a[j] < a[min])
				min = j;
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	//Сортування масиву методом обміну
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                int tеmp = b[j];      
                b[j] = b[j + 1];     
                b[j + 1] = tеmp;
            }
        }
    }

    //Злиття масивів a і b у масив C 
    int k = 0;
    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    // Додаємо залишки
    while (i < m) c[k++] = a[i++];
    while (j < n) c[k++] = b[j++];

    //Вивід результатів
    cout << "\nMacuv a picla vporadkyvanna: ";
    for (i = 0; i < m; i++) cout << a[i] << " ";
    cout << endl;

    cout << "Macuv b picla vporadkyvanna: ";
    for (i = 0; i < n; i++) cout << b[i] << " ";
    cout << endl;

    cout << "\n Zlutyu macuv c: ";
    for (i = 0; i < m + n; i++) cout << c[i] << " ";
    cout << endl;
    return 0;
}

