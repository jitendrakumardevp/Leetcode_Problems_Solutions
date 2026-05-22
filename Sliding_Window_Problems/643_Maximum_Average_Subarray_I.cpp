/*
  Brute Force Solution - 
  Time Limit Exceeded 125 / 128 testcases passed
*/

  double findMaxAverage(vector<int>& nums, int k) {
        
        double maxSubArray = INT_MIN;
        double sum = 0; 
        int numSize =  nums.size();

        if(numSize == 1)
        {
            maxSubArray = nums[0];
        }
        
        for(int i = 0; i <= numSize - k; i++)
        {
            //int temp = k ; 
           for(int j = i ; j < i + k; j++)
            {
                sum += nums[j];
                //temp--;
                
            }

            double currentAvg = sum / k ; 

            if(currentAvg > maxSubArray)
                maxSubArray = currentAvg ;

            sum = 0; 
            
        }
        return maxSubArray;
    }


/*
  Optimal Solution - Using Sliding Window Technique 
  Accepted 128 / 128 testcases passed 
*/

double findMaxAverage(vector<int>& nums, int k) {
        
        double maxSubArrayAvg = INT_MIN;
        double sum = 0; 
        int numSize =  nums.size();

        if(numSize == 1)
        {
            maxSubArrayAvg = nums[0];
        }
        
        //  First window Average. 
        for(int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        
        maxSubArrayAvg = sum / k ;
        
        for(int i = k; i < numSize; i++)
        {
            sum += nums[i]; // add new element 
            sum -= nums[i-k]; // remove old element

            double currentAvg = sum / k ; 

            if(currentAvg > maxSubArrayAvg)
                maxSubArrayAvg = currentAvg ;

            
        }
        return maxSubArrayAvg;
    }

