void NQueens(vector<vector<char>> &board, int row)
{
    int n = board.size();
    if (row == n)
    {
        printBoard(board);
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (issafe(board, row, i))
        {
            board[row][i] = 'Q';
            NQueens(board, row + 1);
            board[row][i] = '.'; // Backtrack
        }
    }
}