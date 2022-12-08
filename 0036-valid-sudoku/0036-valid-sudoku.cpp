class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i,j,k,ans=0;
        for(i=0;i<9;++i)
        {
            map<int,int> mp;
            for(j=0;j<9;++j)
            {
                if(board[i][j]!='.') 
                {
                    k=board[i][j]-'0';
                    // cout<<k<<" ";
                    if(mp.find(k)!=mp.end()){
                        cout<<k<<"\n";
                        return false;
                    }
                    ++mp[k];
                }
            }
            // cout<<"\n";
        }
        for(i=0;i<9;++i)
        {
            map<int,int> mp;
            for(j=0;j<9;++j)
            {
                if(board[j][i]!='.') 
                {
                    k=board[j][i]-'0';
                    // cout<<k<<" ";
                    if(mp.find(k)!=mp.end()){
                        cout<<k<<"\n";
                        return false;
                    }
                    
                    ++mp[k];
                }
            }
            // cout<<"\n";
        }
        for(i=0;i<9;i+=3)
        {
            for(j=0;j<9;j+=3)
            {
                map<int,int> mp;
                for(int a=i;a<i+3;++a)
                {
                    for(int b=j;b<j+3;++b)
                    {
                        if(board[a][b]!='.')
                        {
                            k=board[a][b]-'0';
                            if(mp.find(k)!=mp.end()) return false;
                            ++mp[k];
                        }
                    }
                }
            }
        }
        return true;
    }
};