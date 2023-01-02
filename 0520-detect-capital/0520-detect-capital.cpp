class Solution {
public:
    bool detectCapitalUse(string word) {
        int h=0,u=0,l=0;
        if(isupper(word[0])) h=1;
        for(auto i:word)
        {
            if(isupper(i)) u+=1;
            else l+=1;
        }
        if(u==word.size()||l==word.size()||(h==1)&&l+1==word.size()) return true;
        return false;
    }
};