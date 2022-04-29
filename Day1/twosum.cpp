// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]

vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> mapnum;
        vector<int> final;
        int s= nums.size();
        for(int i=0; i<s; i++)
        {
            if(mapnum.find(target-nums[i])==mapnum.end()){
                mapnum[nums[i]]=i;
            }   
            else{
                
                final.push_back(mapnum[target-nums[i]]);
                final.push_back(i);
                break;
        }
    }
return final;
}