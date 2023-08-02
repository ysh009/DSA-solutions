void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // transpose a matrix and then reverse each row to get
        // 90 degeree roatated matrix

        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
