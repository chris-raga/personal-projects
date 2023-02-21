#include <iostream>
#include <limits>
using namespace std;

int main() {
    int choice;
    int chemical;
    int water;
    do {
        cout << "Menu\n";
        cout << "1. Chlorine\n";
        cout << "2. Option 2\n";
        cout << "3. Option 3\n";
        cout << "4. Option 4\n";
        cout << "5. Option 5\n";
        cout << "6. Exit\n";

        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Chlorine" << endl;
                cout << "Enter amount of chlorine in mL.\n";
                try {
                    cin >> chemical;
                    if (cin.fail()) {
                        throw runtime_error("Invalid input: please enter a number.");
                    }
                } catch (const runtime_error& e) {
                    cout << e.what() << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Press 1 to return to main menu." << endl;
                    cin.get();
                    break;
                }
                cout << "Enter amount of water to be treated in gallons.\n";
                try {
                    cin >> water;
                    if (cin.fail()) {
                        throw runtime_error("Invalid input: please enter a number.");
                    }
                } catch (const runtime_error& e) {
                    cout << e.what() << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Press 1 to return to main menu." << endl;
                    cin.get();
                    break;
                }
                cout << "You indicated " << chemical << " mL of chlorine and " << water << " gallons of water." << endl;
                cout << "Is that correct?" << endl;
                cout << "Press 1 to return to main menu." << endl;
                cin.ignore();
                cin.get();
                break;

            case 2:
                cout << "You selected Option 2" << endl;
                // Perform action for Option 2
                cout << "Press 1 to return to main menu." << endl;
                cin.ignore();
                cin.get();
                break;

            case 3:
                cout << "You selected Option 3" << endl;
                // Perform action for Option 3
                cout << "Press 1 to return to main menu." << endl;
                cin.ignore();
                cin.get();
                break;

            case 4:
                cout << "You selected Option 4" << endl;
                // Perform action for Option 4
                cout << "Press 1 to return to main menu." << endl;
                cin.ignore();
                cin.get();
                break;

            case 5:
                cout << "Exiting program..." << endl;
                break;
                
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}