class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        }
        int originalX=x;
        long reverseNum=0;
        while(x!=0) {
            int rem=x%10;
            reverseNum=reverseNum * 10+rem;
            x=x/10;


        }
        return originalX == reverseNum;
       

        if(originalX == reverseNum) {
            return true;
        }
        else {
            return false;
        }
        
    }
};
