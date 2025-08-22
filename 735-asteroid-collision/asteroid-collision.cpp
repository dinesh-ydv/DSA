class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        vector<int>ans;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                ans.push_back(arr[i]);
            }else{
                while(ans.size() != 0 && ans.back() > 0 && ans.back() < abs(arr[i])){
                    ans.pop_back();
                }

                if(ans.size() != 0 && ans.back() == abs(arr[i])){
                    ans.pop_back();
                }else if(ans.size() == 0 || ans.back() < 0){
                    ans.push_back(arr[i]);
                }
            }
        }
        return ans;
    }
};