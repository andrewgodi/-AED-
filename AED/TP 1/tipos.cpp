#include <string>
#include <cassert>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
using namespace std::string_literals;

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

    //double //float //long double

    assert(2.0 == 1.0+1.0);
    assert(1.0 == 0.1*10);
    assert(1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    assert(0.02 > 0.01);
    assert ( 3E2 == 3e2);

    //int 
    assert(0 == (-5)+5);
    assert(-50 != 30+60+784);
    //assert(10*10*10*10 == 10000/1000);
    assert((205 - 20)/10 <= 30); 
    //assert(20 <= 20*(-1)); 
    assert(1502 >= 30);
    assert((65 % 2) <=  1); 
    assert((9 * 8)/(20 % 6 ) != 125+51);

    //caracteres
    assert ('a'== 97);
    assert ('a' == ('A'+32));
    assert ('@'< 65);
    assert ('C' - 'A' == 2);
    
    //string
    assert(12 == "Las palabras"s.length());
    assert("abcd"s == "ab"s + "cd"s);
    assert(666u == 666u); //unsigned
    //assert(667l == 666l); //long
    assert(2 == 2u);
    assert(1); //limites de cada tipo de dato
    assert(sizeof 'a' == 1); //memoria de cada tipo de dato
    assert(sizeof 65 == 4); //memoria de cada tipo de dato
    assert(sizeof "hola"s == 32); //memoria de cada tipo de dato
    assert(sizeof "hola" == 5); //memoria de cada tipo de dato

}