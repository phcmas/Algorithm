/** Given a list of intervals, remove all intervals that are covered by another interval in the list.
 *  Interval [a,b) is covered by interval [c,d) if and only if c <= a and b <= d.
 *  After doing so, return the number of remaining intervals.
 *  
 *  Example 1:
 *  Input: intervals = [[1,4],[3,6],[2,8]]
 *  Output: 2
 *  Explanation: Interval [3,6] is covered by [2,8], therefore it is removed.
 * 
 *  Example 2:
 *  Input: intervals = [[1,4],[2,3]]
 *  Output: 1
 * 
 *  Example 3:
 *  Input: intervals = [[0,10],[5,12]]
 *  Output: 2
 * 
 *  Example 4:
 *  Input: intervals = [[3,10],[4,10],[5,11]]
 *  Output: 2
 * 
 *  Example 5:
 *  Input: intervals = [[1,2],[1,4],[3,4]]
 *  Output: 1
 * 
 *  Constraints:
 *  1 <= intervals.length <= 1000
 *  intervals[i].length == 2
 *  0 <= intervals[i][0] < intervals[i][1] <= 10^5
 *  All the intervals are unique. **/

/** 1004.cc 에서 풀었던게 O(n^2), 이 풀이는 discussion에서 가져온 것으로 O(nlogn) **/

#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

static bool comp (vector<int> &a, vector<int> &b) {
    if (a[0] != b[0]) {
        return a[0] < b[0];
    } else {
        return a[1] > b[1];
    }
}

int removeCoveredIntervals(vector<vector<int>>& intervals) {
    sort (intervals.begin(), intervals.end(), comp);

    int max_end = intervals[0][1];
    int covered_interval = 0;

    for (int i=1; i < intervals.size(); ++i) {
        if (intervals[i][1] <= max_end) {
            covered_interval++;
        } else {
            max_end = intervals[i][1];
        }
    }

    return intervals.size()-covered_interval;
}

int main() {
    vector<int> inter1 {1, 2};
    vector<int> inter2 {1, 4};
    vector<int> inter3 {3, 4};

    vector<vector<int>> intervals;
    intervals.push_back(inter1);
    intervals.push_back(inter2);
    intervals.push_back(inter3);
    int answer = removeCoveredIntervals(intervals);

    cout << answer << endl;

    return 0;
}