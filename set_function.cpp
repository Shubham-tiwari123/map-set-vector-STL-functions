#include <iostream>
#include <set>
#include <iterator>
#include <string>
using namespace std;
class set_function{
private:
    set <int> data;
    set <int> :: iterator itr;
    int i=0;
    int word;
public:
    void enter();
    void display();
    void search_data();
};
void set_function::enter(){
    data.insert(40);
    data.insert(30);
    data.insert(60);
    data.insert(20);
    data.insert(50);
    data.insert(50);
    data.insert(10);
}
void set_function::display(){
    for (itr = data.begin(); itr != data.end(); ++itr){
        cout<<"("<<i<<")"<<"\t"<<*itr<<endl;
        i++;
    }
    cout << endl;
}
void set_function::search_data(){
    cout<<"Enter the data to be searched:-";
    cin>>word;
    itr = data.find(word);
     if(itr != data.end())
        cout<<"data found:-"<<*itr;
    else
        cout<<"data not found";
}
int main()
{
   set_function s;
   s.enter();
   s.display();
   s.search_data();
}
