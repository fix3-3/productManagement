#include <bits/stdc++.h>
#include <fstream>
/* #include <iostream> */
using namespace std;

class Product{
    public:
        string ProductID; 
        string ProductCategory ;
        string ProductName;

        void pget ( )
        {
            ifstream in("productIN.txt");
            ofstream out("productOut.txt");
            in>>ProductID;
            in>> ProductCategory ;
            in>> ProductName;
            in.close();
            out.close();

        }      
        void pput ( )
        {
            ifstream in("productIN.txt");
            ofstream out("productOut.txt");
            out<<ProductID<<'\n';
            out<< ProductCategory<<'\n' ;
             out<< ProductName<<'\n';
            in.close();
            out.close();
        }

};

class soldProduct :public Product{
    public:
   string customerID;
   int Price; 
        void sget ( )
        {
            ifstream in("customerIN.txt");
            ofstream out("customerOut.txt");
            in>>customerID;
            in>> Price;
            in.close();
            out.close();

        }      
        void sput ( )
        {
            ifstream in("customerIN.txt");
            ofstream out("customerOut.txt");
            out<<customerID<<'\n';
            out<< Price<<'\n';
            in.close();
            out.close();

        }      
};
class boughtProduct :public Product{
    public:
   string buyerID;
   int price; 
   string buyerName;
        void bget ( )
        {
            ifstream in("buyerIN.txt");
            ofstream out("buyerOut.txt");
            in>>buyerID;
            in>>buyerName;
            in>> price;
            in.close();
            out.close();

        }      
        void bput ( )
        {
            ifstream in("buyerIN.txt");
            ofstream out("buyerOut.txt");
            out<<buyerID<<'\n';
            out<<buyerName<<'\n';
            out<< price<<'\n';
            in.close();
            out.close();

        }      
}; 
int main() {
    Product p;
     soldProduct s; 
     boughtProduct b;

p.pget();
p.pput();
s.sget();
s.sput();
b.bget();
b.bput();
}
