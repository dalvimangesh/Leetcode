class MedianFinder {
public:
    
    priority_queue<int> left;
    priority_queue<int,vector<int>, greater<int> > right;
    
    MedianFinder() {
    }
    
    void addNum(int num) {
        
        if( left.size() == 0){
            left.push(num);
        }
        else if( left.size() > right.size() ){
            
            if( num > left.top() ) right.push(num);
            else{
                right.push( left.top() );
                left.pop();
                left.push(num);
            }
        }
        else if( left.size() < right.size() ){
            
            if( num < right.top() ) left.push(num);
            else{
                left.push(right.top());
                right.pop(); 
                right.push(num);
            }
        }
        else{
            if( num > left.top() ) right.push(num);
            else left.push(num);
        }
        
    }
    
    double findMedian() {
        
        if( left.size() > right.size() ) return left.top();
        else if(right.size() > left.size()) return right.top();
        else return (left.top()+right.top())/2.0;
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */