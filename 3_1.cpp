#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	char s[] = "We-Are-Ffff.";
//	char* tmp = strtok(s, "-");
//	printf("%s\n", tmp);
//	while (tmp != NULL)
//	{
//		tmp = strtok(NULL, "-");
//		printf("%s\n", tmp);
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int p1 = 0;
        int p2 = 0;
        vector<vector<int>> v;
        while (p1 < nums1.size() && p2 < nums2.size()) {
            //  if(nums1[p1] != nums2[p2]){
              //    if(nums2[p2] > nums2[p1]){
            v[0].push_back(nums1[p1]);
            p1++;
            //  }else {
            v[1].push_back(nums2[p2]);
            p2++;
            //       }
              // }else{
                  // v[0].push_back(nums1[p1]);
                //   v[1].push_back(nums1[p2]);
                   //p1++;
                   //p2++;
              // }

        }
        return v;
    }
    //int main() {
    //    vector<int>num1 = { 1,2,3 };
    //    vector<int>num2 = { 2,4,6 };
    //    findDifference(num1, num2);
    //}
};