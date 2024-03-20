class Solution {
public:

    bool isSafe(int row, int col, vector<vector<char>>& board, char val){
    for(int i = 0; i < board.size(); i++){
        //row check
        if(board[row][i] == val){
            return false;
        }

        //col check
        if(board[i][col] == val){
            return false;
        }

        //check 3*3 matrix
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == val){
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<char>>& board){
    int n = board[0].size();
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){

            if( board[row][col] == '.'){
                for(int num = 1; num <= 9; num++){
                    char val = static_cast<char>('0' + num);
                    if(isSafe(row, col, board, val)){
                        board[row][col] = val;
                        // check if solution is possible
                        bool checkSolPossible = solve(board);
                        if(checkSolPossible){
                            return true;
                        }else{
                            // backtrack
                            board[row][col] = '.';
                        }
                    }
                }
                    return false;
            }
        }
    }
        return true;
}


    void solveSudoku(vector<vector<char>>& board) {
        solve(board);   
    }
};