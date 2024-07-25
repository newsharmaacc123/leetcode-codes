#define num 2000000000;
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> prev(n,0);

        for(int i =0;i<m;i++){
            vector<int> temp(n,0);
            for(int j=0;j<n;j++){
                int left = 0,up = 0;
                if(i==0&&j==0) temp[j] =1;
                else{
                    if(i>0) up = prev[j];
                    if(j>0) left = temp[j-1];
                    temp[j] = left+up;
                }
            }
            prev = temp;
        }
        return prev[n-1];
    }
};