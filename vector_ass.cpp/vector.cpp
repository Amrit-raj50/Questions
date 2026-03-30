// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
//     vector<int> v= {1,2,4,6};
//     v.push_back(23);
//     for(int i : v){
//        cout<<v<<endl;
//     }
//     // v.pop_back();
//     // cout<<v<<endl;
//     // v.insert(v.begin + 1,15);
//     return 0;
// }

#include <iostream>
#include <vector>
#include <list>
#include <set>
using namespace std;

int main()
{
    // vector<int> v = {10, 20, 30};
    // v.push_back(40); // Add at end
    // v.insert(v.begin() + 1, 15); // Insert 15 at index 1
    // v.pop_back(); // Remove last element

    list<int> li = {2, 3, 23, 44, 23, 12, 11, 43, 2234, 12};
    li.push_back(89);
    li.push_front(90);
    li.pop_back();
    li.pop_front();
    auto a = li.begin();
    ++a;
    li.insert(a, 1000);
    li.remove(12);
    // for (int num : li) {
    //     cout << num << " ";
    // }

    set<int> s1 = {1, 2, 3, 4, 6};

    s1.insert(90);
    s1.erase(6);

    for (int val : s1)
    {
        cout << val << endl;
    }

    return 0;
}