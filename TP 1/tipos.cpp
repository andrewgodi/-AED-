#include <cassert>
#include <iostream>
#include <iomanip>

int main (){
    //bool
    assert (true);
    assert (false == false);
    assert (false != true);
    assert (not false);
    assert (false == not true);
    assert (true and true);
    assert (false or true);
    assert ((false and false) == false);

    //double
    assert(2.0 == 1.0+1.0);
    assert(1.0 == 0.1*10);
    assert(1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    assert(1);
    
    


    //int 
    assert(0 == (-5)+5);
    assert(-50 != 30+60+784);
    assert(10*10*10*10 == 10000/1000);
    assert((205 - 20)/10 <= 30); 
    assert(20 <= 20*(-1)); 
    assert(1502 >= 30);
    assert((65 % 2) <=  1); 
    assert((9 * 8)/(20 % 6 ) != 125+51);

    

    


}