// Loads header file for basic input & output operations
#include <iostream>
#include <cmath>
#include <ctime>

// type def convention ends in `_t`.
// typedef std::string text_t;
using text_t = std::string; // more suitable than typedef for templates
using std::cin;
using std::cout;

// Git commands
// compile  | g++ -o program_name source_file.cpp
// invoke   | ./program_name.exe

int main()
{
    // Variables | Data type declarations & assignments
    int year = 2024;
    double ver = 1.15;
    text_t appName = "white-raspberry";
    text_t subhead = "user-defined functions";

    // Returns a random number between 1-5 with arithemetic
    int num;
    int guess;
    int tries;

    // pseudo-random | uses the current time to generate random numbers
    srand(time(NULL));
    num = (rand() % 100) + 1;

    // Terminal greeting
    cout << appName << " v" << ver << std::endl;
    cout << "\u00A9 " << year << " Edwin Escobar\n\n";
    cout << "********** " << subhead << " **********\n\n";

    // Terminal prompts


    // Terminal fin
    cout << "\n\n***********";
    for (int i = 0; i < subhead.length(); i++)
    {
        cout << "*";
    }
    cout << "***********\n\n";

    return 0;
}