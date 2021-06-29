vector <int> bottomView(Node *root)
{
   if(!root) return vector<int>();
   unordered_map<int, vector<int> > map;
   vector<int> res;
   queue<pair<Node*, int>> q;
   q.push({root, 0});
   int min, max ; min = max = 0;
   while(!q.empty()){
       int size = q.size();
       
       for(int i=0 ;i<size; i++){
           Node* cur = q.front().first;
           int level = q.front().second;
           q.pop();
           if(map[level].size() == 0){
               map[level] = vector<int>();
               map[level].push_back(cur->data);
           }
           else {
               map[level].push_back(cur->data);
           }
           if(level < min) min = level;
           if(level > max) max = level;
           if(cur->left != NULL){
               q.push({
                   cur->left,
                   level - 1
               });
           }
           if(cur->right != NULL){
               q.push({
                   cur->right,
                   level + 1
               });
           }
           
       }
   }
   
   for(int i = min; i<= max; i++){
       /*for(int j=0; j<map[i].size(); j++){
            cout<<map[i][j] << " ";
       }
       cout<< endl;*/
       int size = map[i].size();
       
       if(size > 0)res.push_back(map[i][size - 1]);
   }
   return res;
}
