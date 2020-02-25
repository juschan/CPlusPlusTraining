#include <cstdio>
#define FOO 10

int main() {
    #ifdef FOO
    int num=FOO;
    #else
    int num=5;
    #endif
    
    printf("%d \n", num);
    return 0;
}
