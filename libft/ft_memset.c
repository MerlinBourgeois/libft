#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
    unsigned char *str;
    
    str = (unsigned char *)s;
    while (len != 0)
        *str++ = (unsigned char)c;
    return (s);
}

/*

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;

    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    memset( array, 4, size );

    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}

*/
