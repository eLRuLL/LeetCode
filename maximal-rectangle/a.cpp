#include <iostream>
#include <vector>
using namespace std;

int main(){
	char matrix_array[9][10] = { 
		{'1','1','0','0','0','0','0','0','0','0'}, 
		{'1','1','0','0','0','0','0','0','0','0'}, 
		{'0','0','0','0','0','0','0','0','0','0'}, 
		{'0','0','0','1','1','0','0','0','0','0'}, 
		{'0','0','0','1','1','0','0','0','0','0'}, 
		{'0','0','0','0','0','0','1','1','1','1'}, 
		{'0','0','0','0','0','0','1','1','1','1'}, 
		{'0','0','0','0','0','0','1','1','1','1'}, 
		{'1','0','0','0','0','0','1','1','1','1'} 
	};
	vector<vector<char> > matrix(9, vector<char>(10,'0'));

	for(int i=0;i<9;i++){
        for(int j=0;j<10;j++){
        	matrix[i][j] = matrix_array[i][j];
        }
    }

    

	vector<vector<int> > total(matrix.size(), vector<int>(matrix[0].size(),0));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
            	
                if(matrix[i][j]!= '0'){
                    total[i][j] += (matrix[i][j]-'0');
                    if(i!=0){
                        if(j != 0)
                            total[i][j] += (matrix[i-1][j-1]-'0');
                        if(j != matrix[i].size()-1){
                        	
                            total[i][j] += (matrix[i-1][j+1]-'0');
                        }
                        total[i][j] += (matrix[i-1][j]-'0');
                    }
                    
                    if(i != (matrix.size()-1)){
                        if(j != 0)
                            total[i][j] += (matrix[i+1][j-1]-'0');
                        if(j != matrix[i].size()-1)
                            total[i][j] += (matrix[i+1][j+1]-'0');
                        total[i][j] += (matrix[i+1][j]-'0');
                    }
                    
                    if(j!=0){
                        total[i][j] += (matrix[i][j-1]-'0');
                    }
                    if(j!=matrix[i].size()-1){
                        total[i][j] += (matrix[i][j+1]-'0');
                    }
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<total[i][j];
            }
            cout<<endl;
        }
}