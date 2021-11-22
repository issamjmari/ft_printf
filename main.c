#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
 
// int main()
// {
//     /* this computes the average of 13.2, 22.3 and 4.5 (3 indicates the number of values to average) */
//     // int ret = ft_print\0f("%%Ok man %u", -2);
//     // printf("%%Ok man %u", -2);
//     // int i = -5000;
//     int ret = ft_printf("%%I am not %s , i am %d or %i respect me %c** %u. I'll be %x and %X %p\n", "a comedian", 62, 63, 'b', -1, 245, 649, (void *) 2158);
//     int r = printf("%%I am not %s , i am %d or %i respect me %c** %u. I'll be %x and %X %p\n", "a comedian", 62, 63, 'b', -1, 245, 649, (void *) 2158);
//     ft_printf("%d\n", ret);
//     printf("%d\n", r);
//     // int r = printf("Ok man %c Ok man %d %s %d\n", 'k', 24, "Shutup", 154);
//     // ft_printf("%d\n", ret);
//     // printf("%d\n", r);
//     /* here it computes the average of the 5 values 3.3, 2.2, 1.1, 5.5 and 3.3 */
// }

int main(void) {
	printf("%p\n", -1);
	ft_printf("%p", -1);
	// ft_printf("%s\n", NULL);
	// ft_printf("%d\n", 2030);
}