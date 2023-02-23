#include <iostream>
using namespace std;

int main ()
{ 
    int water;
    int chemical;
    int selection;
    int check;

    cout << "Water Solution Calculator\n\n";
    cout << "Main Menu\n\n";
    cout << "Option 1: Chemical" << endl;
    cout << "Option 2" << endl;
    cout << "Option 3" << endl;

    cout << "Select an option: ";
    cin >> selection;
    
    if (selection == 1) 
    {
        cout << "Option 1: Chemical\n";
        cout <<"Please enter the amount of water you wish to purify:\n ";
        cin >> water;

        if (water < 0)
        {
        cout << "How the FCK do u have NEGATIVE water HUH?????????????";
        }

        else
    {
        cout << "You entered " << water << " gallons of water. Is this correct?\n\n";
        cout << "Type 1 if this is CORRECT \n";
        cout << "Type 2 if this is INCORRECT \n ";
        cout << "Selection: ";
        cin >> check;

        if (check ==1) 
        {
        cout << "The amount of chemical you need is: " << water/0.69;
        }
        else 
        {
        cout << "Too bad UGLY BITCH";
        }
    }

    }
        
    else if (selection == 2) 
        cout << "you selected option 2";

    else if (selection == 3)
        cout << "you selected option 3";

    else 
        cout << "wtf did you do";

    return 0;
}