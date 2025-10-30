// class Solution {
//     public:
//         void nextPermutation(vector<int>& nums) {
//           int n=nums.size();
//           int i=n-2;
//           int j=n-1;
//           int t=1;
//           for(int k=1;k<n;k++){
//             if(nums[k-1]<nums[k]){
//                 t=0;
//             }
//           }
//           if(t==1){
//             int st=0;
//             int end=n-1;
//             while(st<end){
//                 swap(nums[st],nums[end]);
//                 st++;
//                 end--;
//             }
//           }
//           if(t==0){
//             while(i>=0 && j>0){
//                 if(nums[i]>nums[j])
//                 swap(nums[j],nums[i]);
//                 break;
//                 if(nums[j]<nums[i]){
//                     i--;
//                     if(i<0){
//                         i++;
//                         j--;
//                     }
//                 }
//             }
//           }  
          
//         }
//     };