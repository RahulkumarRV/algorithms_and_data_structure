vector<vector<int>> sortedMatrix(int n, vector<vector<int>> Mat) {
        vector<int> t(n*n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                t[i*n + j] = (Mat[i][j]);
            }
        }
        sort(t.begin(), t.end());
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                Mat[i][j] = t[i*n + j];
            }
        }
        return Mat;
    }
