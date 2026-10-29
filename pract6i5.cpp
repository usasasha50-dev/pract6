#include <iostream>
#include <queue>

using namespace std;

struct Patient {
    int ticketNumber;
    int durationMinutes;
};

int main() {
    queue<Patient> patients;

    patients.push({1, 15});
    patients.push({2, 20});
    patients.push({3, 10});
    patients.push({4, 25});
    patients.push({5, 30});
    patients.push({6, 12});

    int totalTime = 0;
    int processedCount = 0;

    cout << "Опрацювання перших 4 пацієнтів:" << endl;

    while (!patients.empty() && processedCount < 4) {
        Patient p = patients.front();
        patients.pop();

        cout << "Пацієнт з талоном №" << p.ticketNumber 
             << " пройшов прийом (тривалість: " << p.durationMinutes << " хв.)" << endl;
             
        totalTime += p.durationMinutes;
        processedCount++;
    }

    cout << "\nСумарний час прийому перших 4 пацієнтів: " << totalTime << " хвилин." << endl;

    return 0;
}