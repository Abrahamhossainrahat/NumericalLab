#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ef 0.0001

class NewtonRaphson{
    private:
        double a,b;
        double function(double x){
            return x*x-3;
        }
        double function1(double x){
            return 2*x;
        }
    double f1(double x){
        return (x - function(x)/function1(x));
    }
    public:
    void solve(){
        srand(time(0));
        while(true){
            a = -9 + rand()%10;
            b = rand()%10;
            if(function(a)*function(b)<0)break;
        }
        //cout<<"Low : "<<a<<" "<<"Up :"<<b<<endl;
        double root = a;
        double pre_root = root,itterration = 1;
        cout<<"Num of itteration : "<<itterration<<" "<<"Root : "<<root<<endl;

        while(true){
            root = f1(root);
            double er = abs((root - pre_root)/root);
            if(er<=ef)
                break;
            pre_root = root;
           // cout<<"Low : "<<a<<" "<<"Up :"<<b<<endl;
            cout<<"Num of itteration : "<<itterration++<<" "<<"Root : "<<root<<endl;
        }
       // cout<<"Low : "<<a<<" "<<"Up :"<<b<<endl;
        cout<<"Final root : "<<root<<endl;
    }

};

int main(){
    NewtonRaphson newton = NewtonRaphson();
    newton.solve();
}
