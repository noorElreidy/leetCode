
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    int p_m = m - 1;
    int p_n = n - 1 ;
    int p_end = m + n - 1;

    while ( p_m > -1 && p_n > -1  ){
        if (nums1[p_m] > nums2[p_n]){
            nums1[p_end] = nums1[p_m];
            p_m--;

        }else {
            nums1[p_end] = nums2[p_n];
            p_n--;
        }
        p_end--;
    }

    while (p_n > -1){
        nums1[p_end] = nums2[p_n];
        p_n --; 
        p_end --;
    }
    
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0}; 
    int m = 3; 
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3; 

    merge(nums1, m, nums2, n);

    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}