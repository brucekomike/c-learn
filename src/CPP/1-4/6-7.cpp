# include <iostream>

using namespace std;
class M{
    public:
        M(){
            x=y=0;
        }
        M(int i, int j){
            x=i;y=j;
        }
        void copy(M *m){
            x=m->x;
            y=m->y;
        }

        void setxy(int i, int j){
            x=i;y=j;
        }
        void print(){
            cout<<x<<","<<y<<endl;
        }
    private:
        int x,y;
};
void fun(M m1,M * m2){
    m1.setxy(12,15);
    m2->setxy(22,25);
}

int main(){
    M m[2][4];
    int x=10,y=10;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            m[i][j]=M(x+=2,y+=10);
        }
    }
    M (*pm)[4](m);
    for(int i=0;i<2;i++){
        cout<<endl;
        for(int j=0;j<4;j++){
            (*(*(pm+i)+j)).print();
            cout<<endl;
        }
    }
    return 0;
}