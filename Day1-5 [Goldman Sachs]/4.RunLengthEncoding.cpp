/*

Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.

Example 1:

Input:
str = aaaabbbccc
Output: a4b3c3
Explanation: a repeated 4 times
consecutively b 3 times, c also 3
times.
Example 2:

Input:
str = abbbcdddd
Output: a1b3c1d4

*/

string encode(string str)
{     
  //Your code here 
  string res="";
  int i=0, j=0;
  int n=str.length();
  while(i<n){
      while(str[i]==str[j] and j< n){
          j++;
      }
      res.push_back(str[i]);
      res+=to_string(j-i);
      i=j;
      
  }
  return res;
} 
