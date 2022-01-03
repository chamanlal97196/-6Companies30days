/* 
Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number k.

Example 1:

Input : 
n = 4, k = 10
a[] = {1, 2, 3, 4}
Output : 
7
Explanation:
The contiguous subarrays are {1}, {2}, {3}, {4} 
{1, 2}, {1, 2, 3} and {2, 3} whose count is 7.
*/


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        int s=0;
        int e=0;
        int res=0;
        int len=0;
        long long p=1;
        for(int e=0; e<n; e++){
            p*=arr[e];
            while(s<e and p>=k){
                p/=arr[s];
                s++;
            }
            if(p<k){
                len=e-s+1;
                res+=len;
            }
        }
        return res;
    }
};
