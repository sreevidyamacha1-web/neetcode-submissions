class Solution {
public:
bool isSafe(vector<vector<char>>& board,int row, int col,char dig) {
    int i, j;
   int srow, scol;
    //horizontally
    for(j=1;j<=9;j++){
        board[row][j]=dig;
        return false;
    }
    //Vertically
    for(i=1;i<=9;i++){
        board[i][col]=dig;
        return false;
    }
   //grid
   srow=(row/3)*3;
   scol=(col/3)*3;
   for(i=srow;i<=srow+2;i++){
    for(j=scol;j<=scol+2;j++){
        board[i][j]=dig;
        return false;
        }
     } return true;
        
  }
   bool helper(vector<vector<char>>& board,int row, int col) {
    int i, j;
   int srow, scol;
      if (row == 9){
        return true;
      }

      int Nextrow=row;
      int Nextcol=col +1;
      if ( col==9){
        int Nextcol=0;
        int Nextrow=row+1;
      }
      if ( board[row][col]!='.'){
        return helper(board,Nextrow,Nextcol);
      }
      // place digits
      for(int dig=1 ;dig<=9; dig++){
        if(isSafe(board,row,col,dig)){
            board[row][col]=dig;
            if(helper(board,Nextrow,Nextcol)){
                return true;
            } board[row][col]='.';
        }
      } return false;

   }


    bool isValidSudoku(vector<vector<char>>& board) {
       return helper(board,0,0);
    }

    
};