// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> range(2);
//         int low = 0;
//         int high = nums.size() -1;
//         int lb = -1;
//         int ub = -1;
//         while(low<=high)
//         {
//             int mid = low + (high - low )/2;
//             if(nums[mid]>=target)
//             {
//                 if(nums[mid]==target) lb = mid;
//                 high = mid -1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         low = 0;
//         high = nums.size() -1;
//         while(low<=high)
//         {
//             int mid = low + (high - low )/2;
//             if(nums[mid]<=target)
//             {
//                 if(nums[mid]==target) ub = mid;
//                 low = mid +1;

//             }
//             else
//             {
//                 high = mid -1;
//             }
//         }
//         range[0] = lb;
//         range[1] = ub;
//         return range;
//     }
// };

