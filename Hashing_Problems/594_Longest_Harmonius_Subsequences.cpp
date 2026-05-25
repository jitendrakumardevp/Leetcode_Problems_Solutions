class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        unordered_map<int, int> umap; 
        int longestSub = 0; 
        int size = nums.size();

        for(int i = 0; i < size; i++)
        {
            int num = nums[i];
            umap[num]++; 
        }

        for(auto it: umap)
        {
            int cnum = it.first;
            int freq = it.second; 
            
            if(umap.find(cnum+1) != umap.end())
            {
                int current = umap[cnum] + umap[cnum+1];

                longestSub = max(longestSub, current);
            }
                
        }



        return longestSub;
    }
};
