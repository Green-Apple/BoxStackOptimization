BoxStackOptimzation
===================

Dynamic programming solution to Box Stacking problem.

Adapted from http://www.geeksforgeeks.org/dynamic-programming-set-21-box-stacking-problem/

Solution to Algorithm HW.
=========================
Problem:
You are given 'n' boxes each with width 'w', depth 'd' and height 'h'. The boxes cannot be rotated and can only be stacked upon another box if and only if the box being placed on top is smaller then the box its being placed upon in every dimension (w,d,h). Goal is to find the maximum stack height given the above conditions. The problem must be solved with a dynamic programming approach.

Input:
Must be from file using redirected input.
Top number will be the number of boxes 'n' with 3n subsequent lines indicating the width, depth, and height of the 'n' boxes.
Example:
(3, 1,2,3, 4,5,4, 2,2,4)

Output:
The maximum height found:
Example: "Max height is 9"
===========================
Solution created in Visual Studio's Professional. Solution directory uploaded to github.

1. Width, depth, and height stored in structure, and then box structures stored in array of structures
2. Sorted "boxes" by base area in descending order
3. Generated MaxHeight(i) array intially storing each boxes height into correlating array index in MaxHeight
