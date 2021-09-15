#include <iostream>
	#include <assert.h>
	#include <string>
	

	int main()
	
	{
	

	assert(5 == 5),
	assert(false != true);
	assert(true != false);
	assert(true and true);
	assert(false or true);
	assert(true or false);
	assert(10 != 11 == true);
	assert(1 != 1 == false);
	assert(9!= 8);
	assert(0 < 4);  
	assert(20 > 2);                   //--> Booleanos
	assert(4 > 5 == false);
	assert(6 < 3 == false);
	assert(0 < 1 == true);
	assert(50 > 30 == true);
    assert(true == not false);
	assert(not false == true);
	
	
	


	assert('M' == 'M');
	assert('z' == 'z');
	assert('c' != 'D');
	assert('E' != 'e');
	assert('D'-'A' == 3); 
    assert('a' < 'b');   
	assert('D' < 'E');                     //--> Char
	assert('Z' > 'Y');
	assert('g' > 'f'); 
	

	
	assert(44u > 33u);
	assert(5u < 10u);
	assert(100u != 99u); 
	assert(24u == 24u);                    //--> Unsigned
	assert(65u + 14u == 79u);
	assert(65u - 14u == 51u);
	assert(100u / 5u == 20u);
	assert(100u <= 100u);
	

	

	
	assert(5 == 3 + 2);
	assert(10 + 10 != 30);
	assert(1 < 2);     
	assert(55 > 40);               //--> Int
	assert(8 - 1 == 7);
	assert(8 + 1 == 9);
	assert(8 / 1 == 8);
	

	assert(27.06 == 1.56 + 25.5);
	assert(20.0 == 40.0 - 20.0);
	assert(10.55 != 6.44 + 35.16);
	assert(10.55 != 6.44 - 35.16);
	assert(3.4 <= 7.5);                          //-->Double
	assert(3.3 > 1.5);
	assert(5.4 < 8.3);                     
	assert(5.5 / 2.5 == 2.2);
	

	
	assert(std::string("Maria").length() > 1 ); 
	assert(std::string("Hola").length() == std::string("Chao").length());              
	assert(std::string("Coca")+std::string("Cola") =="CocaCola");                       //-->String
	assert(std::string("Man")+std::string("zana") =="Manzana") 
	
	;                 
	
		

	}

 
