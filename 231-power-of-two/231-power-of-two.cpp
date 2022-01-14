class Solution {
public:
    bool isPowerOfTwo(int n) {
    //Base case
        
        if(n==0)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        
        if(n%2==0)
        {
            n=n/2;
           return isPowerOfTwo(n);
        }
        else
        {
            return false;
        }
    }
};