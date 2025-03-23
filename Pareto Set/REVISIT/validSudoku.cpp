// To run this code, use the command: g++ -o valid_palindrom valid_palindrom.cpp && ./valid_palindrom
// This code checks if a given Sudoku board is valid or not.
// This is leetcode editorial solution approach 3 (using bitmasking).
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int rows[9] = {}, cols[9] = {}, boxes[9] = {};

        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                char val = board[r][c];
                if (val == '.')
                    continue;

                int pos = 1 << (val - '1'); // bitmask
                int boxIdx = (r / 3) * 3 + c / 3;

                if ((rows[r] & pos) || (cols[c] & pos) || (boxes[boxIdx] & pos))
                {
                    return false;
                }

                rows[r] |= pos;
                cols[c] |= pos;
                boxes[boxIdx] |= pos;
            }
        }

        return true;
    }
};

int main()
{
    Solution sol;

    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    bool isValid = sol.isValidSudoku(board);

    if (isValid)
    {
        cout << "The Sudoku board is VALID." << endl;
    }
    else
    {
        cout << "The Sudoku board is INVALID." << endl;
    }

    return 0;
}