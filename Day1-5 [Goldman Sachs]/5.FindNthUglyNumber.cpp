/* 


Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

Example 1:

Input:
N = 10
Output: 12
Explanation: 10th ugly number is 12.
Example 2:

Input:
N = 4
Output: 4
Explanation: 4th ugly number is 4.

*/

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set<long long int>s;
	    s.insert(1);
	    n--;
	    while(n--){
	        auto it = s.begin();
	        long long int a=*it;
	        s.erase(it);
	        s.insert(a*2);
	        s.insert(a*3);
	        s.insert(a*5);
	    }
	    return *s.begin();
	    
	}
};
