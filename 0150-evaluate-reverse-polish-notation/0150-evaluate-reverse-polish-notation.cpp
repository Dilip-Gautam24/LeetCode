class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int> a;
        long long int j,k;
        for(auto i:tokens)
        {
            
            if(i=="+")
            {
                j=a.top();
                a.pop();
                k=a.top();
                a.pop();
                a.push(k+j);

            }
            else if(i=="-")
            {
                j=a.top();
                a.pop();
                k=a.top();
                a.pop();
                a.push(k-j);
            }
            else if(i=="*")
            {
                j=a.top();
                a.pop();
                k=a.top();
                a.pop();
                a.push(k*(j));
            }
            else if(i=="/")
            {
                j=a.top();
                a.pop();
                k=a.top();
                a.pop();
                a.push(k/j);
            }
            else
            {
                j=stoi(i);
                a.push(j);
                // cout<<j<<" "<<i<<"\n";
            }
            
            // cout<<a.top()<<" ";
        }
        // cout<<a.size();
        return a.top();
    }
};