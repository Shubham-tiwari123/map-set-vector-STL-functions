#include <iostream>
#include <map>
#include <iterator>
#include <string>
using namespace std;
class mapping{
private:
    map <string , int> data;
    map <string, int> :: iterator itr;
    string word;
public:
    void enter();
    void display();
    void search_data();
};
void mapping::enter(){
    data.insert(pair <string, int> ("ram", 40));
    data.insert(pair <string, int> ("shyam", 30));
    data.insert(pair <string, int> ("mohan", 20));
    data.insert(pair <string, int> ("rohan", 00));
    data.insert(pair <string, int> ("lalit", 60));
}
void mapping::display(){
    cout<<"KEY\t\t"<<"VALUE"<<endl;
    for (itr = data.begin(); itr != data.end(); ++itr){
        cout<<itr->first<<"\t\t"<<itr->second<<endl;
    }
    cout << endl;
}
void mapping::search_data(){
    cout<<"Enter the key to search the value:-";
    cin>>word;
    itr =data.find(word);
    if(itr != data.end())
        cout<<"data found:-"<<itr->second;
    else
        cout<<"data not found";

}
int main(){
    mapping m;
    m.enter();
    m.display();
    m.search_data();
}
