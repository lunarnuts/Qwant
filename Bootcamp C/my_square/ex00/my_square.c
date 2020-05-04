/*
*
* @param {int, char * const *} a
*
* @return {int}
*
*/
int atoi(char *av);
int putchar(const char a);
int main(int ac, char **av) {
    if (ac>2) {
    int x = atoi(av[1]);
    int y = atoi(av[2]);
	if (x > 0 && y > 0) {
		for (int i = 1; i <= y; i++) {
			for (int j = 1; j <= x; j++) {
				if (i == 1 && j == 1 || i == 1 && j == x || i == y && j == 1 || i == y && j == x) {
					putchar('o');
				} else if (i == 1 || i == y) {
					putchar('-');
				} else if (j == 1 || j == x) {
					putchar('|');
				} else {
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
}
}