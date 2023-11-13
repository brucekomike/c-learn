#include <iostream>
#include"tpoint1.hpp"


namespace std{
    TPoint f(TPoint Q){
        cout<<"ok\n";
        int x,y;
        x=Q.Xcoord()+10;
        y=Q.Ycoord()+20;
        TPoint R(x,y);
        return R;
    }
} // namespace std;

int main(){
    using namespace std;
    TPoint M(20,35), P(0,0);
    TPoint N(M);
    P=f(N);
    cout<<"P="<<P.Xcoord()<<","<<P.Ycoord()<<endl;    
}
