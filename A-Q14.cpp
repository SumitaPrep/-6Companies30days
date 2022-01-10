class Solution {
  public:
   int ans=0,p=0,fh;
    bool done=false;
    int solve(Node* root){
        
        if(!root)return 0;
        
        int l=1+solve(root->left);
        int r=1+solve(root->right);
        
        return max(l,r);
    }
    
    void path(Node* root,int t,int mh){
        
        if(!root)return;
        
        // cout<<root->data<<" ";
        
        if(root->data==t){
            done=true;
            ans=solve(root)-1;
            fh=mh;
            // cout<<ans<<" "<<mh<<endl;
            return;
        }
        
        path(root->left,t,mh+1);
        if(done){
            int h=solve(root->right);
            ans=max(ans,h+fh-mh);
            return;
        }
        path(root->right,t,mh+1);
        
        if(done){
            int h=solve(root->left);
            ans=max(ans,h+fh-mh);
            return;
        }

        
    }
  
    int minTime(Node* root, int t) 
    {
        
        ans=0;
        
        path(root,t,0);
        
        return ans;
    }
};