class Solution 
{
    public:
    
	bool isValid(int r, int c, int size){
		if(r >= 0 and c >= 0 and r < size and c < size){
			return true;
		}
		else return false;
	}
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    queue<pair<int, pair<int, int>>> q;
		q.push({KnightPos[0] - 1, {KnightPos[1] - 1, 0}});
		vector<vector<bool>> visited(N, vector<bool>(N, false));
		visited[KnightPos[0] - 1][KnightPos[1] - 1] = true;
		
		while(!q.empty())
		{
			pair<int, pair<int, int>> cur = q.front();
			q.pop();
			int f = cur.first, s = cur.second.first, dis = cur.second.second;
			if(f + 1 == TargetPos[0] and s + 1 == TargetPos[1]){
			    return dis;
			}
			if(isValid(f + 1, s - 2, N) and !visited[f + 1][s - 2]){
				visited[f + 1][s - 2] = true;
				q.push({f + 1,{ s - 2, dis + 1}});
			}
			if(isValid(f - 2, s + 1, N) and !visited[f - 2][s + 1]){
				visited[f - 2][s + 1] = true;
				q.push({f - 2, {s + 1, dis + 1}});
			}
			if(isValid(f + 2, s - 1, N) and !visited[f + 2][s - 1]){
				visited[f + 2][s - 1] = true;
				q.push({f + 2,{ s - 1, dis + 1}});
			}
			if(isValid(f - 1, s - 2, N) and !visited[f - 1][s - 2]){
				visited[f - 1][s - 2] = true;
				q.push({f - 1,{ s - 2, dis + 1}});
			}
			if(isValid(f - 2, s - 1, N) and !visited[f - 2][s - 1]){
				visited[f - 2][s - 1] = true;
				q.push({f - 2,{ s - 1, dis + 1}});
			}
			if(isValid(f - 1, s + 2, N) and !visited[f - 1][s + 2]){
				visited[f - 1][s + 2] = true;
				q.push({f - 1, {s + 2, dis + 1}});
			}
			if(isValid(f + 2, s + 1, N) and !visited[f + 2][s + 1]){
				visited[f + 2][s + 1] = true;
				q.push({f + 2, {s + 1, dis + 1}});
			}
			if(isValid(f + 1, s + 2, N) and !visited[f + 1][s + 2]){
				visited[f + 1][s + 2] = true;
				q.push({f + 1, {s + 2, dis + 1}});
			}
		}
	}
};
