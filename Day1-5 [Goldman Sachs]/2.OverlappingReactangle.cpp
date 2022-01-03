/*
Overlapping rectangles 
Easy Accuracy: 32.68% Submissions: 6752 Points: 2
Given two rectangles, find if the given two rectangles overlap or not. A rectangle is denoted by providing the x and y 
coordinates of two points: the left top corner and the right bottom corner of the rectangle. Two rectangles sharing a side are considered overlapping.
(L1 and R1 are the extreme points of the first rectangle and L2 and R2 are the extreme points of the second rectangle).

Note: It may be assumed that the rectangles are parallel to the coordinate axis.

rectanglesOverlap

Example 1:

Input:
L1=(0,10)
R1=(10,0)
L2=(5,5)
R2=(15,0)
Output:
1
Explanation:
The rectangles overlap.
Example 2:

Input:
L1=(0,2)
R1=(1,1)
L2=(-2,-3)
R2=(0,2)
Output:
0
Explanation:
The rectangles do not overlap.
*/

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        return min(R1[0],R2[0])>=max(L1[0],L2[0]) && min(L1[1],L2[1])>=max(R1[1],R2[1]);
    }
};
