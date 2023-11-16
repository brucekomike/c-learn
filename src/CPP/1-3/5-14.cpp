# include <iostream>
namespace std{
    class X{
        friend class Y;
        public:
            void Set(int i){
                x=i;
            }
            void Display(){
                cout<<"x="<<x<<","<<"y="<<y<<endl;
            }
        private:
            int x;
            static int y;
    };
    class Y{
        public:
            Y(int i, int j){
                a.x=i;
                X::y=j;
            }
            void Display(){
                cout<<"x="<<a.x<<","<<"y="<<X::y<<endl;
            }
        private:
            X a;

    };
    int X::y=1;
}
int main(){
    using namespace std;
    X b;
    b.Set(5);
    b.Display();
    Y c(6,9);
    c.Display();
    b.Display();
    return 0;
}