class Solution {
public:
bool isPalindrome(string s) {
int y =s.length();
int a[1000000],q=0,x,j=0;
for(int i=0;i<y;i++)
{
     x = s[i];
    if(x>=97 && x<=122)
    {
        a[j]=x-97;
        j++;
    }

    else
    if(x>=65 && x<=90)
       {
         a[j]=x-65;
         j++;
       }
    else
        if(x>=48 && x<=57)
        {a[j]=x-22;
        j++;}

}

for(int i=0;i<(j-1);i++)
{
    if(a[i]!=a[j-1-i])
    q++;
}

if(q==0)
    return true;
else
    return false;


};};
