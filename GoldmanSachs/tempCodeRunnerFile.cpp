set<int> s;
    s.insert(1);
    for(int i=2;i<2*n;i=i*2){
        s.insert(i);
    }
    for(int i=2;i<2*n;i=i*3){
        s.insert(i);
    }
    for(int i=2;i<2*n;i=i*5){
        s.insert(i);
    }
    for(int i=3;i<2*n;i=i*2){
        s.insert(i);
    }
    for(int i=3;i<2*n;i=i*3){
        s.insert(i);
    }
    for(int i=3;i<2*n;i=i*5){
        s.insert(i);
    }
    for(int i=5;i<2*n;i=i*2){
        s.insert(i);
    }
    for(int i=5;i<2*n;i=i*3){
        s.insert(i);
    }
    for(int i=5;i<2*n;i=i*5){
        s.insert(i);
    }
    int i=n;
    for(auto it:s){
        if(i==1)
            return it;
        else{
            i--;
            cout<<n-i<<" "<<it<<"\n";
        }
    }