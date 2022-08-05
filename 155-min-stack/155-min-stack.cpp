class MinStack {
public:
    
    stack< long long > stack;
    
    long long min;
    
    MinStack() {
            
    }
    
    void push(int val) {
        
        if(stack.size() == 0){
            stack.push(val); 
            min = val;
            return;
        }
        
        if( val > min ){
            stack.push(val); 
        }
        
        else{
            long long newval = 2LL * val - min;
            stack.push(newval);
            min = val;
        }
        
    }
    
    void pop() {
        
        if( stack.top() < min ){
            long long last = 2LL * min - stack.top();
            min = last;
        }
        stack.pop();
    }
    
    int top() {
        
        if( stack.top() > min ){
            return stack.top();
        }
        else{
            return min;
        }
        
    }
    
    int getMin() {
        return min;
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */