class Solution {
public:
    bool isSafe(int sr, int sc, int r, int c){
        if(sr >= 0 and sc >= 0 and sr < r and sc < c){
            return true;
        }
        else return false;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue<pair<int, int>> q;
        q.push({sr, sc});
        int r = image.size(), c = image[0].size();
        vector<vector<bool>> visited(r, vector<bool>(c, false));
        visited[sr][sc] = true;
        int needColor = image[sr][sc];
        while(!q.empty()){
            pair<int, int> cur = q.front();
            q.pop();
            
            int f = cur.first, s = cur.second;
            image[f][s] = newColor;
            if(isSafe(f - 1 , s, r, c) and !visited[f - 1][s] and image[f-1][s] == needColor){
                visited[f - 1][s] = true;
                q.push({f-1, s});
            }
            if(isSafe(f + 1 , s, r, c) and !visited[f + 1][s] and image[f+1][s] == needColor){
                visited[f + 1][s] = true;
                q.push({f+1, s});
            }
            if(isSafe(f , s - 1, r, c) and !visited[f][s - 1] and image[f][s - 1] == needColor){
                visited[f][s - 1] = true;
                q.push({f, s - 1});
            }
            if(isSafe(f , s + 1, r, c) and !visited[f][s + 1] and image[f][s + 1] == needColor){
                visited[f][s + 1] = true;
                q.push({f, s + 1});
            }
            
        }
        return image;
    }
};
