#include "lib/strlib.c"

int main()
{
	ft_putstr("*** Testing ft_putstr ***\n");
	char str[6] = "Feanor";
	ft_putstr("Should print Feanor -> ");
	ft_putstr(str);
  ft_putstr("\n");
  char str1[6] = "";
	ft_putstr("Should print empty -> ");
	ft_putstr(str1);
  ft_putstr("\n\n");

	ft_putstr("*** Testing ft_print_alphabet ***\n");
	ft_print_alphabet();
  ft_putstr("\n\n");
	ft_putstr("*** Testing ft_print_alphabet_reverse ***\n");
	ft_print_alphabet_reverse();
  ft_putstr("\n\n");

	ft_putstr("*** Testing ft_print_numbers ***\n");
	ft_print_numbers();
  ft_putstr("\n\n");

	ft_putstr("*** Testing ft_putnbr ***\n");
	ft_putstr("Should print number 150 -> ");
	ft_putnbr(150);
  ft_putstr("\n");
	ft_putstr("Should print number -5436 -> ");
	ft_putnbr(-5436);
  ft_putstr("\n");
	ft_putstr("Should print number 0 -> ");
	ft_putnbr(0);
  ft_putstr("\n");
	ft_putstr("Should print highest int -> ");
	ft_putnbr(2147483647);	
  ft_putstr("\n");
	ft_putstr("Should print lowest int -> ");
	ft_putnbr(-2147483648);
  ft_putstr("\n\n");

	ft_putstr("*** Testing ft_is_negative ***\n");
	ft_putstr("Should return P -> ");
	ft_is_negative(40);
  ft_putstr("\n");
	ft_putstr("Should return N -> ");
	ft_is_negative(-40);
  ft_putstr("\n");
	ft_putstr("Should return P on zero -> ");
	ft_is_negative(0);
  ft_putstr("\n\n");

	ft_putstr("*** Testing ft_ft ***\n");
	int nbr = 777;
	ft_putstr("Should take a pointer to int and set its value to 777 -> ");
	ft_ft(&nbr);
  ft_putstr("\n\n");

	ft_putstr("*** Testing ft_swap ***\n");
	int a = 44;
	int b = 88;
	ft_putstr("Original values of a and b: ");
	ft_putchar('\n');
	ft_putstr("a -> ");
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("b -> ");
	ft_putnbr(b);
	ft_putchar('\n');	
	ft_swap(&a, &b);
	ft_putstr("Swapped values of a and b: ");
	ft_putchar('\n');
	ft_putstr("a -> ");
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("b -> ");
	ft_putnbr(b);
  ft_putstr("\n\n");

	ft_putstr("*** Testing ft_div_mod ***\n");
	a = 10;
	b = 5;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	ft_putstr("div should be 2 -> ");
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putstr("mod should be 0 -> ");
	ft_putnbr(mod);
	ft_putstr("\n----------------------\n");
	a = 21;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	ft_putstr("div should be 5 -> ");
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putstr("mod should be 1 -> ");
	ft_putnbr(mod);
	ft_putstr("\n----------------------");
  ft_putstr("\n\n");

	ft_putstr("*** Testing ft_ultimate_div_mod ***\n");
	a = 100;
	b = 30;
	ft_ultimate_div_mod(&a, &b);
	ft_putstr("div should be 3 -> ");
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putstr("mod should be 10 -> ");
	ft_putnbr(b);
  ft_putstr("\n\n");
	
	ft_putstr("*** Testing ft_rev_int_tab ***\n");
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_putstr("Array of integers should be inverted -> ");
	ft_rev_int_tab(tab, 10);
  ft_putstr("\n\n");

	ft_putstr("*** Testing  ft_sort_int_tab ***\n");
	int tab1[10] = {8, 3, 0, 9, 1, 7, 6, 2, 4, 5};
	ft_sort_int_tab(tab1, 10);
	ft_putstr("Should print array of integers in ascending order -> ");
	int counter = 0;
	while(counter < 10)
	{
		ft_putnbr(tab1[counter]);
		counter++;
	}
	counter = 0;

	return(0);
}

