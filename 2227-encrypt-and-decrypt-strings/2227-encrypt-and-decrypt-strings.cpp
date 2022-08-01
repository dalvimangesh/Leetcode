class Encrypter {
public:
    
    map<string,int>m;
    map<char,string> keyValue;
    
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        
        int n = (int) keys.size();
        for(int i=0;i<n;i++){
            keyValue[keys[i]] = values[i];
        }
        
        for(string word:dictionary){
            
            string cur = "";
            
            bool flag = false;
            
            for(char c:word){
                
                if( keyValue.find(c) == keyValue.end() ){
                    flag=true; break;
                }
                
                cur += keyValue[c];
                
            }
            
            if(flag) continue;
            
            
            // cout << word << endl;
            // cout << cur << endl;
            
            m[cur]++;
        }
        
    }
    
    string encrypt(string word1) {
        
        string cur = "";
        
        for(char c:word1){
            
            if(keyValue.find(c)==keyValue.end()){
                return "";
            }
            
            cur+=keyValue[c];
            
        }
        
        return cur;
        
    }
    
    int decrypt(string word2) {
        
        return m[word2];
        
    }
};

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */