class CustomStack {
public:
    int n;
    vector<int> ans;
    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(ans.size()<n)
        {
            ans.push_back(x);
        }
    }
    
    int pop() {
        if(ans.size()==0)
        {
            return -1;
        }
        int num = ans.back();
        ans.pop_back();
        return num;
    }
    
    void increment(int k, int val) {
        int size = min(k,(int)ans.size());
        for(int i=0;i<size;i++)
        {
            ans[i] = ans[i]+val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */