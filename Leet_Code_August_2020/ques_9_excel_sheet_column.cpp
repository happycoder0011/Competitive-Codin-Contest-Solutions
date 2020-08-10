class Solution {
public:
    int titleToNumber(string s) {
        int n= s.size();
        int sum =0;
        for(int i=0;i<n;i++)
        {
            char c = s[i]-64;
            sum += pow(26,n-i-1)*c;
        }
     return sum;
    }
};
