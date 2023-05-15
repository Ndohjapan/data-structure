#include <iostream>

#include <array>

using namespace std;

int main(){
    array<int, 10> collection;

    collection.size();

    for (int i = 0; i < collection.size(); i++)
    {
        cout << collection[i]<<endl;
    }
    
    
}