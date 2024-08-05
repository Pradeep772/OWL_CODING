class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String, Integer> map = new HashMap<>();
        for(String s: arr){
            if(map.containsKey(s))map.put(s, map.get(s)+1);
            else map.put(s, 1);
        }
        int x=  0, i = 0;
        while(i < arr.length){
            if(map.get(arr[i]) == 1)x++;
            if(x == k)return arr[i];
            i++;
        }
        return "";
    }
}