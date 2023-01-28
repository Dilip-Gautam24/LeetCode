class SummaryRanges {
public:
    set<int> a;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        a.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> ans;
        int l=-1,r=-1;
        for(auto i:a)
        {
            if(l<0)
            {
                l=i;
                r=i;
            }
            else
            {
                if(i-r==1)
                {
                    r=i;
                }
                else
                {
                    ans.push_back({l,r});
                    l=i;
                    r=i;
                }
            }
                
        }
        ans.push_back({l,r});
        return ans;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */