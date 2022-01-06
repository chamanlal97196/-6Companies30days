//Similar to find Kth largest/Smallest Element 

//a Simple solution is to be sort the given array But its having time complexity O(NlogN)

//Efficient solution is to Be : using max heap and store only 10 elements in heap if size greater than 10 pop out 
// Time complexity : O(N + klogN)  

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	// printf("Hello, World\n");
	vector<int>arr={11, 34, 13, 8, 5, 99, 66, 7, 34, 45};
	priority_queue<int>pq;
	for(int i=0; i<arr.size(); i++){
		pq.push(-arr[i]);
		if(pq.size()>3){
			pq.pop();
		}
	}
	while((pq.size())){
		cout<<-pq.top()<<" ";
		pq.pop();
	}
	return 0;
	
}
