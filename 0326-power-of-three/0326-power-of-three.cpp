class Solution {
public:
    bool isPowerOfThree(int n) {
        int i=0;
        int ans=1;
        while(i<=30){
            
            if(n == ans){
                return true;
            } 

           if (ans < INT_MAX/2){
            ans *= 3;
           }
           
            ++i;
        }
         return false;
    
    }
};