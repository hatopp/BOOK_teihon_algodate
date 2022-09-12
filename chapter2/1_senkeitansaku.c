# include "test.h"

int search(int key)
{
    int     n;
    int     i;
    n=10;
    i = 0;

    table[2].key =2;
    table[2].data=0;
    while(i<n){
        if (table[i].key == key)
            return (table[i].data);
        i++;
    }
    return -1;
}


int main(void)
{
    int test=2;
    printf("%d\n",search(test)); 
    printf("%d\n", table[2].data);
    return 0;
}