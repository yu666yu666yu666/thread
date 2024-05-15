#include "Random.h" 
#include <cstddef> 
#include <iostream>
#include <array>
#include <algorithm> 
#include <iterator>

int main() {
    std::array <int,10000> only_array{};
	std::uniform_int_distribution die6{ 1, 666 }; 

	for (int count{ 0 }; count < 10000; ++count) {
        only_array[count] = die6(Random::mt);
	}

    std::sort(std::begin(only_array), std::end(only_array));

    for (int count{ 0 }; count < 10000; ++count) {
        std::cout << only_array[count] <<'\t';

        if ((count + 1) % 9 == 0)
		    std::cout << '\n';
	}
	
	std::cout << '\n';

	return 0;
}