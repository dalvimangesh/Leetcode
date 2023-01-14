class Solution {
    int parent[150];
public:

    Solution(){
        for(int i='a';i<='z';i++){
            parent[i] = i;
        }
    }

    int find(int root){
        if( parent[root] == root ) return root;
        return parent[root] = find(parent[root]);
    }

    void join( int u, int v ){

        int p1 = find(u);
        int p2 = find(v);

        if(p1 < p2) {
            parent[p2] = p1;
        }
        else {
            parent[p1] = p2;
        }
    }

    string smallestEquivalentString(const string &s1, const string &s2, string baseStr) {
        
        int n = (int) s1.size();

        for( int i = 0; i < n; i++ ) {
            join(s1[i],s2[i]);
        }

        for(int i=0 ; i < (int) baseStr.size() ; i++ ) {
            baseStr[i] = find(baseStr[i]);
        }

        return baseStr;
    }
};
