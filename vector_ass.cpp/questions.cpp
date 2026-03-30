// 1️⃣ Take n numbers as input and store them in a vector. Print them in reverse.

// #include <iostream>
// #include <vector>

// int main(){
//     std::vector <int> v;
//     int n,val;
//     std::cout<<"Enter no of elements in vector:";
//     std::cin>>n;
//     for(int i = 0 ; i < n ; i++){
//         std::cout<<"Enter a value :";
//         std::cin>>val;
//         v.push_back(val);
//     }

//     // v.();
//     for(int i = n-1 ; i >= 0 ; i--){
//         std::cout<<v[i]<<std::endl;
//     }

//     return 0;
// }

// 2️⃣ Find the maximum and minimum element in a vector.

// #include <iostream>
// #include <vector>

// int main(){
//     std::vector <int> v;
//     int n,val;
//     std::cout<<"Enter no of elements in vector:";
//     std::cin>>n;
//     for(int i = 0 ; i < n ; i++){
//         std::cout<<"Enter a value :";
//         std::cin>>val;
//         v.push_back(val);
//     }

//     // v.();
//     int max = v[0];
//     int min = v[0];
//     for(int i = 1 ; i < n ; i++){
//         max = max > v[i] ? max : v[i];
//         min = min < v[i] ? min : v[i];
//     }

//     std::cout<<"maximum value : "<<max<<std::endl;
//     std::cout<<"minimum value : "<<min<<std::endl;
//     return 0;
// }

// 3️⃣ Count how many times a given number appears in a vector.

// #include <iostream>
// #include <vector>

// int main(){
//     std::vector <int> v;
//     int n,val;
//     std::cout<<"Enter no of elements in vector:";
//     std::cin>>n;
//     for(int i = 0 ; i < n ; i++){
//         std::cout<<"Enter a value :";
//         std::cin>>val;
//         v.push_back(val);
//     }

//     int tar;
//     std::cout<<"Enter the target number : ";
//     std::cin>>tar;

//     // v.();
//     // int max = v[0];
//     // int min = v[0];
//     int count = 0;
//     for(int i = 0 ; i < n ; i++){
//         // max = max > v[i] ? max : v[i];
//         // min = min < v[i] ? min : v[i];
//         if(v[i] == tar){
//             count++;
//         }
//     }

//     // std::cout<<"maximum value : "<<max<<std::endl;
//     std::cout<<"no of times : "<<count<<std::endl;
//     return 0;
// }

// 4️⃣ Remove all even numbers from a vector.

// #include <iostream>
// #include <vector>

// int main()
// {
//     std::vector<int> v;
//     int n, val;
//     std::cout << "Enter no of elements in vector:";
//     std::cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << "Enter a value :";
//         std::cin >> val;
//         v.push_back(val);
//     }

//     // v.();
//     // int max = v[0];
//     // int min = v[0];
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] % 2 == 0)
//         {
//             v.erase(v.begin() + i);
//             i--; // Important
//         }
//     }

//     std::cout << ";;;;;;;;;;;" << std::endl;

//     for (int i : v)
//     {
//         std::cout << i << std::endl;
//     }

//     // std::cout<<"maximum value : "<<<<std::endl;
//     // std::cout<<"minimum value : "<<min<<std::endl;

//     return 0;
// }

// 5️⃣ Sort a vector in descending order.

#include <iostream>
#include <vector>



// 🔹 ARRAY (std::array)

// 6️⃣ Store 5 integers in std::array and calculate their sum.

// 7️⃣ Reverse a std::array.

// 8️⃣ Find the second largest element in an array.

// 🔹 DEQUE

// 9️⃣ Insert 5 elements at front and 5 at back. Print the deque.

// 🔟 Implement a simple queue using deque.

// 🔹 LIST

// 1️⃣1️⃣ Insert elements at front and back of a list.

// 1️⃣2️⃣ Remove all elements greater than 50 from list.

// 🔹 FORWARD_LIST

// 1️⃣3️⃣ Insert elements and print them.

// 1️⃣4️⃣ Delete an element after a given value.

// 🟡 INTERMEDIATE PROGRAMMING QUESTIONS
// 🔹 VECTOR

// 1️⃣5️⃣ Remove duplicates from a vector (without using set).

// 1️⃣6️⃣ Rotate a vector by k positions.

// 1️⃣7️⃣ Merge two sorted vectors.

// 1️⃣8️⃣ Find intersection of two vectors.

// 1️⃣9️⃣ Implement dynamic array manually (simulate vector growth).

// 🔹 LIST

// 2️⃣0️⃣ Reverse a doubly linked list (using STL list).

// 2️⃣1️⃣ Merge two sorted lists.

// 2️⃣2️⃣ Remove nth node from end.

// 🔹 DEQUE

// 2️⃣3️⃣ Solve sliding window maximum using deque.

// 2️⃣4️⃣ Implement circular queue using deque.

// 🔹 FORWARD_LIST

// 2️⃣5️⃣ Reverse a forward_list.

// 2️⃣6️⃣ Detect cycle in singly linked list (concept-based).

// 🔴 ADVANCED PROGRAMMING QUESTIONS
// 🔥 Mixed STL + Logic

// 2️⃣7️⃣ Implement LRU Cache using:

// list

// unordered_map

// 2️⃣8️⃣ Compare performance:

// Insert 1,000,000 elements in vector vs list

// Measure time

// 2️⃣9️⃣ Implement stack using vector.

// Then using deque.

// Compare.

// 3️⃣0️⃣ Implement queue using vector.

// Handle shifting problem.

// 🔥 Memory & Iterator Focus

// 3️⃣1️⃣ Show example of iterator invalidation in vector.

// 3️⃣2️⃣ Write code that safely removes elements while iterating list.

// 3️⃣3️⃣ Demonstrate how reserve() improves performance.

// 🔥 Real Interview Level

// 3️⃣4️⃣ Design a browser history system using deque or list.

// 3️⃣5️⃣ Implement undo-redo system.

// 3️⃣6️⃣ Solve Josephus problem using list.

// 3️⃣7️⃣ Implement text editor using list (cursor movement simulation).

// 🎯 Competitive Programming Style

// 3️⃣8️⃣ Given array of size N, find longest increasing subarray using vector.

// 3️⃣9️⃣ Given K, reverse every K elements in list.

// 4️⃣0️⃣ Find first non-repeating element using deque.