#include <iostream>
#include <vector>
using namespace std;

#define MAX_INT 2000000000

int minPathSum(vector<vector<int> > &grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int> v(n+1, MAX_INT);
        
        v[1] = 0;
        
        for(int i =0; i<m;i++){
            for(int j=0;j<n;j++){
                v[j+1] = min(v[j+1], v[j]) + grid[i][j];
            }
        }
        
        return v.back();
    }


int main(){
	int mat[4][4]={
		{1 , 5, 1, 1},
		{1 , 1, 2, 1},
		{1 , 2, 1, 1},
		{1 , 4, 1, 1}
	};

	int m = 4;
	int n = 4;

	vector<vector<int> > grid( m, vector<int>( n, 0) );
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			grid[i][j] = mat[i][j];
		}
	}

	cout<<minPathSum(grid)<<endl;
	return 0;
}