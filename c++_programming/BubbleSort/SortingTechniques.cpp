// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // void MergeSortedArrays(vector<int> &a, vector<int> &b, vector<int> &res)
// // {
// //     int i = 0, j = 0, k = 0;
// //     while (i < a.size() && j < b.size())
// //     {
// //         if (a[i] <= b[j])
// //         {
// //             res[k] = a[i];
// //             i++;
// //         }
// //         else if (a[i] > b[j])
// //         {
// //             res[k] = b[j];
// //             j++;
// //         }
// //         k++;
// //     }
// //     if (i == a.size())
// //     {
// //         while (j < b.size())
// //         {
// //             res[k] = b[j];
// //             j++;
// //             k++;
// //         }
// //     }
// //     else if (j == b.size())
// //     {
// //         while (i < a.size())
// //         {
// //             res[k] = a[i];
// //             i++;
// //             k++;
// //         }
// //     }
// //     return;
// // }

// // void MergeSort(vector<int> &v)
// // {
// //     int n = v.size();
// //     if(n==1) return;
// //     int n1 = n / 2;
// //     int n2 = n - n / 2;

// //     vector<int> a(n1);
// //     for (int i = 0; i < n1; i++)
// //     {
// //         a[i] = v[i];
// //     }
// //     vector<int> b(n2);
// //     for (int i = 0; i < n2; i++)
// //     {
// //         b[i] = v[n1+i];
// //     }

// //     MergeSort(a);
// //     MergeSort(b);

// //     MergeSortedArrays(a,b,v);

// // }
// // int main()
// // {
// //     vector<int> vec;
// //     vec.push_back(2);
// //     vec.push_back(5);
// //     vec.push_back(1);
// //     vec.push_back(6);
// //     vec.push_back(9);
// //     cout << "Before Sorting -> ";
// //     for (int i = 0; i < vec.size(); i++)
// //     {
// //         cout << vec[i] << " ";
// //     }
// //     cout<<endl;
// //     MergeSort(vec);
// //     cout << "After  Sorting -> ";
// //     for (int i = 0; i < vec.size(); i++)
// //     {
// //         cout << vec[i] << " ";
// //     }
// // }

// // BUBBLE SORT
// // #include<iostream>
// // #include <vector>
// // using namespace std;
// // void bubbleSort(vector<int> &a)
// // {
// //     int n = a.size();
// //     for(int i = 0 ; i<n ; i++)
// //     {
// //         bool flag = true;
// //         for(int j = 0 ; j < n-1-i ;j++)
// //         {

// //             if(a[j]>a[j+1])
// //             {
// //                 swap(a[j],a[j+1]);
// //                 flag = false;
// //             }
// //         }
// //         if(flag == true) break;
// //     }
// // }
// // int main()
// // {

// //     vector<int> vec;
// //     vec.push_back(2);
// //     vec.push_back(5);
// //     vec.push_back(1);
// //     vec.push_back(6);
// //     vec.push_back(9);
// cout << "Before Sorting -> ";
// for (int i = 0; i < vec.size(); i++)
// {
//     cout << vec[i] << " ";
// }
// cout<<endl;
// bubbleSort(vec);
// cout << "After  Sorting -> ";
// for (int i = 0; i < vec.size(); i++)
// {
//     cout << vec[i] << " ";
// }
// // }

// QuickSort
// #include <iostream>
// using namespace std;
// int partition(int arr[], int st, int end)
// {
//     int pivotIndex;
//     int count = 0;
//     int pivot = arr[st];
//     for (int i = st + 1; i <= end; i++)
//     {
//         if (arr[i] < pivot)
//             count++;
//     }

//     pivotIndex = st + count;
//     swap(arr[st], arr[pivotIndex]);
//     int i = st;
//     int j = end;
//     while (i < pivotIndex && j > pivotIndex)
//     {
//         if (arr[i] < arr[pivotIndex])
//             i++;
//         if (arr[j] > arr[pivotIndex])
//             j--;
//         if (arr[i] > arr[pivotIndex] && arr[j] < arr[pivotIndex])
//         {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[], int st, int end)
// {
//     // base condition
//     if (st >= end)
//         return;
//         //finding pivot
//     int pivotIdx = partition(arr, st, end);

//         // recursion
//     quickSort(arr, st, pivotIdx - 1);
//     quickSort(arr, pivotIdx + 1, end);
// }
// int main()
// {
//     int arr[] = {5, 1, 8, 2, 7, 6, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Sorting -> ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     quickSort(arr, 0, n - 1);
//     cout << "After  Sorting -> ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//cyclic Sort
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {5,1,8,2,7,6,3,4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     //Before Sorting
//     cout << "Before Sorting -> ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // cyciic sort 
//     int i = 0;
//     while(i<n)
//     {
//         int correctIndex = arr[i] - 1;
//         if(arr[i]== i+1)i++;
//         else 
//         swap(arr[i],arr[correctIndex]);
//     }

//     // After Sorting
//     cout << "After  Sorting -> ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//implementation of stacks using Linked list 
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// class myStack{
// public :
//     node *head = NULL;
//     node *tail = NULL;
//     int size = 0;
//     void Insert(int val)
//     {
//         node* temp = new node(val);
//         if(size==0)
//         {
//             head = tail = temp;
//             size = 1;
//         }
//         else{
//             tail->next = temp;
//             tail = temp;
//             size++;
//         }
//     }
//     int pop()
//     {
//         if(isEmpty()){
//             cout<<"Stack is Empty";
//             return -1;
//         }
//         else if(head==tail)
//         {
//             int ans = tail->data;
//             cout<<"Popped Element is : "<<ans<<endl;
//             delete tail;
//             size--;
//             head = tail = NULL;
//             return ans;
//         }
//         else {
//             node* temp = head;
//             int ans = tail->data;
//             cout<<"Popped Element is : "<<ans<<endl;
//             while(temp->next != tail)
//             {
//                 temp=temp->next;
//             }
//             delete tail;
//             tail = temp;
//             tail->next = NULL;

//             size--;
//             return ans;
//         }
//         cout<<endl;
//     }
//     int top()
//     {
//         if(isEmpty()){
//             cout<<"Stack is Empty"<<endl;
//             return -1;
//         }
//         cout<<"Top of the stack is : "<< tail->data<<endl;
//         return tail->data;
//     }
//     int Size(){
//         cout<<"Size of Stack : "<<size<<endl;
//         return size;
//     }
//     bool isEmpty(){
//         if(size==0) return true;
//         else return false;
//     }
//     void display()
//     {
//         if(isEmpty()){
//             cout<<"Stack is Empty"<<endl;
//             return ;
//         }
//         else {
//         node* temp = head;
//         while(temp != NULL)
//         {
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//         }
        
//     }
// };
// int main()
// {
//     myStack st;
//     st.Insert(10);
//     st.Insert(20);
//     st.Insert(30);
//     st.Insert(40);
//     st.Insert(50);
//     st.display();
//     st.pop();
//     st.display();
//     st.top();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.display();
// }