class Solution {
    public static boolean isFrequencyUnique(int n, int[] arr) {
        // code here
        HashMap<Integer,Integer> hm=new HashMap<>();
        for(int i:arr){
            hm.put(i,hm.getOrDefault(i,0)+1);
        }
        HashSet<Integer> hs=new HashSet<>();
        for(int i:hm.values()){
            if(hs.contains(i))return false;
            hs.add(i);
        }
        return true;
    }
}
