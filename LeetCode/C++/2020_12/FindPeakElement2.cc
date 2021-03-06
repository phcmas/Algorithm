/* 162. Find Peak Element */
/** A peak element is an element that is strictly greater than its neighbors.
 *  Given an integer array nums, find a peak element, and return its index. 
 *  If the array contains multiple peaks, return the index to any of the peaks.
 *  You may imagine that nums[-1] = nums[n] = -∞.
 * 
 *  Example 1:
 *  Input: nums = [1,2,3,1]
 *  Output: 2
 *  Explanation: 3 is a peak element and your function should return the index number 2.
 * 
 *  Example 2:
 *  Input: nums = [1,2,1,3,5,6,4]
 *  Output: 5
 *  Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
 *  
 *  Constraints:
 *  1 <= nums.length <= 1000
 *  -2^31 <= nums[i] <= 2^31 - 1
 *  nums[i] != nums[i + 1] for all valid i. **/

#include <vector>
#include <iostream>

using namespace std;

int search(vector<int>& nums, int left, int right) {
    int middle = (left + right) / 2;

    if (left == right) return left;

    if (nums[middle] > nums[middle + 1]) {
        return search(nums, left, middle);
    } 

    return search(nums, middle+1, right);
}

int findPeakElement(vector<int>& nums) {
    return search(nums, 0 , nums.size()-1);
}

int main() {
    vector<int> nums1 {1,2,3,1};
    vector<int> nums2 {1,2,1,3,5,6,4};
    
    int answer1 = findPeakElement(nums1);
    int answer2 = findPeakElement(nums2);

    cout << answer1 << endl;
    cout << answer2 << endl;

    return 0;
}


