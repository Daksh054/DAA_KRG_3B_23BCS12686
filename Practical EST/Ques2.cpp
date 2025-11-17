#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int n = arr.size();
        if (n == 0) return 0;

        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int i = 0;            
        int j = 0;            
        int platforms = 0;    
        int maxPlatforms = 0; 

        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                platforms++;
                maxPlatforms = max(maxPlatforms, platforms);
                i++;
            } else {
                platforms--;
                j++;
            }
        }

        return maxPlatforms;
    }
};