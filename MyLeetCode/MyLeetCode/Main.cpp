#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;


//283.�ƶ��㣬˫ָ��
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

//1.����֮�ͣ���ϣ
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

//128.��������У���ϣ
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

        //����n-1��i+1�ᳬ����Χ
        for (int i = 0; i < n - 1; ++i) {
            if ((nums[i] + 1) == nums[i + 1]) {
                count++;
                // ��������ܻ��ж����������
                if (count > maxlen) {
                    maxlen = count;
                }
                //[9,1,4,7,3,-1,0,5,8,-1,6]�������������е������Ҫ���¼�����ѡ����һ��
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

    //283.�ƶ��㣬˫ָ��
    //vector<int> nums = {0,1,0,3,12};
    //S.moveZeroes(nums);
    //for (const auto& c : nums) cout << c << " ";

    ////1.����֮�ͣ���ϣ
    //vector<int> nums = { 3,2,4 };
    //int target = 6;
    //vector<int> arr = S.twoSum(nums, target);
    //for (const auto& c : arr) cout << c << " ";

    //128.��������У���ϣ
    vector<int> nums = {9,1,4,7,3,-1,0,5,8,-1,6};
    //sort(nums.begin(), nums.end());
    //for (const auto& c : nums) cout << c << " ";
    int maxlen = S.longestConsecutive(nums);
    cout << maxlen << endl;



    

}