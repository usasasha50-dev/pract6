#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Order {
    int orderNumber;
    int itemCount;
};

int main() {
    queue<Order> orders;

    orders.push({101, 3});
    orders.push({102, 8});
    orders.push({103, 5});
    orders.push({104, 12});
    orders.push({105, 6});

    cout << "Замовлення, у яких більше ніж 5 товарних позицій:" << endl;
    
    while (!orders.empty()) {
        Order ord = orders.front();
        orders.pop();

        if (ord.itemCount > 5) {
            cout << "Замовлення №" << ord.orderNumber 
                 << " — товарних позицій: " << ord.itemCount << endl;
        }
    }

    return 0;
}