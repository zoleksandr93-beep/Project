#include <iostream>
using namespace std;
int main() {
    const int max = 20;
    int a[max][max];
    int b[max * max];
    int n;
    cout << "Vvedit rozmir matrix n (max " << max << "): ";
    cin >> n;
    //Очищаємо матрицю 'a' (заповнюємо нулями)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }
    //Очищаємо та заповнюємо масив 'b' числами (1, 2, 3...)
    for (int i = 0; i < n * n; i++) {
        b[i] = i + 1;
    }
    //Алгоритм (Змійка знизу вгору по трикутнику)
    int k = 0;
    for (int i = n - 1; i >= 0; i--) {
        int dovzhina = n - i;
        // Визначаємо напрямок
        if ((n - 1 - i) % 2 == 0) {
         // Зліва - Направо
            for (int j = 0; j < dovzhina; j++) {
                a[i][j] = b[k];
                k++;
            }
        }
        else {
         // Справа - Наліво
            for (int j = dovzhina - 1; j >= 0; j--) {
                a[i][j] = b[k];
                k++;
            }
        }
    }
    // Виведення результату
    cout << "\nResultat:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

