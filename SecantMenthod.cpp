#include<bits/stdc++.h>
using namespace std;
#define ef 0.0001

class Secant{
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
            if(function(a)*function(b)<0 && b!=0)break;
        }
        double root = f1(a, b),froot;

        while(true){
            cout<<"a : "<<a<<" "<<"b :"<<b<<" ";
            if(function(root)==0 || abs(root - f1(b,root))<ef){
                froot = root;
                break;
            }
            cout<<"Root : "<<root<<endl;
            root = f1(b,root);
        }
        cout<<endl<<"Final root : "<<froot<<endl;
    }
};

int main(){
    Secant secant = Secant();
    secant.solve();
}
