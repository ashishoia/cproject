 bool cut(int c,vector<int>& arr,int x){
        int n = arr.size();
        int y = 0;
        for(int i=0;i<n;i++){
            if((y|arr[i])<=x){
                y = y|arr[i];
            }
            else{
                y = arr[i];
                c--;
            }
        //    cout<<y<<" ";
            if(c==0)return 0;
        }
        return 1;
    }
    int getSegments(vector<int> arr, int n, int x) {

        // Your code here
        int ma = *max_element(arr.begin(),arr.end());
        if(ma>x)return -1;
        int l = 1,h = n;
    //    cut(1,arr,x);
        int a = 0;
        while(l<h){
            int m = (l+h)/2;
            if(cut(m,arr,x)){
                h = m ;
                
            }
            else{
                l = m + 1;
            
            }
        }
        return l;
    }
