class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        
        HashMap<Integer,Integer> map = new HashMap();
        
        Integer n = nums.length;
        
        for( int i=0;i<n;i++ ){
            
            if( map.containsKey(nums[i]) ){
                
                if( i - map.get(nums[i]) <= k ){
                    return true;
                }
                
            }
            
            map.put(nums[i],i);
        }
        return false;
    }
}
