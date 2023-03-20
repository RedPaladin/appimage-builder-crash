#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " command" << std::endl;
        return 1;
    }

    std::string command = argv[1];
    int result = std::system(command.c_str());

    if (WIFSIGNALED(result)) {
        printf("Command exited with signal %d\n", WTERMSIG(result));
        return result;
    }

    return 0;
}
