class Solution {
public:
    bool isPowerOfFour(int n) {
        
        return ( ( n*1LL & (n*1LL-1LL) ) == 0 ) and ( (n*1LL -1LL) % 3LL == 0 );
        
    }
};
