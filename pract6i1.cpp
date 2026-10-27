#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> numbers;
    
    // Заповнюємо чергу з 20 цілих чисел (наприклад, за допомогою масиву)
    int arr[] = {12, 45, 7, 45, 23, 89, 45, 12, 89, 3, 
                 55, 89, 14, 67, 89, 22, 11, 33, 44, 50};
    for (int i = 0; i < 20; i++) {
        numbers.push(arr[i]);
    }

    queue<int> temp = numbers;
    int maxVal = temp.front();
    while (!temp.empty()) {
        if (temp.front() > maxVal) {
            maxVal = temp.front();
        }
        temp.pop();
    }

    int countMax = 0;
    while (!numbers.empty()) {
        if (numbers.front() == maxVal) {
            countMax++;
        }
        numbers.pop();
    }

    cout << "Максимальне значення: " << maxVal << endl;
    cout << "Кількість елементів, що дорівнюють максимуму: " << countMax << endl;

    return 0;
}