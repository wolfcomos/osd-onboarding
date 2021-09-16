#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "Hello, world! Hamilton is amazing\n";
	std::cout << "Learn more: https://www.youtube.com/watch?v=dQw4w9WgXcQ\n";

        for (size_t i = 1; i < argc; i++) {
            std::cout << argv[i];
            if (i < argc - 1) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
}
