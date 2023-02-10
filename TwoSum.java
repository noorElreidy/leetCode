//Runtime of 1 ms, memory of 42.3 MB
//Time of O(n) 
import java.util.HashMap;


public class TwoSum{

    public int[] result(int[] nums, int target){

        int[] indices = {-1,-1};
        
        //map to store value, index of number in array 
        HashMap<Integer,Integer> map = new HashMap<>();

        for ( int i = 0 ; i < nums.length ; i ++){
            int difference = target - nums[i];
            //if can find difference in map, get index
            if ( map.containsKey(difference)){ 
                indices[0] = i ; 
                indices[1] = map.get(difference); 
                return indices ;
            }
            map.put(nums[i], i);

         
        }
        return indices ;



    }
    
    public static void main( String args []){

    }
}