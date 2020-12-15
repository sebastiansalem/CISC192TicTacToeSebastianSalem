// Tic Tac Toe Final Project for CISC 192 with Professor Garibay
// By: Sebastian Salem 
#include <iostream>
using namespace std;
#define TIE 0 // precursor directives
#define WIN 1 // precursor directives
#define CONTINUE 3 // precursor directives

char Tbox[10] = { '0','1','2','3','4','5','6','7','8','9' }; // Here we are setting a 10 variable char array for 'Tbox' (Tic-tac-toe boxes)

int winconditioncheck(int); //here we have the check for the win (or tie) condition, otherwise the only other option is for the code to continue 
//through the first loop and allow users to enter inputs until a win or tie is met. There is no "losing" option, players either win or tie.
void board(void);

int main()
{
    int user = 1; // set user to an int function
    int i; //set an i to an int to carry a numeric value to be checked for in my loops
    int choice; //choice follows a similar protocol, it's the choice made by the user in the board itself that is printed out in the last function

    char input;
    do //beginning of my Do/While loop for user input
    {

        board();

        if (user % 2) //This is a method of rotating between players by using the modulus function and decrementing/incrementing as seen later in code to alternate turns
            // Credit goes to an online user on stackoverflow that helped me out with this idea since I was struggling with this portion of the code
        {
            user = 1;
        }
        else {
            user = 2;
        }

        cout << "Player " << user << ", enter a number:  ";
        cin >> choice;


        if (user == 1)
        {
            input = 'X';
        }

        else
        {
            input = 'O';
        }
        //Here I begin my switch cases with if/else statements to basically accept that a user input assigned to the Tbox value is accepted
        // if a user inputs a previously selected box, it'll print out Invalid Move.
        // The cases are accounted for each box (1-9). 
        switch (choice)
        {
        case 1:
            if (choice == 1 && Tbox[1] == '1')
            {
                Tbox[1] = input;
            }
            else
            {
                cout << "Invalid move ";

                user--;
                cin.ignore();
                cin.get();
            }
            break;

        case 2:
            if (choice == 2 && Tbox[2] == '2')
            {
                Tbox[2] = input;
            }
            else
            {
                cout << "Invalid move ";

                user--;
                cin.ignore();
                cin.get();
            }
            break;

        case 3:
            if (choice == 3 && Tbox[3] == '3')
            {
                Tbox[3] = input;
            }
            else
            {
                cout << "Invalid move ";

                user--;
                cin.ignore();
                cin.get();
            }
            break;

        case 4:
            if (choice == 4 && Tbox[4] == '4')
            {
                Tbox[4] = input;
            }
            else
            {
                cout << "Invalid move ";

                user--;
                cin.ignore();
                cin.get();
            }
            break;

        case 5:
            if (choice == 5 && Tbox[5] == '5')
            {
                Tbox[5] = input;
            }
            else
            {
                cout << "Invalid move ";

                user--;
                cin.ignore();
                cin.get();
            }
            break;

        case 6:
            if (choice == 6 && Tbox[6] == '6')
            {
                Tbox[6] = input;
            }
            else
            {
                cout << "Invalid move ";

                user--;
                cin.ignore();
                cin.get();
            }
            break;

        case 7:
            if (choice == 7 && Tbox[7] == '7')
            {
                Tbox[7] = input;
            }
            else
            {
                cout << "Invalid move ";

                user--;
                cin.ignore();
                cin.get();
            }
            break;

        case 8:
            if (choice == 8 && Tbox[8] == '8')
            {
                Tbox[8] = input;
            }
            else
            {
                cout << "Invalid move ";

                user--;
                cin.ignore();
                cin.get();
            }
            break;

        case 9:
            if (choice == 9 && Tbox[9] == '9')
            {
                Tbox[9] = input;
            }
            else
            {
                cout << "Invalid move ";

                user--;
                cin.ignore();
                cin.get();
            }
            break;
        }

        i = winconditioncheck(0); // in the do while loop, winconditioncheck when assigned a value of 0 constantly runs through the do loop. When a 1 or 2 is met, it jumps out of the loop to be checked

        user++;

    } while (i == CONTINUE);
    board();
    if (i == WIN)

        cout << "\a\tUser " << --user << " wins! "; // \a is an audible alert sound, \t is the tab to make the text more distinct when it shows.
    else
        cout << "\a\tGame is tied!";

    cin.ignore();
    cin.get();
    return 0;
}
//The function to return the game results - that being either a win, tie, or for the game to continue and the code to keep accepting user inputs
int winconditioncheck(int start)
{
    int result;

    switch (start)
    {
    case 0:
        if (Tbox[1] == Tbox[2] && Tbox[2] == Tbox[3])
        {
            result = WIN;
            break;
        }


    case 1:
        if (Tbox[1] == Tbox[4] && Tbox[4] == Tbox[7])
        {
            result = WIN;
            break;
        }

    case 2:
        if (Tbox[1] == Tbox[5] && Tbox[5] == Tbox[9])
        {
            result = WIN;
            break;
        }


    case 3:
        if (Tbox[2] == Tbox[5] && Tbox[5] == Tbox[8])
        {
            result = WIN;
            break;
        }

    case 4:
        if (Tbox[3] == Tbox[6] && Tbox[6] == Tbox[9])
        {
            result = WIN;
            break;
        }

    case 5:
        if (Tbox[3] == Tbox[5] && Tbox[5] == Tbox[7])
        {
            result = WIN;
            break;
        }

    case 6:
        if (Tbox[4] == Tbox[5] && Tbox[5] == Tbox[6])
        {
            result = WIN;
            break;
        }

    case 7:
        if (Tbox[7] == Tbox[8] && Tbox[8] == Tbox[9])
        {
            result = WIN;
            break;
        }

    case 8:
        if (Tbox[1] != '1' && Tbox[2] != '2' && Tbox[3] != '3'
            && Tbox[4] != '4' && Tbox[5] != '5' && Tbox[6] != '6'
            && Tbox[7] != '7' && Tbox[8] != '8' && Tbox[9] != '9')

        {
            result = TIE;
            break;
        }

    default:

        result = CONTINUE;
        break;
    }
    return result;

}
// Function for the Tic-Tac-Toe board with the player's selections
void board()
{
    system("cls"); //Causes board to be able to be re-written over as opposed to constantly creating a new one with new results in the output console
    // This board was NOT of my own design, I only tweaked the board a bit to re-structure text and some of the editing
    // https://www.stechies.com/tic-tac-toe-cpp/ is the website where I found this code section.
    // ALL other code is essentially mine, or was inspired from the textbook/labs/from stackoverflow threads.
    cout << "Tic Tac Toe Game" << endl << endl;

    cout << "User 1 (X)  -  User 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << Tbox[1] << "  |  " << Tbox[2] << "  |  " << Tbox[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << Tbox[4] << "  |  " << Tbox[5] << "  |  " << Tbox[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << Tbox[7] << "  |  " << Tbox[8] << "  |  " << Tbox[9] << endl;

    cout << "     |     |     " << endl << endl;
}