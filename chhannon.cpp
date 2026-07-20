#include <iostream>
#include <string>
using namespace std;

int main() {
    int count;
    cout << "Enter number of students: ";
    cin >> count;

    for (int i = 1; i <= count; i++) {
        string name;
        float math, khmer, avg;

        cin.ignore();
        cout << "\nStudent " << i << " - Name: ";
        getline(cin, name);
        cout << "Math score: "; cin >> math;
        cout << "Khmer score: "; cin >> khmer;

        avg = (math + khmer) / 2;

        cout << "=> " << name << " | Average: " << avg 
             << " | Result: " << (avg >= 50 ? "Pass" : "Fail") << endl;
    }
    return 0;
}
