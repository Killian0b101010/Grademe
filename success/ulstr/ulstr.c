#include <unistd.h>

int	ulstr(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(int ac, char **argv)
{
	char	c;

    if( ac != 2 )
    {
     write(1,"\n",1);
     return(0);
     }  

    while ( *argv[1] )
    {
     c = ulstr(*argv[1]);
     write(1,&c,1);
         argv[1]++;
    }
    write(1,"\n",1);
    return(0);

}












