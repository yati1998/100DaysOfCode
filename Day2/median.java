// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        
        int i=0,j=0,k=0;
        int s1=nums1.length;
        int s2=nums2.length;
        int[] finalArr = new int[s1+s2+1];
    while(i<s1 && j < s2){
        if(nums1[i] < nums2[j]){
            finalArr[k]=nums1[i++];
            k++;
        }
        else if(nums1[i]==nums2[j])
        {
             finalArr[k]=nums1[i++];
            k++;
             finalArr[k]=nums2[j++];
            k++;
            
        }
        else{
            finalArr[k]=nums2[j++];
            k++;}
    }
    while(i < s1){
        finalArr[k]=nums1[i++];
    k++;}
    while(j < s2){
        finalArr[k]=nums2[j++];
    k++;}
    
        
     
        double res;
        if(k % 2 == 0)
        {
            res = (double)(finalArr[k/2] + finalArr[(k/2)-1]) / 2;
        } 
        else
        {
            res = (double)finalArr[(k/2)];
        }
    return res;
        
    }
}