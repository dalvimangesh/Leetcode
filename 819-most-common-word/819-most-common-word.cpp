class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        
        map<string,int> m;
        
        
        int i = 0;
        
        int n = (int) p.size();
        
        while( i < n ){
            
            string s = "";
            
            while( (p[i]>='a' and p[i]<='z') or (p[i]>='A' and p[i]<='Z') ) {
                
                if( (p[i]>='a' and p[i]<='z') ){
                    s.push_back( p[i] );
                }
                
                else{ 
                    s.push_back( p[i] + 32 );
                }
                i++;
            }    
            
            if( s != "" ){
                m[s]++;
            }
            
            i++;
        }
        
        
        for(auto s:b){
            
            for(int i=0;i<s.size();i++){
                
                if( s[i] >= 'A' and s[i] <='Z' ) {
                    
                    s[i] = s[i] + 32;
                    
                }  
                
            }
            
            m[s] = 0;
            
        }
        
        int ans = 0;
        string s;
        for(auto ele:m){
            if( ele.second > ans ){
                s = ele.first;
                ans = ele.second;
                
            }
        }
        
        
        return s;
        
    }
};