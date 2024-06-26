#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
void printSortedArray(vector<int>&nums){
    for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<" ";
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
     nums.resize(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sortColors(nums);
    printSortedArray(nums);
    return 0;
}