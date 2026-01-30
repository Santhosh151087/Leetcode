class Solution {
    public List<Integer> luckyNumbers(int[][] matrix) {
        List<Integer> ans = new ArrayList<>();
        int n = matrix.length;
        int m = matrix[0].length;
        int [] row = new int [n];
        int [] col = new int [m];
        for(int i=0;i<n;i++){
            int min = Integer.MAX_VALUE;
            for(int j=0;j<m;j++){
                min = Math.min(min,matrix[i][j]);
            }
            row[i] = min;
        }
        for(int j=0;j<m;j++){
            int max = Integer.MIN_VALUE;
            for(int i=0;i<n;i++){
                max = Math.max(max,matrix[i][j]);
            }
            col[j] = max;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(row[i]==col[j])
               ans.add(row[i]);
            }
        }
        return ans;
        
    }
}
