// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
//         int m = rowIndex ;
//         vector<vector<int>> v;
//         vector<int> ans(rowIndex + 1);
//         for(int i = 0 ; i < m+1 ; i++)
//         {
//             vector<int> a(1+i);
//             v.push_back(a);
//             for(int j = 0 ; j<=i ; j++)
//             {
//                 if(j==0 || j==i)
//                 v[i][j] = 1;
//                 else
//                 v[i][j] =  v[i-1][j] + v[i-1][j-1];
//             }
//         }
//         for(int j = 0 ; j <= rowIndex ; j++ )
//         {
//             ans[j] = v[rowIndex][j];
//         }
//         return ans;
//     }

// };

