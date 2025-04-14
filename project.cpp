//============Project File================//
#include<iostream>
#include<vector>
using namespace std;

template <class T>
class Grid{
    int row, col;
    vector<vector<bool>> grid;
    vector<vector<T>> tileCost;
    public:
    Grid(int x, int y){
        row = x;
        col = y;
        grid.resize(row,vector<bool>(col, 0));
        tileCost.resize(row,vector<T>(col,1));
    }
    void SetObstacle(int x, int y){
        if(x>=0 && x<row && y>=0 && y<col){
            grid[x][y] = true;
        }
    }
    void ClearObstacle(int x, int y){
        if(x>=0 && x<row && y>=0 && y<col){
            grid[x][y] = false;
        }
    }
    void PrintGrid(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]) cout<<"X";
                else cout<<"*";
            }
            cout<<endl;
        }
    }
    void GenerateMaze(){
        //Generate a maze in the grid.
    }
};
int main(){
    
}
