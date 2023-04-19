class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=0;
        int count=0;
        int m=left;
        while(left!=right){
            left>>=1;
            right>>=1;
            count++;
        }
       return left<<count;
    }
};