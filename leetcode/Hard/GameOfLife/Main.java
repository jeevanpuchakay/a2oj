class Solution {
    public void gameOfLife(int[][] board) {
        int rows = board.length;
        if (rows == 0)
            return;
        int columns = board[0].length, temp;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                temp = 0;
                if ((i > 0) && (j > 0)) {
                    temp += (board[i - 1][j - 1] & 1);
                }
                if ((i > 0)) {
                    temp += (board[i - 1][j] & 1);
                }
                if ((j < columns - 1) && (i > 0)) {
                    temp += (board[i - 1][j + 1] & 1);
                }
                if (j < columns - 1) {
                    temp += (board[i][j + 1] & 1);
                }
                if ((i < rows - 1) && (j < columns - 1)) {
                    temp += (board[i + 1][j + 1]);
                }
                if (i < rows - 1) {
                    temp += (board[i + 1][j] & 1);
                }
                if ((i < rows - 1) && (j > 0)) {
                    temp += (board[i + 1][j - 1] & 1);
                }
                if (j > 0) {
                    temp += (board[i][j - 1] & 1);
                }

                if (((board[i][j] & 1) > 0) && temp < 2) {
                    board[i][j] &= (1);
                } else if ((board[i][j] & 1) > 0 && (temp == 2 || temp == 3)) {
                    board[i][j] = 3;
                } else if (((board[i][j] & 1) > 0) && (temp > 3)) {
                    board[i][j] = 1;
                } else if (((board[i][j] & 1) == 0) && (temp == 3)) {
                    board[i][j] = 2;
                } else {
                    board[i][j] |= ((board[i][j] & 1) << 1);
                }

            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                board[i][j] = (board[i][j] >> 1);
            }
        }
        return;
    }
}