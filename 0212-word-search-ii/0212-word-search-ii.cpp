class Trie{
    public:
    unordered_map<char, Trie*> children;
    bool isEnd=false;
    
    void insert(string word){
        Trie* node=this;
        for(char c : word){
            if(node->children.find(c)==node->children.end())
                node->children[c]=new Trie();
            node=node->children[c];
        }
        node->isEnd=true;
    }
};
class Solution {
public:
    vector<int> direction={0, -1, 0, 1, 0};
    void Backtracking(vector<vector<char>>& board, Trie* trie, int i, int j, string& partial, vector<string>& result){
        if(trie->isEnd==true){
            result.push_back(partial);
            trie->isEnd=false;
        }
        
        for(int d=0; d<4; d++){
            int row=i+direction[d];
            int col=j+direction[d+1];
            if(row>=0 && col>=0 && row<board.size() && col<board[0].size() && board[row][col]!='#' && 
               trie->children.find(board[row][col])!=trie->children.end()){
                char temp=board[row][col];
                board[row][col]='#';
                partial.push_back(temp);
                
                Backtracking(board, trie->children[temp], row, col, partial, result); 
                
                partial.pop_back();
                board[row][col]=temp;
            }
            
        }
        
        
    }
    
    vector<string> exist(vector<vector<char>>& board, Trie* trie){
        int m=board.size(), n=board[0].size();
        
        vector<string> result;
        string partial;
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(trie->children.find(board[i][j])!=trie->children.end()){
                    char temp=board[i][j];
                    board[i][j]='#';
                    partial.push_back(temp);

                    Backtracking(board, trie->children[temp], i, j, partial, result);

                    partial.pop_back();
                    board[i][j]=temp;
                }
                
            }
        
        return result;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie* trie=new Trie();
        for(string word : words)
            trie->insert(word);
        
        return exist(board, trie);
    }
};