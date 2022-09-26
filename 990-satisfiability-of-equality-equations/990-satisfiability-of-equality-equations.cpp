class Solution {
public:
    vector<int>parent;
 	int find(int x) {
 		return parent[x] == x ? x : find(parent[x]);
 	}
    void merge(int x,int y){
        int a = find(x);
 		int b = find(y);
 			if (a!= b)
 				parent[b] = a;
 		return;
    }
    bool equationsPossible(vector<string>& equations) {
       
 		parent.resize(26, 0);
 		for (int i = 0; i <26; i++)
 			parent[i] = i;

 		vector<int>res(2, 0);
 		for (int i = 0; i < equations.size(); i++) {
            if(equations[i][1]=='=')
                merge(equations[i][0]-'a',equations[i][3]-'a');
 		}
 		for (int i = 0; i < equations.size(); i++) {
            if(equations[i][1]=='!')
                if(find(equations[i][0]-'a')==find(equations[i][3]-'a'))
                    return false;
 		}
 		return true;    
    }
};