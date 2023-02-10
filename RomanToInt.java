//47 ms , 42.7 MB 
// time of O(n)

import java.util.HashMap;

public class RomanToInt {

    static int getInteger(char c)
    {
        switch(c)
        {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return -1;
        }
    }

    public static int romanToInt(String roman){

        HashMap<Character,Integer> map = new HashMap<>();
        map.put('I',1);
        map.put('V',5);
        map.put('X',10);
        map.put('L',50);
        map.put('C',100);
        map.put('D',500);
        map.put('M',1000);

        //MCMXCIV
        int pointer = roman.length()-1;
        int sum = 0 ; 

        while (pointer > -1){

            int val = getInteger(roman.charAt(pointer)); 
            if (pointer > 0 ){ 
                 int pre = getInteger(roman.charAt(pointer-1));
                 if (pre < val){
                    val -= pre ; 
                    pointer -- ;
                 } 
            }
            sum += val ;
            System.out.println(sum);
            pointer -- ; 


        }
         return sum ; 
        







    }

    public static void main( String args []){
        System.out.println(romanToInt("MCMXCIV"));

    }
}