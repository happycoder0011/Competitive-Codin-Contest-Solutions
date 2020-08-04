class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<4 && num!=1)
            return false;
        if(floor(log(num)/log(4))==ceil(log(num)/log(4)))
            return true;
        else
            return false;

    }
};
