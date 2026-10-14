class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      for(int row=0;row<9;row++){
unordered_set<char>seen;
for(int col=0;col<9;col++){
 if(board[row][col]=='.'){
    continue;}
 if(seen.count(board[row][col])>0){
   return false;}
else{
seen.insert(board[row][col]);
}
 }
  }
  for(int col=0;col<9;col++){
unordered_set<char> seen;
for(int row=0;row<9;row++){
if(board[row][col]=='.'){
    continue;}
 if(seen.count(board[row][col])>0){
   return false;}
else{
seen.insert(board[row][col]);
}
 }
  }
  for(int box=0;box<9;box++){
 int startrow= (box/3)*3;
int startcol=(box%3)*3;
  unordered_set<char>seen;
for(int r=0;r<3;r++){
for(int c=0;c<3;c++){
if (board[startrow+r][startcol+c]=='.'){
 continue;}
if(seen.count(board[startrow+r][startcol+c])>0){
return false;}
else {
seen.insert(board[startrow+r][startcol+c]);
  }  
 }      
}          
 }
return true;
  } 
    
};
