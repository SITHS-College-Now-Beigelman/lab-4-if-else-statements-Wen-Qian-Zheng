/* Wen Qian ZHeng
Lab 4
October 1st, 2024*/

#include <iomanip>
#include <iostream> // necessity

using namespace std; // shorten our cout statements! make sure to have semicolon

int main() // ALL C++ programs require the function main
{ // opening bracket for the code

string fruit; // declares a string 'fruit' variable
double sugar; // declares a double 'sugar' variable
bool isprogramrunning;
char yesorno;
isprogramrunning = true;

while (isprogramrunning == true) // while the user still wants to run the program
{
    cout << "\nInput fruit name:\n> ";  // prompt for user to input the fruit name 
    cin >> fruit; // intakes user input and stores as variable fruit

    cout << "\nInput grams of sugars of one cup of fruit:\n> ";  // prompt for user to input the sugar name 
    cin >> sugar;  // intakes user input and stores as variable sugar


    if (sugar < 10) // if the sugar inputted is less than 10, 
        cout << fruit << " LOW SUGAR FRUIT\n"; // it OUTPUTS 'fruit' LOW SUGAR FRUIT
    
    else if (sugar >=10 and sugar <=14) // if the sugar inputted is in the range of and including 10 and 14, i
        cout << fruit << " MEDIUM SUGAR FRUIT\n"; // OUTPUTS 'fruit' MEDIUM SUGAR FRUIT
    
    else // if the sugar inputted is more than 14, 
        cout << fruit << " HIGH SUGAR FRUIT\n"; // it OUTPUTS 'fruit' HIGH SUGAR FRUIT

    cout << "\nDo you wish to re-run the program? Y or any other key to exit:\n> "; // prompts user if they want to redo the program
    cin >> yesorno;
        if (yesorno == 'Y')
            isprogramrunning = true; // does the user still want the program to run? if Y, then continue looping
        else
            isprogramrunning = false; // if they press anything else, crash program and quit :D
             // after program is finished running return 0 :D
}
return 0;
}
