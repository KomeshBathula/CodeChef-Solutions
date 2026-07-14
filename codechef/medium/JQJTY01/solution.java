    public static int calculateSumOfSubarrayMinimums(int[] inputArray) {
        int sum = 0;
        int n = inputArray.length;
        
        for (int i = 0; i < n; i++) {
            int min = (int)1e9;
            for (int j = i; j < n; j++) {
                min = Math.min(min, inputArray[j]);
                sum += min;
            }
            
            
        }
        
        return sum;
    }