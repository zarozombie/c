/* count some characters
 * yay
 */

#include <stdio.h>

#define  MAXLINE 1000

int main(){
   int len;
   int max;
   char line[MAXLINE];
   char save[MAXLINE];

   max = 0;
   while ((len = get_line(line, MAXLINE)) > 0)
	   if (len > max
}
