#include <iostream>
#include <vector>
#include <stack>

using namespace std;
template <class T>
class Stack;


template <class T>
Stack<T> operator +(const Stack<T> &s1, const Stack<T> &s2)
{
    Stack<T> result = s1;

    for(unsigned i = 0; i < s1.items.size(); ++i) {
        result.items.push_back (s2.items [i]);
    }
    return result;
}



template <class T>
class Stack{

    friend Stack<T> operator +<>(const Stack<T> &s1, const Stack<T> &s2);
    vector <T> items;
    public:
        bool empty() const {return items.empty();}
        void push(const T &item) {items.push_back(item);}
        T pop(){
            T last = items.back();
            items.pop_back();
            return last;
        }
        void mostrar(){
            for(int i = 0; i<items.size(); i++){
                cout<<items[i]<<endl;
            }
        }
};


int main()
{
    Stack<int> a,b;
    a.push(8);
    a.push(2);
    b.push(6);
    b.push(7);
    Stack<int> c = a + b;
    c.mostrar();
}
