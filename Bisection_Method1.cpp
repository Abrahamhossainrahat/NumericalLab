#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define es 0.0001

class Bisection{
private:
    double a,b;
    double function(double x){
        return x*x - 3;
    }

    public:
        void solve(){
            srand(time(0));
            while(true){
                a = -9 +rand()%10;
                b = rand()%10;
                cout<<"fc   :"<<function(a)<<" "<<function(b)<<endl;
                if(function(a) * function(b)<0 &&a!=0 && b!=0)break;
            }
            if(a>b)
                swap(a, b);
            int itteration = 1;
            cout<<"Low : "<<a<<" "<<"Up : "<<b<<endl;
            double root = (a+b)/2;
            double pre_root = root;
            cout<<" "<<"Number of itterraion :"<<itteration<<" "<<"Root :"<<root<<endl;
            while(true){
                if(function(root)>0)
                    b = root;
                else if(function(root)<0)
                    a = root;
                else
                    break;
                root = (a+b)/2;
                double er = abs(root - pre_root)/root;
                if(er<=es)
                    break;
                pre_root = root;
                cout<<"Low : "<<a<<" "<<"Up : "<<b<<endl;
                cout<<"Number of itterraion :"<<itteration++<<" "<<"Root :"<<root<<endl;
            }
            cout<<"Low : "<<a<<" "<<"Up : "<<b<<endl;
            cout<<"Final root : "<<root<<endl;
        }
};

int main(){
    Bisection bisec = Bisection();
    bisec.solve();
    return 0;
}










