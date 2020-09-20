class Solution {
public:
    int maxArea(vector<int>& height) {
        int cont,max=0;
        int j= height.size()-1;
        int i=0;
        while(i<j){
                cont = (j-i)*(min(height[i],height[j]));
                if(cont>max)
                {  max = cont;}
            if(height[i]>height[j])
                j--;
            else
                i++;


        }
    return max;
    }
};
