class CombinationIterator {

    string s;
    queue<string> q;
    void getcomb(int start,int n,string ans)
        {
            if(n==0)
            {
                q.push(ans);
                return;
            }
for(int i=start;i<s.length();i++)
    getcomb(i+1,n-1,ans + s[i]);
        }
 public:
    CombinationIterator(string characters, int combinationLength) {
        s =characters;
        string ans="";
        getcomb(0,combinationLength,ans);
    }

    string next() {
        string str =q.front();
        q.pop();
        return str;
    }

    bool hasNext() {
        return !q.empty();
    }
};
