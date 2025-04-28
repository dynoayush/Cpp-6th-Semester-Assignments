#include <iostream>
using namespace std;

class Distance {
private:
    int km, m, cm;

public:
    // Input distance
    void input(int k, int me, int c) {
        km = k;
        m = me;
        cm = c;
        convert(); // Normalize the values
    }

    // Convert cm & m into proper format
    void convert() {
        m += cm / 100;
        cm = cm % 100;

        km += m / 1000;
        m = m % 1000;
    }

    // Display the distance
    void display() {
        cout << km << " km " << m << " m " << cm << " cm" << endl;
    }

    // Add two distances
    Distance add(Distance d2) {
        Distance result;
        result.km = km + d2.km;
        result.m = m + d2.m;
        result.cm = cm + d2.cm;
        result.convert();
        return result;
    }
};

int main() {
    int n;
    cout << "How many distances? ";
    cin >> n;

    Distance d[10]; // max 10 distances

    // Input all distances
    for (int i = 0; i < n; i++) {
        int k, m, c;
        cout << "Enter distance " << i << " (km m cm): ";
        cin >> k >> m >> c;
        d[i].input(k, m, c);
    }

    // Show all distances
    cout << "\nYou entered:\n";
    for (int i = 0; i < n; i++) {
        cout << "Distance " << i << ": ";
        d[i].display();
    }

    // Choose 2 distances to add
    int a, b;
    cout << "\nEnter 2 indexes to add (0 to " << n-1 << "): ";
    cin >> a >> b;

    if (a >= 0 && a < n && b >= 0 && b < n) {
        Distance result = d[a].add(d[b]);
        cout << "Result of addition: ";
        result.display();
    } else {
        cout << "Invalid indexes!" << endl;
    }

    return 0;
}
