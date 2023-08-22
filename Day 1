#include<iostream>
using namespace std;
int max_area(int height[],int n)
{
    int left=0 , right=n-1 , max_water=0;
    while (left<right)
    {
        int height_of_container = min(height[left],height[right]);
        int width_of_container = right-left;
        max_water = max(max_water,height_of_container*width_of_container);
        if(height[left]<height[right])
        left++;
        else
        right--;
    }
    return max_water;
}
