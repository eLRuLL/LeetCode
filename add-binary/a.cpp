#include <string>
#include <algorithm>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	string a="110";
	string b="11";
	string solution;
        int temp = 0;
        bool flag;
        if(a.size() > b.size()){
        	flag = true; // a is greater
        }else{
        	flag = false; // b is greater
        }

        vector<string> string_bits;
        string_bits.push_back(a);
        string_bits.push_back(b);

        int j = string_bits[!flag].size() -1;
        for(int i = string_bits[flag].size()-1; i>=0; i--){
        	cout<<string_bits[flag][i] << " "<<string_bits[!flag][j]<<endl;
        	cout<<"indices i="<<i<<" j="<<j<<endl;
        	if(string_bits[flag][i] != string_bits[!flag][j]){
                if(temp){
                    solution.push_back('0');
                    cout<<"a[i] != b[j] temp "<<"solution: "<<solution<<" temp: "<<temp<<endl;
                }else{
                    solution.push_back('1');
                    cout<<"a[i] != b[j] !temp "<<"solution: "<<solution<<" temp: "<<temp<<endl;
                }
            }else if(string_bits[flag][i] == '1'){
                if(temp){
                    solution.push_back('1');
                    cout<<"a[i] == 1 temp "<<"solution: "<<solution<<" temp: "<<temp<<endl;
                }else{
                    solution.push_back('0');
                    temp = 1;
                    cout<<"a[i] == 1 !temp "<<"solution: "<<solution<<" temp: "<<temp<<endl;
                }
            }else{

                if(temp){
                    solution.push_back('1');
                    temp=0;
                    cout<<"a[i] == 0 temp "<<"solution: "<<solution<<" temp: "<<temp<<endl;
                }else{
                    solution.push_back('0');
                    cout<<"a[i] == 0 !temp "<<"solution: "<<solution<<" temp: "<<temp<<endl;
                }
            }

            j--;
        }

        reverse(solution.begin(), solution.end());

        for(int i =0; i<string_bits[flag].size() - string_bits[!flag].size)


        cout<<"presol: "<<solution<<" temp: "<<temp<<endl;

        if(temp){
            solution.push_back('1');
        }
        
        cout<<solution<<endl;
        return 0;
}