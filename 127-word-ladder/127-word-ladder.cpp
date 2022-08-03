class Solution {
public:
    
    bool check(string &s1,string &s2){
        int n = (int) s1.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]) cnt++;
            if(cnt>1) return false;
        }
        return cnt==1;
    }
    
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        int n = (int) wordList.size();
        
        int level = 0;
        
        queue<string> q;
        
        vector<int> visited(n+2,-1);
        
        q.push(beginWord);
        
        bool present = false;
        
        for(int i=0;i<n;i++){
            
            if(wordList[i]==endWord){
                present=true;
            }
            
        }
        
        if(present==false) return 0;
        
        while(q.size()){
            
            int curLevel = q.size();
            
            for(int i=0;i<curLevel;i++) {

                string cur = q.front(); q.pop();

                if(cur == endWord) {
                    return level+1;
                }
                
                for(int i=0;i<n;i++){

                    if( check(cur,wordList[i]) and visited[i]==-1){
                        q.push(wordList[i]);
                        visited[i] = 1;
                    }
                }   
            }
            level++; 
        }
        
        return 0;
        
    }
};