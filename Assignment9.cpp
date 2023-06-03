//Code:
#include <iostream>
#include <queue>
using namespace std;

struct Patient {
  string name;
  int priority;
};
bool operator<(const Patient& a, const Patient& b) { return a.priority < b.priority; }

int main() {
  priority_queue<Patient> q;
  int choice;
  do {
    cout << "1. Add Patient" << endl;
    cout << "2. Serve Patient" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
      case 1: {
        Patient p;
        cout << "\nEnter patient name: ";
        cin >> p.name;
        cout << "Enter patient priority (1 - Serious, 2 - Non-serious, 3 - General Checkup): ";
        cin >> p.priority;
        q.push(p);
        cout << "Patient added successfully." << endl;
        break;
      }
      case 2: {
        if (q.empty()) {
          cout << "\nNo patients in the queue." << endl;
        } else {
          cout << "\nServing patient: " << q.top().name << endl;
          q.pop();
        }
        break;
      }
      case 3: {
        cout << "\nExiting..." << endl;
        break;
      }
      default: {
        cout << "\nInvalid choice. Please try again." << endl;
        break;
      }
    }
  } while (choice != 3);
  return 0;
}
/*
Output:
1. Add Patient
2. Serve Patient
3. Exit
Enter your choice: 1

Enter patient name: Mahadev
Enter patient priority (1 - Serious, 2 - Non-serious, 3 - General Checkup): 3
Patient added successfully.

1. Add Patient
2. Serve Patient
3. Exit
Enter your choice: 2

Serving patient: Mahadev

1. Add Patient
2. Serve Patient
3. Exit
Enter your choice: 1

Enter patient name: Chavan
Enter patient priority (1 - Serious, 2 - Non-serious, 3 - General Checkup): 2
Patient added successfully.

1. Add Patient
2. Serve Patient
3. Exit
Enter your choice: 1

Enter patient name: Mahadev Chavan
Enter patient priority (1 - Serious, 2 - Non-serious, 3 - General Checkup): 1
Patient added successfully.

1. Add Patient
2. Serve Patient
3. Exit
Enter your choice: 2

Serving patient: Mahadev Chavan

1. Add Patient
2. Serve Patient
3. Exit
Enter your choice: 2

Serving patient: Chavan

1. Add Patient
2. Serve Patient
3. Exit
Enter your choice: 2

No patients in the queue.

1. Add Patient
2. Serve Patient
3. Exit
Enter your choice: 3

Exitingg...
*/