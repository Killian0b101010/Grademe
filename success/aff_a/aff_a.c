#include <unistd.h>
int main (int ac, char **argv)
{

    if ( ac != 2)
    {
        write(1,"a\n",2);
        return(0);
    }
    int i = 0;
    while ( argv [1][i] != '\0')
    {
        if (argv[1][i] == 'a')
        {
            write(1,"a\n",2);
            return(0);
        }
        i++;
    }
    write (1,"\n",1);
    return(0);
}
