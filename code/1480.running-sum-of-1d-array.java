class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> ret= new ArrayList<>();
        int max=Integer.MIN_VALUE;
        for(int i: candies){
            if(i>max) max=i;
        }
        for(int i:candies){
            if(i+extraCandies >= max)
                ret.add(true);
            else
                ret.add(false);
        }
        return ret;
        
    }
}