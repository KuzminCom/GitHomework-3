#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
    int N; // Начальное число
    int m; // Строки
    int k; // Колонки

    cin >> N >> m >> k;

    int mk = m * k;
    int twoDimArr[mk];

    for (int i = 0; i < mk; i++) {
        if (i == 0) {
            twoDimArr[i] = N;
        } 
        else {
            twoDimArr[i] = twoDimArr[i - 1] + 1;
        }
    }

    for (int i = 0; i < mk; i++) {
        if (i != 0 && (twoDimArr[i] == (k + N) || i % k == 0)) {
            cout << "\n" << twoDimArr[i] << " ";
        } else {
            cout << twoDimArr[i] << " ";
        }
    }

    cout << "\n";

    return 0;
}
