#include<bits/stdc++.h>
using namespace std;
class Least_Square_Curve_Fitting{
    public:
        void solve(){
            int n;
            cout<<"Enter the value of n : ";
            cin>>n;
            double x[n],y[n],sumx=0,sumy=0,sumxx=0,sumxy=0,a,b;
            cout<<"Enter the value of x & y pairs :"<<endl;
            for(int i=0;i<n;i++){
                cin>>x[i]>>y[i];
                sumx += x[i];
                sumy += y[i];
                sumxx += x[i]*x[i];
                sumxy += x[i]*y[i];

            }
            a = (sumxx * sumy -sumx * sumxy)/(n*sumxx - sumx*sumx);
            b = (n*sumxy - sumx*sumy)/(n*sumxx - sumx*sumx);
            cout<<"Y = "<<a<<" + "<<b<<"x"<<endl;
        }
};

int main()
{
    Least_Square_Curve_Fitting least = Least_Square_Curve_Fitting();
    least.solve();
    return 0;
}
