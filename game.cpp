// Ask user if he wants to play Sudoku
// If said yes, then show them the game board
// Ask whether they want to try it, or want solution to it directly
// If they wish to try, give them a chance
// If they wish to see the solution, show them the solution

#include<bits/stdc++.h>
using namespace std;
//Function to show board game:
void showBoard(int board[9][9]){
    cout<<"\n\n";
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(j==3 || j==6){
                cout <<"| ";
            }
            cout << board[i][j] <<" ";
        }
        cout<<endl;
        if(i==2 || i==5){
            cout <<"_ _ _ | _ _ _ | _ _ _\n";
            cout <<"      |       |      \n";}}}

bool checkForWin(int SolutionBoard[9][9], int UserBoard[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(SolutionBoard[i][j]!= UserBoard[i][j]){
                return false;
            }
        }
    }
    return true;

}
int main(){
    char ch;
    int ProblemBoard[9][9] = 
       {{0, 4, 8, 2, 0, 0, 0, 0, 1},
        {1, 0, 0, 3, 8, 4, 7, 2, 6},
        {3, 0, 0, 7, 0, 1, 9, 4, 8},
        {0, 7, 2, 6, 4, 5, 1, 8, 0},
        {8, 0, 0, 0, 0, 2, 4, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 7},
        {0, 8, 4, 0, 0, 0, 3, 0, 0},
        {6, 0, 0, 4, 1, 0, 0, 0, 2},
        {0, 0, 3, 0, 0, 0, 0, 7, 4}};
    int UserBoard[9][9] = 
       {{0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}};
    int SolutionBoard[9][9] = 
       {{0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}};
    cout <<"======================================================================\n";
    cout <<"                       Welcome to the Sudoku Game!!                   \n";    
    cout <<"======================================================================\n";    
    cout <<"\n\n";
    cout <<"Do you wish to play Sudoku? (y/n): ";
    cin >> ch;
    if( ch =='y' || ch == 'Y') {
        showBoard(ProblemBoard);    
        cout<<"\n\nOnce you have solve it, give the solution below and you should include the pre-given values as well:";
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cin>>UserBoard[i][j];
            }
        }
        
        char DidUserWin = checkForWin(SolutionBoard, UserBoard);
        if (DidUserWin==true) {
            cout<<"Congratulations!! You have won the game!!\n";
        }
        else {
            cout<<"Sorry!! You have lost the game!!\n";
            cout<<"Here is the correct solution\n";
            showBoard(SolutionBoard);
        }
    }
    else {
        cout<<"Bye Bye!!\n";
        _Exit;
        }
    return 0;
}