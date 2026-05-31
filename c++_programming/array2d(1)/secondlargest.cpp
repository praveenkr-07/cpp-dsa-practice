#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns : ";
    cin>>n;
    cout<<"Enter the elements of your matrix : " <<endl;
    int arr[m][n];
    // taking inputs 
    for(int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; j<n ; j++)
    {
        cin>>arr[i][j];
    }
    }
    //  printing matrix 

     cout<<"your matrix is : "<<endl ;
     for(int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; j<n ; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }


    // finding second largest
    int first_largest = INT16_MIN , second_largest = INT16_MIN;
    for(int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; j<n ; j++)
    {
        if(arr[i][j] > first_largest)
        {
            second_largest = first_largest;
            first_largest = arr[i][j];
        }
        else if (arr[i][j] > second_largest)
        {
            second_largest = arr[i][j];
        }
    }
    }
    cout<<endl;
    // printing second largest
    cout<<"first largest number is : "<<first_largest <<endl;
    cout<<"second largest number is : "<<second_largest <<endl;
    return 0;
}