/*  Project Name: Tic-Tac-Toe Game (Simple Console)
    Features:
    - 2 players
    - 3x3 grid
    - Check win/draw conditions

    Notes:
    - Input validation included (check slot validity and if the slot is already occupied).
    - Swap between players after every turn.
    - Detects row, column, and diagonal wins.
    - Declares a draw if all 9 slots are filled without a winner.
*/

#include<iostream>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char current_marker;
int current_player;

void drawBoard() {
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << "\n";
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = current_marker;
        return true;
    } else {
        return false;
    }
}

int winner() {
    // check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return current_player;
    }
    // check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return current_player;
    }
    // check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return current_player;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return current_player;

    return 0;
}

void swapPlayerAndMarker() {
    if (current_marker == 'X') current_marker = 'O';
    else current_marker = 'X';

    if (current_player == 1) current_player = 2;
    else current_player = 1;
}

void game() {
    cout << "Player 1, choose your marker (X or O): ";
    cin >> current_marker;
    current_player = 1;

    drawBoard();

    int player_won;

    for (int i = 0; i < 9; i++) {
        cout << "Player " << current_player << ", it's your turn. Enter your slot (1-9): ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9) {
            cout << "Invalid slot! Try again.\n";
            i--;
            continue;
        }

        if (!placeMarker(slot)) {
            cout << "Slot already occupied! Try again.\n";
            i--;
            continue;
        }

        drawBoard();

        player_won = winner();

        if (player_won == 1) {
            cout << "Player 1 wins! Congratulations!\n";
            return;
        } else if (player_won == 2) {
            cout << "Player 2 wins! Congratulations!\n";
            return;
        }

        swapPlayerAndMarker();
    }

    cout << "It's a draw!\n";
}

int main() {
    game();
}



/*  Output:
    Player 1, choose your marker (X or O): X

    1 | 2 | 3
    ---|---|---
    4 | 5 | 6
    ---|---|---
    7 | 8 | 9

    Player 1, it's your turn. Enter your slot (1-9): 1

    X | 2 | 3
    ---|---|---
    4 | 5 | 6
    ---|---|---
    7 | 8 | 9

    Player 2, it's your turn. Enter your slot (1-9): 5

    X | 2 | 3
    ---|---|---
    4 | O | 6
    ---|---|---
    7 | 8 | 9

    Player 1, it's your turn. Enter your slot (1-9): 2

    X | X | 3
    ---|---|---
    4 | O | 6
    ---|---|---
    7 | 8 | 9

    ...

    Player 1 wins! Congratulations!

*/