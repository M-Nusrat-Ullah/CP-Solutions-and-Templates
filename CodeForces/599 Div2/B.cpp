    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int g,h,t,y;
        bool k;
        string q,w;
        scanf("%d",&t);
        while(t--){
            scanf("%d",&y);
            cin>>q>>w;
            for(g=k=0;q[g]&&!k;g++)if(q[g]!=w[g])
                for(h=g+1;q[h]&&!k;h++)if(q[h]==q[g]&&q[h]!=w[h])
                    swap(q[h],w[g]), k=true;
            if(q!=w)printf("No\n");
            else printf("Yes\n");
        }
        return 0;
    }
