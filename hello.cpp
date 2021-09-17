#include <iostream>

void print_args(char* args[], int num_args) {
    for (size_t i = 1; i < num_args; i++) {
        std::cout << args[i];
        if (i < num_args - 1) {
            std::cout << " ";
        }
    }
    std::cout << "\n";
}

int main(int argc, char *argv[]) {
	std::cout << "Hello, world! Hamilton is amazing\n";
	std::cout << "Learn more: https://www.youtube.com/watch?v=dQw4w9WgXcQ\n";

        print_args(argv, argc);
}

