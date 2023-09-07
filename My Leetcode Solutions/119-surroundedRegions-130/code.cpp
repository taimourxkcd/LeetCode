class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        // make the first row and last row: Y
        for(int i = 0; i < m; i++){
            if(board[i][0] == 'O') dfs(board, i, 0);
            if(board[i][n-1] == 'O') dfs(board, i, n-1);
        }

        // make the first column and last column: Y
        for(int j = 0; j < n; j++){
            if(board[0][j] == 'O') dfs(board, 0, j);
            if(board[m-1][j] == 'O') dfs(board, m-1, j);
        }

        // convert the zero to x and revert the y back to 0
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] ==  'O') board[i][j] = 'X';
                else if(board[i][j] ==  'Y') board[i][j] = 'O';
            }
        }
    }

    void dfs(vector<vector<char>> &board, int i, int j){
       int m = board.size();
       int n = board[0].size();

       if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] != 'O') return;

       board[i][j] = 'Y'; 

       dfs(board, i + 1, j);
       dfs(board, i - 1, j);
       dfs(board, i, j + 1);
       dfs(board, i, j - 1);
      
    }
};
