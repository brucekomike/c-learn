#include <iostream>

namespace std{
    class TPoint{
        public:
        TPoint(int x, int y){
        X=x, Y=y;
        }
        TPoint(TPoint &p){
            X=p.X;
            Y=p.Y;
            cout<<"Copy=initialization Constructor Called. \n";
        }
        ~TPoint(){
            cout<<"Destructor Called. \n";
        }
        int Xcoord(){return X;}
        int Ycoord(){return Y;}
        private:
        int X, Y;
    };
}