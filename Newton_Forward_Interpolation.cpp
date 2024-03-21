#include<bits/stdc++.h>
using namespace std;
class NFI{
    int factorial(int val){
        int v=1;
        for(int i=val;i>0;i--)
            v *= i;
        return v;
    }

    public:
        void solve(){
            int n;
            cin>>n;
            double x[n],y[n],a,u,h,z[n],cnt[n],temp,temp1;
            for(int i=0;i<n;i++){
                cin>>x[i]>>y[i];
            }
            a = x[0];
            h = x[1]-x[0];
            int l = 1;
            cnt[0]=y[0];
            for(int i=0;i<n;i++){
                int k =0;
                for(int j=0;j<n-i-1;j++){
                    temp = y[j+1] - y[j];
                    swap(y[k],temp);
                    k++;
                }
                cnt[l]=y[0];
                l++;
            }
            double xx,result=0.0,uu;
            cin>>xx;
            u = (xx - a)/h;
            uu = u;
            result = cnt[0] + u*cnt[1];

            for(int i=2;i<n;i++){
                uu = uu*(u - (i-1));
                result += (uu * cnt[i])/factorial(i);
            }

            cout<<result<<endl;
        }
};
int main()
{
    NFI nfi = NFI();
    nfi.solve();
    return 0;
}

