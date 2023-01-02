class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string> a;
        string z,x;
        for(auto i:title)
        {
            if(i==' ')
            {
                a.push_back(z);
                z="";
            }
            else
                z+=i;
        }
        if(z!="") a.push_back(z);
        
        z="";
        for(auto i:a)
        {
            if(i.size()<3)
            {
                transform(i.begin(), i.end(), i.begin(), ::tolower);
                z+=i;
            }
            else
            {
                transform(i.begin(), i.end(), i.begin(), ::tolower);
                i[0]=toupper(i[0]);
                z+=i;
            }
            z+=' ';
        }
        z.pop_back();
        return z;
    }
};