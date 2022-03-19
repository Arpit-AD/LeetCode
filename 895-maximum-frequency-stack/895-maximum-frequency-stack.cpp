class FreqStack {
    map<int, int> freqMap;  // for storing frequency of each element 
    
    map<int, stack<int>> freqStack; //for stoting elements in stack which has same freq..
    
    int max_freq = 0;  //will store max freq
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        int freq = freqMap[val] + 1;    //increment frequency in frequency map
        
        freqMap[val] = freq; 
        
        if(freq > max_freq)
            max_freq = freq;         //if freq> max_freq, update max_freq
        
        freqStack[freq].push(val);    //push that element in stack which has key = freq
    }
    
    int pop() {
        int top = freqStack[max_freq].top();  //get top element of stack which has key = max_freq
        freqStack[max_freq].pop();             //pop from that element
        
        freqMap[top]--;       //remove frequency of that relement in freq map
        
        if(freqStack[max_freq].size()==0)    //if that stack becomes empty, then decrement max_freq
            max_freq--;
        
        return top;    //return that top element
    }
};