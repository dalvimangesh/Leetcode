class Solution {
public:
    int longestValidParentheses(string s) {
        
        
        stack<int>stack;
        
        int cnt = 0;
        int ans = 0;
        
        int n = (int) s.size();
        
        stack.push(-1);
        
        for(int i=0;i<n;i++){
            
            if(s[i]=='('){
                stack.push(i);
            }
            else{
                stack.pop();
                if(stack.size()){
                    int ele = stack.top();
                    ans = max(ans,i-ele);
                }
                else{
                    stack.push(i);
                }
            }
        }
        
        
        return ans;
        
    }
};
