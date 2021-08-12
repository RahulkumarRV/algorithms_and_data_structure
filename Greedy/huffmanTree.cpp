class hufmanNode
{
    public:
        int freq;
        char data;
        hufmanNode* left;
        hufmanNode* right;
        hufmanNode(char data, int freq){
            this->data = data;
            this->freq = freq;
            left = NULL;
            right = NULL;
        }
};

class comparetor{
    public:
        bool operator()(hufmanNode* a, hufmanNode * b){
            return a->freq > b->freq;
        }
};

hufmanNode* genrateTree(priority_queue<hufmanNode*, vector<hufmanNode*>, comparetor> pq){
    while(pq.size() != 1){
        hufmanNode* left = pq.top(); pq.pop();
        hufmanNode* right = pq.top(); pq.pop();

        hufmanNode* node = new hufmanNode('$', left->freq + right->freq);
        node->left = left;
        node->right = right;
        pq.push(node);

    }
    return pq.top();
}

void printHufmanTree(hufmanNode* root, int arr[], int top, vector<string> &res){
    if(root->left){
        arr[top] = 0;
        printHufmanTree(root->left, arr, top+1, res);
    }
    if(root->right){
        arr[top] = 1;
        printHufmanTree(root->right, arr, top+1, res);
    }
    if(!root->left and !root->right){
        string s = "";
        for(int i=0; i<top; i++){
            s += to_string(arr[i]);
        }
        res.push_back(s);
    }
}
vector<string> huffmanCodes(string S,vector<int> f,int N)
{
    vector<string> res;
    priority_queue<hufmanNode*, vector<hufmanNode*>, comparetor> pq;
    for(int i=0; i<N; i++){
        hufmanNode* node = new hufmanNode(S[i], f[i]);
        pq.push(node);
    }
    hufmanNode* root = genrateTree(pq);
    int arr[100]; int top = 0;
    printHufmanTree(root, arr, top, res);
    return res;
}
