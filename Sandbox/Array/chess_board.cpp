//chess_board.cpp

#include <iostream>

int main() {
  int chess_board[8][8];
  int i, j;
  for (i=0; i<8; i++){
    for (j=0; j<8; j++){
      chess_board[i][j] = (10 * i) + j;
    }
  }


  using namespace std;
  cout << "[0][0] = " << chess_board[0][0] << endl;
  cout << "[0][5] = " << chess_board[0][5] << endl;
  cout << "[5][0] = " << chess_board[5][0] << endl;
  return 0;
}