#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    int i = 0;
    char dirname[256];

    while (1) {
        snprintf(dirname, sizeof(dirname), "%d", i);
        if (mkdir(dirname, 0777) != 0) {
            perror("mkdir failed");
            break;
        }
        i++;
    }
    return 0;
}
