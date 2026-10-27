#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> source;
    queue<int> result;

    for (int i = 1; i <= 200; i++) {
        source.push(i);
    }

    while (!source.empty()) {
        int x = source.front();
        source.pop();

        if (x % 3 == 0 && x % 5 != 0) {
            result.push(x);
        }
    }

    cout << "Числа, які діляться на 3, але не діляться на 5:" << endl;
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;

    return 0;
}