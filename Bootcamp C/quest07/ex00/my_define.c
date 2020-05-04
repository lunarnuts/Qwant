#define TRUE 1
#define FALSE 0
#define EVEN(a) ((a % 2 == 0)? TRUE :FALSE)
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."

void	my_putstr(char *str)
{
    int index;

    index = 0;
	while (str[index] != 0) {
		write(1, &str[index], 1);
		index++;
	}
}

int	my_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int	my_main(int argc, char** argv)
{
	if (my_is_even(argc - 1) == TRUE)
		my_putstr(EVEN_MSG);
	else
		my_putstr(ODD_MSG);
	return (SUCCESS);
}

char* my_define(int nb) {
    return ((my_is_even(nb))?EVEN_MSG : ODD_MSG) ;
}