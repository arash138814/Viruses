#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #include <io.h>
    #define MKDIR(path) mkdir(path)
#else
    #include <sys/stat.h>
    #define MKDIR(path) mkdir(path, 0777)
#endif

int main() {
    int i = 0;
    char dirname[256];

    while (1) {
        snprintf(dirname, sizeof(dirname), "%d", i);
        if (MKDIR(dirname) != 0) {
            perror("mkdir failed");
            break;
        }
        i++;
    }
    return 0;
}
