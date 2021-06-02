vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int minr, minc, maxr, maxc;
        minr = minc = 0;
        maxr = r- 1;
        maxc = c- 1;
        int t = r*c;
        int count = 0;
        vector<int> res;
        while(count < t){
            //top
            for(int i=minc, j = minr; i<=maxc && count < t; i++){
                res.push_back(matrix[j][i]);
                count++;
            }
            minr++;
            //right
            for(int i=minr, j = maxc; i<=maxr && count < t; i++){
                res.push_back(matrix[i][j]);
                count++;
            }
            maxc--;
            //bottom
            for(int i=maxc, j = maxr; i>=minc && count < t; i--){
                res.push_back(matrix[j][i]);
                count++;
            }
            maxr--;
            //left
            for(int i=maxr, j = minc; i>=minr && count < t; i--){
                res.push_back(matrix[i][j]);
                count++;
            }
            minc++;
        }
        return res;
    }
