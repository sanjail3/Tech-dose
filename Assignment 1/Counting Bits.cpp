class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> a(n+1);
        a[0]=0;
    
        
        for(int i=1;i<=n;i++){
          
            a[i]=a[i/2] +i%2;
            
            
            
        }
        return a;
    }
};