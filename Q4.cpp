#include <iostream>
using namespace std;
#include <string>
#include <limits>

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    const int numMonths = 12;
    SalesRecord sales[numMonths];

   cout << "Enter sales data for 12 months:" << endl;
    for (int i = 0; i < numMonths; ++i) {
        cout << "Month " << i + 1 << " name: ";
        cin >> sales[i].month;
        cout << "Sales amount for " << sales[i].month << ": ";
      cin >> sales[i].amount;
    }


    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < numMonths; ++i) {
        if (sales[i].amount > sales[maxIndex].amount) {
            maxIndex = i;
        }
        if (sales[i].amount < sales[minIndex].amount) {
            minIndex = i;
        }
    }

    
    cout << "\n--- Sales Summary ---" << endl;
    cout << "Month with maximum sales: " << sales[maxIndex].month
              << " with an amount of " << sales[maxIndex].amount << endl;
    cout << "Month with minimum sales: " << sales[minIndex].month
              << " with an amount of " << sales[minIndex].amount << endl;

    return 0;
}
