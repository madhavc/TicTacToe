#include <iostream>
using namespace std;

const int COLUMNS = 3;
void display(char board[][COLUMNS], int rows);
void playerMove(char board[][COLUMNS], int rows, int playerNum);
int hasWon(char board[][COLUMNS], int rows);
int main(){
	bool noWon = true;
	char board[COLUMNS][COLUMNS] = { { '*', '*', '*' }, { '*', '*', '*' }, { '*', '*', '*' } };
	for(int i = 0; i < 9 && noWon; ++i){
		display(board, 3);
		playerMove(board, 3, 1);
		hasWon(board, 3);
		display(board, 3);
		playerMove(board, 3, 2);
		hasWon(board, 3);

	}
		system("PAUSE");
}

void display(char board[][COLUMNS], int rows){
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < COLUMNS; j++){
			cout << board[i][j];
		}
		cout << endl;
	}
}

void playerMove(char board[][COLUMNS], int rows, int playerNum){
	int row, column;
	cout << "Player " << playerNum << " moves.\n Enter the row and column \n";
	cin >> row >> column;
	if (row > 3 || row < 0 || column > 3 || column < 0){
		cout << "Invalid entry, try again.";
		playerMove(board, 3, playerNum);
	}
	if (board[row][column] == '*'){
		if (playerNum == 1){
			board[row][column] = 'X';
		}
		else{
			board[row][column] = 'O';
		}
	}
	else{
		cout << "Invalid entry, try again.";
		playerMove(board, 3, playerNum);
	}

}
int hasWon(char board[][COLUMNS], int rows){
	for (int i = 0; i < 3; ++i){
		if (board[i][0] == board[i + 1][0] == board[i + 2][0]){
			if (board[i][0] == 'O' )
				//player 2 wins. /check to make sure it is not stars
		}
	}
}
