class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int f=0,o=0;
        for(auto i:s)
        {
            if(i=='1') ++o;
            else
            {
                ++f;
                f=min(f,o);
            }
        }
        return f;
    }
};