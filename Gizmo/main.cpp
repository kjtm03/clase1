#include <iostream>
#include <vector>
using namespace std;

/*class Widget
{
    public:
        virtual int f(){return 1;}
};
class Gadget:public Widget
{
    public:
        int f(){return 2;}
};
class Gizmo:public Widget
{
    public:
        int f(){return 3;}
};
void do_it(Widget *w){
    cout << w->f()<<" ";
}*/
class Avion{
    public:
        virtual void mensaje()const = 0;
    };
    class Avion_1:public Avion{
        public:
            void mensaje(){
                cout<<"Hola avion 1"<<endl;
            }
    };
    class Avion_2:public Avion{
        public:
            void mensaje(){
                cout<<"Hola avion 2"<<endl;
        };

class Torre{
    public:
       vector <Avion *> aviones;
       Torre(){}
       void adicionar(Avion_1 o){
        aviones.push_back(&o);
        o.Mensaje();
        }
        void adicionar(Avion_2 o){
        aviones.push_back(&o);
        o.Mensaje();
        }


};

int main(){/*
    vector<Widget *> widgets;
    Widget wid;
    Gadget gad;
    Gizmo giz;
    widgets.push_back(&wid);
    widgets.push_back(&gad);
    widgets.push_back(&giz);
    for(size_t i = 0;i<widgets.size();i++)
        do_it(widgets[i]);
*/
    Avion_1 latam;
    Avion_2 peruvian;
    Torre t;
    t.adicionar(latam);
    t.adicionar(peruvian);

}
