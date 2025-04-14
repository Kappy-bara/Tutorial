//============Project File================//
#include<iostream>
#include<vector>
using namespace std;

class Grid{
    int row, col;
    vector<vector<int>> grid;

    public:
    Grid(int x, int y){
        row = x;
        col = y;
        grid.resize(row, vector<int>(col, 0));
    }
    void SetObstacle(int x, int y){
        if(x>=0 && x<row && y>=0 && y<col){
            grid[x][y] = 1;
        }
    }
    void ClearObstacle(int x, int y){
        if(x>=0 && x<row && y>=0 && y<col){
            grid[x][y]=0;
        }
    }
    void PrintGrid(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<grid[i][j]<<" ";
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
