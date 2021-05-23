class Solution {
    public int romanToInt(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        map.put('I',1);
        map.put('V',5);
        map.put('X',10);
        map.put('L',50);
        map.put('C',100);
        map.put('D',500);
        map.put('M',1000);
        int result = 0;
        int i = 0;

        while(i < s.length()) {
            int c = map.get(s.charAt(i));
            int next = 'a';
            if((i+1 >= s.length()) || ((next = map.get(s.charAt(i+1))) <= c)){
                result += c ;
            } else {
                result += next - c;
                i++;
            }
            i++;
        }
        return result;
    }
}