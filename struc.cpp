#include<iostream>
#include<string>
using namespace std;
struct man{
    string cust_name;
    string genre;
    string author;
    int price;
    int pages;
};

int main()
{
man p1;
cout<<"enter your name:";
cin>> p1.cust_name;
cout<<"enter your genre of intrest:";
cin>>p1.genre;
cout<<"enter your author of intrest:";
cin>>p1.author;
cout<<"enter the price";
cin>>p1.price;
cout<<"enter the no. of pages";
cin>>p1.pages;

cout<<"\nDisplaying info"<<endl;
cout<<"Customer name: "<<p1.cust_name<<endl;
cout<<"Favourite genre: "<<p1.genre<<endl;
cout<<"Favourite author: "<<p1.author<<endl;
cout<<"Price: "<<p1.price<<endl;
cout<<"Number of pages: "<<p1.pages<<endl;

return 0;
}