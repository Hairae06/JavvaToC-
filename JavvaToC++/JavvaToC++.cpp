#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numberOfSides;
    cout << "Enter # of sides: ";
    cin >> numberOfSides;
    
    srand(time(0)); // Seed random number generator
    int randomNumber = rand() % numberOfSides + 1; // Random number from 1 to # of sides
    cout << "\nNumber Rolled: " << randomNumber;
    
    string rollAgain;
    cout << "\nRoll again? (Y/N)\n";
    cin >> rollAgain;
    if (rollAgain == "Y") 
    {
        int randomNumber = rand() % numberOfSides + 1; // Random number from 1 to # of sides
        cout << "Number Rolled: " << randomNumber;
    }
    else if (rollAgain == "N")
    {
        cout << "\nGood Bye" << endl;
    }

    return 0;

}