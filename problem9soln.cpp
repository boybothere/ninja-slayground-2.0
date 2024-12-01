vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sl=INT_MIN;
    int l=INT_MIN;
    int s=INT_MAX;
    int ss=INT_MAX;
    for(int i=0;i<a.size();i++){
        if(a[i]>l){
            sl=l;
            l=a[i];
        }else if(a[i]<l && a[i]>sl){
            sl=a[i];
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i]<s){
            ss=s;
            s=a[i];
        }else if(a[i]>s && a[i]<ss){
            ss=a[i];
        }
    }
    return {sl,ss};
}
