public:
    void solve(struct Node* node, int &height, int psedo){
        if(node->left == NULL && node->right == NULL){
            psedo = psedo + 1;
            if(height < psedo){
                height = psedo;
            }
            return ;
        }
        if(node-> left != NULL){
            psedo = psedo + 1;
            solve(node->left, height, psedo);
            psedo = psedo - 1;
        }
        if(node->right != NULL){
            psedo = psedo+1;
            solve(node->right, height, psedo);
            psedo = psedo - 1;
        }
        
    }
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node->left == NULL && node->right == NULL){
           
            return 1;
        }
        int a = 0;
        int psedo = 0;
        solve(node, a, psedo);
        return a;
    }
