 bool canPair(vector<int> nums, int k) {
        
        unordered_map<int, int>mp;
        int rem, freq;
        for(auto a : nums){
            mp[a%k]++;
            
        }
        if(mp[0]%2!=0) return false;
        
        for(auto x : mp){
            rem=x.first;
            freq=x.second;
            if(rem!=0 and mp[k-rem]!=freq) return false;
        }
        return true;
    
    }
