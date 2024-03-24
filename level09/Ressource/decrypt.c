#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av) {
        if (ac != 2)
                return 0;
        int i = -1;
        while (av[1][++i])
                av[1][i] -= i;
        printf("%s\n", av[1]);
        return  0;
}