// Online C compiler to run C program online
#include <stdio.h>

int main() {
    for (unsigned int i = 1<<31; i>0;i = i>>1){
    //printf("%u\n",i);
    printf("%u",-1&i?1:0);
    }

    return 0;
}
