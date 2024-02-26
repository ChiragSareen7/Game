#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string option[] = {"Stone", "Paper", "Scissors"};

    while (true) {
        cout << "Enter your choice (Stone, Paper, Scissors) or 'q' to quit: ";
        string userChoice;
        cin >> userChoice;

        if (userChoice == "q") {
            cout << "Thanks for playing. Goodbye!";
            break;
        }

        int computer = rand() % 3;
        string computerChoice = option[computer];

        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == "Stone" && computerChoice == "Scissors") || (userChoice == "Paper" && computerChoice == "Stone") || (userChoice == "Scissors" && computerChoice == "Paper")) {
            cout << "You win, Computer chose " << computerChoice << endl;
        } else {
            cout << "Computer wins, It chose " << computerChoice << endl;
        }
    }

    return 0;
}
