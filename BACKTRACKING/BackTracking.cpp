#include <bits/stdc++.h> 
using namespace std;

void printarr(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void changearr(int arr[], int n, int i){
    if ( i==n){
        printarr(arr, n);
        return;
    }
    arr[i]=i+1;
    changearr(arr, n, i+1);
    arr[i]-=2;
}

void printsubsets(string s, string subset, int i){
    if (i==s.length()){
        cout<<subset<<" ";
        return;
    }
    // include the current character
    printsubsets(s, subset+s[i], i+1);
    // exclude the current character
    printsubsets(s, subset, i+1); 
}

void printsubsets(string s, string subset){
    char ch=s[0];
    //base case
    if (s.length()==0){
        cout<<subset<<"\n";
        return;
    }
    //yes choice
    printsubsets(s.substr(1,s.length()-1), subset+ch);
    //no choice
    printsubsets(s.substr(1,s.length()-1), subset);
}

void permutations(string s,string ans ){
    if(s.size()==0){
        cout<<ans<<"\n";
        return;
    }
    for( int i=0;i<s.size();i++){
        char ch= s[i];
        permutations(s.substr(0,i)+s.substr(i+1,s.size()), ans+ch);
    }
}

void printBoard(vector<vector<char>>& board){
    for (int i=0;i<board.size();i++){
        for (int j=0;j<board[i].size();j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"-------------------\n";
}

bool issafe(vector<vector<char>>& board, int row, int col){
    int n = board.size();

    // horizontal safety check
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }

    // vertical safety check
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    // diagonal safety check (top-left to bottom-right)
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    // diagonal safety check (top-right to bottom-left)
    for(int i=row, j=col; i>=0 && j<n; i--, j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}

// void NQueens(vector<vector<char>>& board, int row){
//     int n = board.size();
//     if (row==n){
//         printBoard(board);
//         cout<<"\n";
//         return;
//     }

//     for(int i=0;i<n;i++){
//         if(issafe(board, row, i)){
//             board[row][i]='Q';
//             NQueens(board, row+1);
//             board[row][i]='.'; // Backtrack
//         }
        
//     }
// }

int NQueens(vector<vector<char>>& board, int row){
    int n = board.size();
    if (row==n){
        printBoard(board);
        return 1;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(issafe(board, row, i)){
            board[row][i]='Q';
            count += NQueens(board, row+1);
            board[row][i]='.'; // Backtrack
        }
        
    }
    return count;
}

int Gridways(int r, int c, int n, int m, string ans){
    if (r==n-1 && c==m-1){
        cout<<ans<<"\n";
        return 1;
    }
    if (r>=n || c>=m){
        return 0;
    }
    return Gridways(r+1, c, n, m, ans+"D") + Gridways(r, c+1, n, m, ans+"R");
}

void printsudoku(vector<vector<int>>&sudoku){
    for (int i=0;i<sudoku.size();i++){
        for(int j=0;j<sudoku[i].size();j++){
            cout<<sudoku[i][j]<<" ";
        }        cout<<"\n";
    }
}

int main(){
    // int arr[5];
    // changearr(arr, 5, 0);
    // cout<<"\n";
    // string s="abc";
    // printsubsets(s, "");
    // cout<<"\n";
    // permutations(s, "");
    // vector<vector<char>> board(4, vector<char>(4, '.'));
    // int count = NQueens(board, 0);
    // cout << "Total number of solutions: " << count << endl;

    cout << "Total number of paths in grid: " << Gridways(0, 0, 3, 3, "") << endl;
    
    int sudoku[9][9] = {
        {0, 0, 8, 0, 0, 0, 0, 0, 0},
        {4, 9, 0, 1, 5, 7, 0, 0, 2},
        {0, 0, 3, 0, 0, 4, 1, 9, 0},
        {1, 8, 5, 0, 6, 0, 0, 2, 0},
        {0, 0, 0, 0, 2, 0, 0, 6, 0},
        {9, 6, 0, 4, 0, 5, 3, 0, 0},
        {0, 3, 0, 0, 7, 2, 0, 0, 4},
        {0, 4, 9, 0, 3, 0, 0, 5, 7},
        {8, 2, 7, 0, 0, 9, 0, 1, 3}
    };
    
    return 0;
}