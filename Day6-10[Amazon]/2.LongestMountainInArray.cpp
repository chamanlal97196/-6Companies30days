/*
You may recall that an array arr is a mountain array if and only if:

arr.length >= 3
There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given an integer array arr, return the length of the longest subarray, which is a mountain. Return 0 if there is no mountain subarray.

 

Example 1:

Input: arr = [2,1,4,7,3,2,5]
Output: 5
Explanation: The largest mountain is [1,4,7,3,2] which has length 5.
Example 2:

Input: arr = [2,2,2]
Output: 0
Explanation: There is no mountain.
*/


class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n=arr.size();
        
        int ans=0;
        
        //1 start and n-2 end 
        
        for(int i=1; i<=n-2;){
            //compair with nearest element in order to cheak this element is peak or not  : 
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
                int j=i;
                int count=1;
                while(j>0 and arr[j]>arr[j-1]){
                    j--;
                    count++;
                }
                
                while(i<n-1 and arr[i]>arr[i+1]){
                    i++;
                    count++;
                }
                ans = max(ans, count);
            }
            else{
                i++;
            }
        }
        return ans;
        
    }
};
