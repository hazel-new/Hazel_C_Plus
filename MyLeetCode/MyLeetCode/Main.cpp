#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;


//283.移动零，双指针
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int n = nums.size(), left = 0, right = 0;
//        while (right < n) {
//            if (nums[right]) {
//                swap(nums[left], nums[right]);
//                left++;
//            }
//            right++;
//        }
//    }
//};

//1.两数之和，哈希
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        int n = nums.size();
//        vector<int> arr;
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                if (nums[i] + nums[j] == target) {
//                    arr.push_back(i);
//                    arr.push_back(j);
//                    return arr;
//                }
//            }
//        }
//        return arr;
//    }
//};

//128.最长连续序列，哈希
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        int maxlen = 1;
        int n = nums.size();

        if (n == 0 || n == 1) {
            return n;
        }

        sort(nums.begin(), nums.end());

        //不用n-1，i+1会超出范围
        for (int i = 0; i < n - 1; ++i) {
            if ((nums[i] + 1) == nums[i + 1]) {
                count++;
                // 数组里可能会有多个连续序列
                if (count > maxlen) {
                    maxlen = count;
                }
                //[9,1,4,7,3,-1,0,5,8,-1,6]有两个连续序列的情况，要重新计数，选长的一个
            }
            else if (nums[i] != nums[i + 1]) {
                count = 1;
            }
        }
        return maxlen;
    }
};

int main()
{
    Solution S;

    //283.移动零，双指针
    //vector<int> nums = {0,1,0,3,12};
    //S.moveZeroes(nums);
    //for (const auto& c : nums) cout << c << " ";

    ////1.两数之和，哈希
    //vector<int> nums = { 3,2,4 };
    //int target = 6;
    //vector<int> arr = S.twoSum(nums, target);
    //for (const auto& c : arr) cout << c << " ";

    //128.最长连续序列，哈希
    vector<int> nums = {9,1,4,7,3,-1,0,5,8,-1,6};
    //sort(nums.begin(), nums.end());
    //for (const auto& c : nums) cout << c << " ";
    int maxlen = S.longestConsecutive(nums);
    cout << maxlen << endl;



    

}