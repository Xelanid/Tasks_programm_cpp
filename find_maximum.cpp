#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n; //ввели количество символов последовательности
    cin >> s; //введем первый элемент
    
    int max = s;
    
    for (int i = 0; i < n - 1; ++i) {
        cin >> s;
        if (s >= max) {
            cout << "old maximum: " << max << " new maximum: " << s << "\n";
            max = s;
        }
        else {
            cout << "текущий элемент " << s << " меньше текущего максимума " << max << "\n";
        }
    }
    
    cout << "maximum: " << max;
}