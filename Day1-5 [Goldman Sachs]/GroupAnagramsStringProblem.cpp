/* 
Print Anagrams Together 
Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array.
Look at the sample case for clarification.


Example 1:

Input:
N = 5
words[] = {act,god,cat,dog,tac}
Output: 
god dog
act cat tac
Explanation:
There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.
Example 2:

Input:
N = 3
words[] = {no,on,is}
Output: 
no on
is
Explanation:
There are 2 groups of
anagrams "no", "on" make group 1.
"is" makes group 2. 
*/

//Base Approach to solve this problem : make bukets and traverse through bukets . 
// Time complexity : O(nklogk) where k is the word lenght and n is vector string lenght;
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        //code here
        unordered_map<string, vector<string>>mymap;
        int n=str.size();
        for(int i=0; i<n; i++){
            string temp=str[i];
            sort(str[i].begin(), str[i].end());
            mymap[str[i]].push_back(temp);
        }
        vector<vector<string>>res;
        for(auto it : mymap){
            res.push_back(it.second);
        }
        return res;
    }
};

