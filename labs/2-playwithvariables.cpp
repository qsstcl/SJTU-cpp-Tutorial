#include <iostream>

int main(){

    int maxInt = 2147483647;

    //what is maxInt + 1? try it

    std::cout<< maxInt + 1<<std::endl;

    //play with char

    char test_char = 'a';

    std::cout << test_char <<std::endl;

    std::cout << (int) test_char <<std::endl;

    //when you get 'a', how to print 'b' using 'a' ?

    std::cout << test_char + 1 <<std::endl;

    //how to get any alphabet using 'a'?



    //what is the relation of string and char


    std::string test_string = "I love SJTU";
    std::cout << test_string <<std::endl;

    char test_char_array[20] = "I love SJTU";
    std::cout << test_char_array <<std::endl;

    test_char_array[11] = '?';
    std::cout << test_char_array <<std::endl;

}