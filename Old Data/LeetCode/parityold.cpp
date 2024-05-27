bool isArraySpecial(vector<int>& nums,int start,int end) {
        
        for(int i=start;i<end;i++){
            if(nums[i]%2==0 && nums[i+1]%2==0){
                return false;
            }
            else if(nums[i]%2!=0 && nums[i+1]%2!=0){
                return false;
            }
        }
        return true;

    }

    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int q=queries.size();
        vector <bool>v;
        for(int a=0;a<q;a++){
            v.push_back(isArraySpecial(nums,queries[a][0],queries[a][1]));
        }
        return v;
    }