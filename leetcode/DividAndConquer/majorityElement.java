import java.util.Map.Entry;
class Solution {
    public int majorityElement(int[] nums) {
       Map<Integer, Integer> ans = new HashMap<Integer, Integer>();
	    	 
	    	 for(int i : nums) {
	    		 if(!ans.containsKey(i)) ans.put(i, 1);
	    		 else {
	    			 ans.put(i, ans.get(i) + 1);
	    		 }
	    	 }
	    
	    	 int maxValueInMap=(Collections.max(ans.values()));
	    	 for (Entry<Integer, Integer> entry : ans.entrySet()) { 
	              if (entry.getValue()==maxValueInMap) {
	            	  return (entry.getKey());
	            	      // Print the key with max value
	              }
	          }
	   
	   
	    	
			return  0;
    }
}