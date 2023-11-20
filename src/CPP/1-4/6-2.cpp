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
    M p(5,7),q;
    q.copy(&p);
    fun(p,&q);
    p.print();
    q.print();
    return 0;
}