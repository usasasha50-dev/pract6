#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<char> letters;
    string text = "a * (b + c) - (d / (e + f))";

    for (int i = 0; i < text.length(); i++) {
        letters.push(text[i]);
    }

    int openBrackets = 0;
    int closeBrackets = 0;

    while (!letters.empty()) {
        char ch = letters.front();
        letters.pop();

        if (ch == '(') {
            openBrackets++;
        } else if (ch == ')') {
            closeBrackets++;
        }
    }

    cout << "Рядок: " << text << endl;
    cout << "Кількість '(' : " << openBrackets << endl;
    cout << "Кількість ')' : " << closeBrackets << endl;

    if (openBrackets == closeBrackets) {
        cout << "Результат: Рядок містить однакову кількість відкривальних і закривальних дужок." << endl;
    } else {
        cout << "Результат: Рядок НЕ містить однакову кількість відкривальних і закривальних дужок." << endl;
    }

    return 0;
}