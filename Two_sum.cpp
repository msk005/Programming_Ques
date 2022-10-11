 #include<bits/stdc++.h>
 using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>ans;
        int elmnt;
        for(int i=0;i<nums.size();i++)
        {
            elmnt=target-nums[i];
            if(m.find(elmnt)!=m.end())
            {
                 ans.push_back(m[elmnt]);
                 ans.push_back(i);
                     return ans;
            }
            
        
        
          m[nums[i]]=i;     
        }
       return ans;
    }
 int main()
 {
    int n;
    cin>>n;
    vector<int>nums(n);
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
 
  vector<int>ans= twoSum(nums,target);
   for(int i=0;i<ans.size();i++)
         cout<<ans[i]<<" ";
  return 0;
   
 }
 
 
