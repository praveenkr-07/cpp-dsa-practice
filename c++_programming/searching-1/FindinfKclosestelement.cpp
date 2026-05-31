
    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        vector<int> v(k);
        int n = arr.size();

        // when x is not present in the array and lesser than arr[0]
        if (x <= arr[0])
        {
            for (int i = 0; i < k; i++)
            {
                v[i] = arr[i];
            }
            return v;
        }

         // when x is not present in the array and greater than arr[n-1]
        if (x >= arr[n - 1])
        {
            int i = n - 1;
            int j = k - 1;
            while (j >= 0)
            {
                v[j] = arr[i];
                j--;
                i--;
            }
            return v;
        }

        // check for x is present or not
        int t = 0; // representing cuurent index of v
        bool flag = false; // x is not present
        int low = 0;
        int high = n - 1;
        int mid = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] == x)
            {
                // lb =mid;
                v[t] = arr[mid];
                t++;
                flag = true;
                break;
            }
            else if (arr[mid] < x)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        } 
        // if target is not found in the array then lb of target = high and ub of target = low
        int lb = high;
        int ub = low;
        if (flag == true)
        {
            lb = mid-1;
            ub = mid+1;
        }
        while (t<k && lb>=0 && ub<=n-1)
        {
            int d1 = abs(arr[lb] - x);
            int d2 = abs(arr[ub] - x);
            if (d1 <= d2)
            {
                v[t] = arr[lb];
                lb--;
            }
            else
            {
                v[t] = arr[ub];
                ub++;
            }
            t++;
        }
        if (lb < 0)
        {
            while (t < k)
            {
                v[t] = arr[ub];
                ub++;
                t++;
            }
        }
        if (ub > n - 1)
        {
            while (t < k)
            {
                v[t] = arr[lb];
                lb--;
                t++;
            }
        }
        sort(v.begin(), v.end());
        
        return v;
    }
    int main(){
    vector<int> arr = {1,1,3,3,3,4,5};
    int x = 3;
    int k = 3;
    cout<<endl;
    vector<int> ans = findClosestElements( arr,  k,  x);
    for(int i = 0 ; i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    }
    
    
