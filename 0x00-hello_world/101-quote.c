#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Description: print to stderr without using any C lib functions
 * Return: 1
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59); 
	return(1);
}
