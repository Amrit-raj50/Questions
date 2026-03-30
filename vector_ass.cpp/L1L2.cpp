#include <iostream>
#include <list>
#include <vector>
int main(){
    std::list<int> l1;
    std::list<int> l2;
    std::vector<int> v;


    int m = 2;
    int n = 4;
    int val;
    for(int i = 0 ;  i < m ; i++){
        std::cout<<"enter element in l1 at index "<<i<<" :";
        std::cin>>val;

        l1.push_back(val);
    }

     for(int i = 0 ;  i < n ; i++){
        std::cout<<"enter element in l2 at index "<<i<<" :";
        std::cin>>val;

        l2.push_back(val);
    }
    int idx = 0;
   
    for(int i : v){
        std::cout<<i<<std::endl;
    }


    return 0;
}                          