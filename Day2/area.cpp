//You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
//Find two lines that together with the x-axis form a container, such that the container contains the most water.
//Return the maximum amount of water a container can store.
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0; int r=n-1;
        int maxi=INT_MIN;
        while(l<r)
        {
            if(height[l]==height[r])
            {
                maxi=max(maxi,(r-l)*(height[l]));
                l++; r--;
            }
            else
            {
                if(height[l]<height[r])
                {
                    maxi=max(maxi,(r-l)*(height[l]));
                    l++;
                }
                else
                {
                    maxi=max(maxi,(r-l)*(height[r]));
                    r--;
                }
            }
        }
        return maxi;
    }
};