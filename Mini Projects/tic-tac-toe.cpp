#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

// Function prototypes
void setColor(int color);
void playSound(int type);
void displayTitle();
void displayBoard(char board[][3]);
void clearScreen();
char checkWin(char board[][3], int size);

int main() {
    char playAgain;

    do {
        clearScreen();

        // Game entry sound
        playSound(0); // Welcome sound

        displayTitle();

        // Show instructions
        setColor(11);
        cout << "\n    HOW TO PLAY  (- ^~^)-\n";
        cout << "    =====================\n\n";
        setColor(15);
        cout << "    1. Use numbers 1-9 to select position\n";
        cout << "    2. X goes first, then O\n";
        cout << "    3. Get 3 in a row to win!\n\n";

        cout << "    Board Positions:\n";
        cout << "    +---+---+---+\n";
        cout << "    | 1 | 2 | 3 |\n";
        cout << "    +---+---+---+\n";
        cout << "    | 4 | 5 | 6 |\n";
        cout << "    +---+---+---+\n";
        cout << "    | 7 | 8 | 9 |\n";
        cout << "    +---+---+---+\n\n";

        cout << "    Press Enter to start...";
        cin.ignore();
        cin.get();

        // Game start sound
        playSound(1);

        int loopCounter = 1;
        char winner = 'N';
        char board[3][3] = {
            {'1','2','3'},
            {'4','5','6'},
            {'7','8','9'}
        };

        // Display initial board
        clearScreen();
        displayTitle();
        setColor(11);
        cout << "\n    GAME STARTED!\n";
        cout << "    =============\n\n";
        displayBoard(board);

        // Game loop
        while (loopCounter <= 9 && winner == 'N') {
            char player = (loopCounter % 2 == 1) ? 'X' : 'O';
            int playerColor = (player == 'X') ? 10 : 12;

            setColor(playerColor);
            cout << "\n    Player " << player << "'s Turn\n";
            cout << "    ------------------\n";

            bool validMove = false;
            char choice;

            // Get valid move
            while (!validMove) {
                setColor(15);
                cout << "    Enter position (1-9): ";
                cin >> choice;

                // Validate input
                if (choice < '1' || choice > '9') {
                    setColor(12);
                    cout << "    (~ x_x)~  Invalid! Enter 1-9 only.\n";
                    playSound(4); // Error sound
                    continue;
                }

                // Check if position is available
                bool found = false;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (board[i][j] == choice && board[i][j] != 'X' && board[i][j] != 'O') {
                            board[i][j] = player;
                            found = true;
                            validMove = true;
                            playSound(2); // Move placed sound
                            break;
                        }
                    }
                    if (found) break;
                }

                if (!validMove) {
                    setColor(14);
                    cout << "    Position " << choice << " already taken!\n";
                    playSound(4); // Error sound
                }
            }

            // Display updated board
            clearScreen();
            displayTitle();
            setColor(11);
            cout << "\n    Move #" << loopCounter << "\n";
            cout << "    ============\n\n";
            displayBoard(board);

            // Check for winner
            if (loopCounter >= 5) {
                winner = checkWin(board, 3);
                if (winner != 'N') {
                    playSound(3); // Win sound
                    break;
                }
            }

            loopCounter++;
        }

        // Game over - display result
        clearScreen();
        displayTitle();

        setColor(11);
        cout << "\n    GAME OVER!\n";
        cout << "    ===========\n\n";

        if (winner == 'X') {
            setColor(10);
            cout << "     ==========================  \n";
            cout << "     \\(*0*)/  PLAYER X WINS!\n";
            cout << "     ========================== \n\n";
        }
        else if (winner == 'O') {
            setColor(12);
            cout << "      =========================\n";
            cout << "      \\(^o^)/  PLAYER O WINS!\n";
            cout << "      =========================\n\n";
        }
        else {
            setColor(14);
            cout << "    =======================\n";
            cout << "     (/ 0o0)/  IT'S A DRAW!\n";
            cout << "    =======================\n\n";
            playSound(5); // Draw sound
        }

        displayBoard(board);

        // Ask to play again
        setColor(14);
        cout << "\n    ";
        for (int i = 0; i < 30; i++) cout << "=";
        cout << "\n    <(^,_,^)-?  Play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    // Exit message
    clearScreen();
    setColor(10);
    cout << "\n    =============================\n";
    cout << "    Thanks for playing!  \\(^_^)/\n";
    cout << "    =============================\n\n";
    setColor(7);

    playSound(6); // Exit sound

    cout << "    Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}

// Function to set console text color
void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// Function to play different sounds
void playSound(int type) {
    switch (type) {
    case 0: // Welcome/Title sound
        Beep(523, 200); 
        Beep(659, 200); 
        Beep(784, 300); 
        break;

    case 1: // Game start sound
        Beep(784, 150); 
        Beep(880, 150); 
        Beep(988, 300); 
        break;

    case 2: // Move placed sound
        Beep(659, 100); 
        Beep(784, 100); 
        break;

    case 3: // Win sound 
        Beep(988, 200); 
        Beep(880, 150); 
        Beep(988, 150); 
        Beep(1047, 300); 
        break;

    case 4: // Error sound
        Beep(200, 300);
        Beep(150, 300);
        break;

    case 5: // Draw sound
        Beep(392, 300); 
        Beep(349, 300); 
        Beep(330, 500); 
        break;

    case 6: // Exit sound
        Beep(784, 200); 
        Beep(659, 200); 
        Beep(523, 400); 
        break;
    }
}

// Function to display game title
void displayTitle() {
    setColor(13);
    cout << "\n    ==========================\n";
    cout << "       TIC TAC TOE  \\(^,_,^)/\n";
    cout << "    ==========================\n";

    setColor(14);
    cout << "    Player X: ";
    setColor(10);
    cout << "X";
    setColor(14);
    cout << "  |  Player O: ";
    setColor(12);
    cout << "O\n";
    setColor(7);
}

// Function to display the board
void displayBoard(char board[][3]) {
    cout << "    +---+---+---+\n";
    for (int i = 0; i < 3; i++) {
        cout << "    | ";
        for (int j = 0; j < 3; j++) {
            // Color code the X and O
            if (board[i][j] == 'X') {
                setColor(10);
                cout << board[i][j];
                setColor(11);
            }
            else if (board[i][j] == 'O') {
                setColor(12);
                cout << board[i][j];
                setColor(11);
            }
            else {
                setColor(15);
                cout << board[i][j];
                setColor(11);
            }
            cout << " | ";
        }
        cout << "\n    +---+---+---+\n";
    }
    cout << "\n";
    setColor(7);
}

// Function to clear the screen
void clearScreen() {
    system("cls");
}

// Function to check for winner
char checkWin(char board[][3], int size) {
    // Check rows and columns
    for (int i = 0; i < size; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    return 'N';
}