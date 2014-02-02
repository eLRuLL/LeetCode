#include <iostream>
#include <map>
#include <vector>


using namespace std;

typedef map<char,int> map_type;
typedef pair<char,int> pair_type;
typedef map_type::iterator	it_type;


int lengthOfLongestSubstring(string s) {
	map_type mymap;
	int solution = 0;
	it_type temporal;
	vector<int> last(s.size(),-1);
	for(int i =0; i<s.size() ; i++){
		temporal = mymap.find(s[i]);
		if(temporal == mymap.end()){
			mymap.insert(pair_type(s[i],i));
		}else{			
			//cout<<"consultando caso ("<<temporal->first<<") "<<i<<" - "<<temporal->second<<endl;
			solution = max(solution, i - temporal->second );
			last[i] = temporal->second;
			temporal->second = i;


			//cout<<"solucion actual: "<<solution<<endl;
		}
	}
	solution = 0;
	int cur_index = 0;
	int last_index;
	int i;
	
	for(i =0; i<s.size() ; i++){
		//cout<<"------------------------ "<<i<<" ------------------------"<<endl;
		last_index = last[i];
		//cout<<"last_index -> "<<last_index<<" cur_index -> "<<cur_index<<endl;

		if(last_index >= cur_index){
			solution = max( i- cur_index, solution);
			cur_index = last_index + 1;
		}

		solution = max( i- cur_index, solution);
	}
	
	solution = max( i- cur_index, solution);


	//cout<<endl;
	return solution;
}


int main(){
	cout<<lengthOfLongestSubstring("hnwnkuewhsqmgbbuqcljjivswmdkqtbxixmvtrrbljptnsnfwzqfjmafadrrwsofsbcnuvqhffbsaqxwpqcac")<<endl; // 12
	cout<<lengthOfLongestSubstring("wlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarcbynecdyggxxpklorellnmpapqfwkhopkmco")<<endl; // 12
	cout<<lengthOfLongestSubstring("aabcdefbaghijk")<<endl; // 11
	cout<<lengthOfLongestSubstring("holahqo")<<endl; // 5
	return 0;
}