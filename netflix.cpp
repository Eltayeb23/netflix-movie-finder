#include <iostream>
using namespace std;

int main() {

    char again = 'y';

    while (again == 'y' || again == 'Y') {

        cout << "==============================" << endl;
        cout << "   NETFLIX MOVIE FINDER" << endl;
        cout << "==============================" << endl;

        cout << "Choose a genre:" << endl;
        cout << "1. Action" << endl;
        cout << "2. Comedy" << endl;
        cout << "3. Horror" << endl;
        cout << "4. Romance" << endl;
        cout << "5. Sci-Fi" << endl;

        int choice;

        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Recommended Movie: Extraction" << endl;
                cout << "A fast-paced action movie with exciting fights and missions." << endl;
                break;

            case 2:
                cout << "Recommended Movie: The Wrong Missy" << endl;
                cout << "A comedy about an unexpected and funny trip." << endl;
                break;

            case 3:
                cout << "Recommended Movie: Fear Street" << endl;
                cout << "A horror story involving a mysterious curse." << endl;
                break;

            case 4:
                cout << "Recommended Movie: To All the Boys I've Loved Before" << endl;
                cout << "A romantic story about love, relationships and unexpected letters." << endl;
                break;

            case 5:
                cout << "Recommended Movie: The Adam Project" << endl;
                cout << "A science-fiction adventure involving time travel." << endl;
                break;

            default:
                cout << "Invalid choice. Please choose a number from 1 to 5." << endl;
        }

        cout << endl;
        cout << "Would you like another recommendation? (y/n): ";
        cin >> again;
        cout << endl;
    }

    cout << "Thank you for using Netflix Movie Finder!" << endl;

    return 0;
}