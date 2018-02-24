#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
using namespace std;
class vector_function{
private:
    vector <int> data;
    vector <int> :: iterator itr;
    int i=0;
    int word;
public:
    void enter();
    void display();
    void search_data();
    void more_functions();
};
void vector_function::enter(){
    data.push_back(40);
    data.push_back(30);
    data.push_back(60);
    data.push_back(20);
    data.push_back(50);
    data.push_back(50);
    data.push_back(10);
}
void vector_function::display(){
    for (itr = data.begin(); itr != data.end(); ++itr){
        cout<<"("<<i<<")"<<"\t"<<*itr<<endl;
        i++;
    }
    cout << endl;
}
void vector_function::search_data(){
    cout<<"Enter the data to be searched:-";
    cin>>word;
    itr = find(data.begin(),data.end(),word);
     if(itr != data.end())
        cout<<"data found:-"<<*itr;
    else
        cout<<"data not found";
}
void vector_function::more_functions(){
    cout<<"\n\nsize of vector:-"<<data.size();
    cout<<"\n\ncapacity of vector:-"<<data.capacity();
    cout<<"\n\nfront element:-"<<data.front();
    cout<<"\n\nlast element:-"<<data.back();
    cout<<"\n\ndata at particular location(here at 2nd location):-"<<data.at(2)<<endl;
}
int main()
{
    vector_function v;
    v.enter();
    v.display();
    v.search_data();
    v.more_functions();
}
