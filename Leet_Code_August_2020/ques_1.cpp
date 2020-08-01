class Solution {
public:
    bool detectCapitalUse(string word) {
        int A[26]={0},a[26]={0},j;
for(int i=0;i<word.length();i++)
{
    if(word[i]<96)
    {
    j=word[i]-65;
    A[j]++;
    }
    else
    {
    j=word[i]-97;
    a[j]++;
    }
    }
sort(a,a+26,greater<int>());
sort(A,A+26,greater<int>());

if(a[0]==0 || A[0]==0 || (A[0]==1 && A[1]==0 && word[0]<96))
    return true;
else
    return false;
    }
};
