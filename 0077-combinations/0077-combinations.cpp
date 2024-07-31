class Solution {
public:
    vector<vector<int>> ans;
    void cal(int start,int n,int k,vector<int>num){
        if(k==0){
            ans.push_back(num);
            return;
        }
        if(start>n) return ;
        for(int i = start;i<=n;i++){
            num.push_back(i);
            cal(i+1,n,k-1,num);
            num.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        int start = 1;
        vector<int> num;
        cal(start,n,k,num);
        return ans;
    }
};