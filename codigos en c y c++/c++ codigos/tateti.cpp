#include <iostream>
#include <cstdlib>

using namespace std;

char board[3][3]; // Tablero de juego global

// Función para inicializar el tablero
void initBoard() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}

// Función para mostrar el tablero actual
void displayBoard() {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para verificar si hay un ganador
char checkWinner() {
    // Revisar filas
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return board[i][0];
        }
    }
    // Revisar columnas
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i];
        }
    }
    // Revisar diagonales
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return board[0][2];
    }
    return ' '; // No hay ganador todavía
}

// Función para jugar
void play() {
    int row, col;
    char currentPlayer = 'X';
    char winner = ' ';

    initBoard();
    displayBoard();

    // Ciclo de juego
    while (winner == ' ') {
        cout << "Jugador " << currentPlayer << ", ingrese fila y columna (ejemplo: 1 2): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Movimiento inválido, por favor intente de nuevo." << endl;
            continue;
        }

        board[row][col] = currentPlayer;
        displayBoard();
        winner = checkWinner();

        if (winner == ' ') {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Cambiar de jugador
        }
    }

    // Mostrar resultado del juego
    if (winner == 'X' || winner == 'O') {
        cout << "¡Felicidades! Jugador " << winner << " ha ganado el juego." << endl;
    } else {
        cout << "¡Empate! No hay un ganador." << endl;
    }
}

int main() {
    cout << "Bienvenido al juego de tres en raya (tateti)." << endl;
    play();
    return 0;
}
