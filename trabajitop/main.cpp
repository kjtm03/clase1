#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Stack;


template <class T>
Stack<T> operator +(const Stack<T> &s1, const Stack<T> &s2){
    Stack<T> result = s1;

    for(unsigned i = 0; i < s1.items.size();i++) {
        result.items.push_back (s2.items [i]);
    }
    return result;
}

template <typename T>
Stack<T> operator -(const Stack <T> &s1, const Stack<T> &s2)
{
    Stack<T> result;
    for(unsigned i=0; i<s1.items.size();i++)
    {
        bool temp=false;
        for(unsigned j=0; j<s2.items.size();j++)
        {
            if(s1.items[i]==s2.items[j])
                temp=true;
        }
        if(temp==false)
            result.push(s1.items[i]);
    }
    return result;
}

template <typename T>
class Stack{
    friend ostream &operator <<(ostream &s3,Stack &s1)
    {
       for(int i=s1.items.size()-1;i >= 0; i--)
         s3<<s1.items[i]<<"\n";
       return s3;
    }

    friend Stack<T> operator +<>(const Stack<T> &s1, const Stack<T> &s2);
    friend Stack<T> operator -<>(const Stack <T> &s1, const Stack<T> &s2);

    vector <T> items;
    public:
        bool empty() const {return items.empty();}
        void push(const T &item) {items.push_back(item);}
        T pop(){
            T last = items.back();
            items.pop_back();
            return last;
        }
        void imp(){
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
    Stack<int> d = c - a;
    cout<<d<<endl;



}
