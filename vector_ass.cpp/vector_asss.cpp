#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> v;
    int val;
    
    for(int i = 0; i < 10; i++){
        cout<<"Enter a value:";
        cin>>val;
        v.push_back(val);
    }
    int idx;
    cout<<"enter index : ";
    cin>>idx;

    for(int i = 0 ; i < v.size();i++){
        if((i+1) == idx){
            cout<<"ELEMENT : -->"<<v[i]<<endl;
            break;
        }
    }

    cout<<"enter index for removing element :";
    cin>>idx;

    v.erase(v.begin()+idx);

    for(int i = 0 ; i < v.size();i++){
        cout<<v[i]<<endl;
    }


    return 0;
}