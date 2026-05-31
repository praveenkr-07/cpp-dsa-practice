#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter the order of your sq. Matrix : ";
    cin>>n;
    // if n = 3
    // 1 -> n^2 = 1 , 2 , 3, 4, 5, 6, 7, 8, 9
    int arr[n][n]  ;
    int count=1;
    int minc = 0 , minr = 0 , maxc = n-1 , maxr = n-1;
    while(minc <= maxc && minr <= maxr)
    {
        // right 
        for(int j = minc ; j<= maxc ; j++)
        {
            arr[minr][j] = count;
            count++;
        }
        minr++;

        if(minr>maxr || minc > maxc) break;
        // down
        for(int i = minr ; i<= maxr ; i++)
        {
            
            arr[i][maxc] = count ;
            count++;
        }
        maxc--;

        if(minr>maxr || minc > maxc) break;
        //left
        for(int  j = maxc ; j>= minc ; j++)
        {
           
            arr[maxr][j] = count;
            count++;
        }
        maxr--;

        if(minr>maxr || minc > maxc) break;
        //up
        for(int i = maxr ; i>= minr ; i--)
        {
            
            arr[i][minc] = count;
            count++;
        }
        minc++;

    }
    
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j< n ;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
        
}