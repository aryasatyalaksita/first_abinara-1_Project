#include <iostream>
using namespace std;
#include "manager.hpp"
#include "engineer.hpp"
#include "intern.hpp"
int main(){
    manager budi("budi", 1 , 1500000, 2);
    engineer sari("sari", 2 , 2000000, 12);
    intern owi("owi" , 3 , 100000, 13);
    budi.print();
    sari.print();
    owi.print();
    return 0;
}