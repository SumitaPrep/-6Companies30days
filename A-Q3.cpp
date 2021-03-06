public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        int i=0, j=0;
        vector<int> ans;
        list<int> l;
        while(j<n) {
            while(!l.empty() && l.back()<arr[j]) l.pop_back();
            l.push_back(arr[j]);
            if(j-i+1<k) j++;
            else if(j-i+1==k) {
                ans.push_back(l.front());
                if(arr[i]==l.front()) l.pop_front();
                i++; j++;
            }
        }
        return ans;
    }