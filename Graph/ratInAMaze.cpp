class Solution{
    public:
    
    bool findPath(vector<vector<int>> &m, int r, int c, string path, vector<vector<bool>> visited, vector<string> &res){
        if(r >= 0 && r < m.size() and c >= 0 and c < m[0].size() and m[r][c] != 0){
            if(visited[r][c] == true){
                return false;
            }
            visited[r][c] = true;
            if(r == m.size()-1 and c == m[0].size()-1){
               
                res.push_back(path);
                return true;
            }
            findPath(m, r + 1 , c, path + 'D', visited, res);
            
            findPath(m, r , c - 1, path + 'L', visited, res);
            
            findPath(m, r , c + 1, path + 'R', visited, res);
            
            findPath(m, r - 1 , c, path + 'U', visited, res);
        }
        else{
            return false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        findPath(m, 0 , 0 , "", visited, res);
        
        
        return res;
    }
};class Solution{
    public:
    
    bool findPath(vector<vector<int>> &m, int r, int c, string path, vector<vector<bool>> visited, vector<string> &res){
        if(r >= 0 && r < m.size() and c >= 0 and c < m[0].size() and m[r][c] != 0){
            if(visited[r][c] == true){
                return false;
            }
            visited[r][c] = true;
            if(r == m.size()-1 and c == m[0].size()-1){
               
                res.push_back(path);
                return true;
            }
            findPath(m, r + 1 , c, path + 'D', visited, res);
            
            findPath(m, r , c - 1, path + 'L', visited, res);
            
            findPath(m, r , c + 1, path + 'R', visited, res);
            
            findPath(m, r - 1 , c, path + 'U', visited, res);
        }
        else{
            return false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        findPath(m, 0 , 0 , "", visited, res);
        
        
        return res;
    }
};class Solution{
    public:
    
    bool findPath(vector<vector<int>> &m, int r, int c, string path, vector<vector<bool>> visited, vector<string> &res){
        if(r >= 0 && r < m.size() and c >= 0 and c < m[0].size() and m[r][c] != 0){
            if(visited[r][c] == true){
                return false;
            }
            visited[r][c] = true;
            if(r == m.size()-1 and c == m[0].size()-1){
               
                res.push_back(path);
                return true;
            }
            findPath(m, r + 1 , c, path + 'D', visited, res);
            
            findPath(m, r , c - 1, path + 'L', visited, res);
            
            findPath(m, r , c + 1, path + 'R', visited, res);
            
            findPath(m, r - 1 , c, path + 'U', visited, res);
        }
        else{
            return false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        findPath(m, 0 , 0 , "", visited, res);
        
        
        return res;
    }
};class Solution{
    public:
    
    bool findPath(vector<vector<int>> &m, int r, int c, string path, vector<vector<bool>> visited, vector<string> &res){
        if(r >= 0 && r < m.size() and c >= 0 and c < m[0].size() and m[r][c] != 0){
            if(visited[r][c] == true){
                return false;
            }
            visited[r][c] = true;
            if(r == m.size()-1 and c == m[0].size()-1){
               
                res.push_back(path);
                return true;
            }
            findPath(m, r + 1 , c, path + 'D', visited, res);
            
            findPath(m, r , c - 1, path + 'L', visited, res);
            
            findPath(m, r , c + 1, path + 'R', visited, res);
            
            findPath(m, r - 1 , c, path + 'U', visited, res);
        }
        else{
            return false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        findPath(m, 0 , 0 , "", visited, res);
        
        
        return res;
    }
};class Solution{
    public:
    
    bool findPath(vector<vector<int>> &m, int r, int c, string path, vector<vector<bool>> visited, vector<string> &res){
        if(r >= 0 && r < m.size() and c >= 0 and c < m[0].size() and m[r][c] != 0){
            if(visited[r][c] == true){
                return false;
            }
            visited[r][c] = true;
            if(r == m.size()-1 and c == m[0].size()-1){
               
                res.push_back(path);
                return true;
            }
            findPath(m, r + 1 , c, path + 'D', visited, res);
            
            findPath(m, r , c - 1, path + 'L', visited, res);
            
            findPath(m, r , c + 1, path + 'R', visited, res);
            
            findPath(m, r - 1 , c, path + 'U', visited, res);
        }
        else{
            return false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        findPath(m, 0 , 0 , "", visited, res);
        
        
        return res;
    }
};class Solution{
    public:
    
    bool findPath(vector<vector<int>> &m, int r, int c, string path, vector<vector<bool>> visited, vector<string> &res){
        if(r >= 0 && r < m.size() and c >= 0 and c < m[0].size() and m[r][c] != 0){
            if(visited[r][c] == true){
                return false;
            }
            visited[r][c] = true;
            if(r == m.size()-1 and c == m[0].size()-1){
               
                res.push_back(path);
                return true;
            }
            findPath(m, r + 1 , c, path + 'D', visited, res);
            
            findPath(m, r , c - 1, path + 'L', visited, res);
            
            findPath(m, r , c + 1, path + 'R', visited, res);
            
            findPath(m, r - 1 , c, path + 'U', visited, res);
        }
        else{
            return false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        findPath(m, 0 , 0 , "", visited, res);
        
        
        return res;
    }
};class Solution{
    public:
    
    bool findPath(vector<vector<int>> &m, int r, int c, string path, vector<vector<bool>> visited, vector<string> &res){
        if(r >= 0 && r < m.size() and c >= 0 and c < m[0].size() and m[r][c] != 0){
            if(visited[r][c] == true){
                return false;
            }
            visited[r][c] = true;
            if(r == m.size()-1 and c == m[0].size()-1){
               
                res.push_back(path);
                return true;
            }
            findPath(m, r + 1 , c, path + 'D', visited, res);
            
            findPath(m, r , c - 1, path + 'L', visited, res);
            
            findPath(m, r , c + 1, path + 'R', visited, res);
            
            findPath(m, r - 1 , c, path + 'U', visited, res);
        }
        else{
            return false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        findPath(m, 0 , 0 , "", visited, res);
        
        
        return res;
    }
};class Solution{
    public:
    
    bool findPath(vector<vector<int>> &m, int r, int c, string path, vector<vector<bool>> visited, vector<string> &res){
        if(r >= 0 && r < m.size() and c >= 0 and c < m[0].size() and m[r][c] != 0){
            if(visited[r][c] == true){
                return false;
            }
            visited[r][c] = true;
            if(r == m.size()-1 and c == m[0].size()-1){
               
                res.push_back(path);
                return true;
            }
            findPath(m, r + 1 , c, path + 'D', visited, res);
            
            findPath(m, r , c - 1, path + 'L', visited, res);
            
            findPath(m, r , c + 1, path + 'R', visited, res);
            
            findPath(m, r - 1 , c, path + 'U', visited, res);
        }
        else{
            return false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        findPath(m, 0 , 0 , "", visited, res);
        
        
        return res;
    }
};class Solution{
    public:
    
    bool findPath(vector<vector<int>> &m, int r, int c, string path, vector<vector<bool>> visited, vector<string> &res){
        if(r >= 0 && r < m.size() and c >= 0 and c < m[0].size() and m[r][c] != 0){
            if(visited[r][c] == true){
                return false;
            }
            visited[r][c] = true;
            if(r == m.size()-1 and c == m[0].size()-1){
               
                res.push_back(path);
                return true;
            }
            findPath(m, r + 1 , c, path + 'D', visited, res);
            
            findPath(m, r , c - 1, path + 'L', visited, res);
            
            findPath(m, r , c + 1, path + 'R', visited, res);
            
            findPath(m, r - 1 , c, path + 'U', visited, res);
        }
        else{
            return false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        vector<vector<bool>> visited(n, vector<bool>(n,false));
        findPath(m, 0 , 0 , "", visited, res);
        
        
        return res;
    }
};v
