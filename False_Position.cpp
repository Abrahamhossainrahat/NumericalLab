#include<bits/stdc++.h>
using namespace std;
#define ef 0.0001

class Falsi{
    private:
        double a,b;
        double function(double x){
            return x*x-3;
        }
    double f1(double a, double b){
        double fa = function(a);
        double fb = function(b);
        return ((a*fb - b*fa)/(fb - fa));
    }
    public:
    void solve(){
        srand(time(0));
        while(true){
            a = -9 + rand()%10;
            b = rand()%10;
            if(function(a)*function(b)<0)break;
        }
        if(a>b)
            swap(a,b);
        //cout<<"Low : "<<a<<" "<<"Up :"<<b<<endl;
        double root = f1(a, b);
        double pre_root = root,itterration = 1;
        cout<<"Num of itteration : "<<itterration<<" "<<"Root : "<<root<<endl;

        while(true){
            if(function(root)>0)
                b = root;
            else if(function(root)<0)
                a = root;
            else
                break;
            root = f1(a,b);
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
    Falsi falsi = Falsi();
    falsi.solve();
}
