#include <iostream>
using namespace std;
int MaizePath1(int sr , int sc , int er , int ec){
    if(sr>er || sc>ec)   return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = MaizePath1(sr,sc+1,er,ec);
    int downways = MaizePath1(sr+1,sc,er,ec);
    return rightways + downways;
}
int MaizePath2(int er , int ec)
{
    if(er<1|| ec<1 ) return 0;
    if(er==1 && ec==1) return 1;
    int rightways =  MaizePath2(er,ec-1);
    int downways = MaizePath2(er-1,ec);
    return rightways+downways;
}
void PrintPath1(int sr , int sc , int er , int ec , string str)
{
    if(sr>er || sc>ec)   return ;
    if(sr==er && sc==ec) cout<<str<<endl ;
    PrintPath1(sr,sc+1,er,ec ,str+"R ");
    PrintPath1(sr+1,sc,er,ec ,str+"D ");
}
void PrintPath2(int er , int ec , string str)
{
    if(er<1|| ec<1 ) return ;
    if(er==1 && ec==1) cout<<str<<endl;;
    PrintPath2(er,ec-1,str+"R ");
    PrintPath2(er-1,ec,str+"D ");
}
int main()
{
    cout<<"Total ways : "<<MaizePath2(3,3)<<endl;
    cout<<"The ways are : "<<endl;
    PrintPath1(1,1,3,3,"");
    cout<<endl;
    PrintPath2(3,3,"");
} 