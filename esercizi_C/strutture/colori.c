#include <stdio.h>

/* Colori definiti secondo lo standard ANSI/C */
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
	printf(ANSI_COLOR_RED "Stringa rossa..\n");
	printf("Stringa ancora rossa.." ANSI_COLOR_RESET "\n");
	printf("Colore di default!\n\n");
	printf(ANSI_COLOR_RED "Stringa rossa.." ANSI_COLOR_RESET "Poi di default..." ANSI_COLOR_BLUE "Poi blu.\n" ANSI_COLOR_RESET);
	
	return 0;
}
