/*Joshua Gaviola*/
#include <stdio.h>
int main(void) {

	/*ROT13.5*/
	int shift = 13;
	int num = 5;
	char var = 'A'||'M'||'0'||'4'||'9'||'Z'||'z'||'a'||'m';
	char var2 = 'A'||'M'||'0'||'4'||'9'||'Z'||'z'||'a'||'m';
	char var3 = 'A'||'M'||'0'||'4'||'9'||'Z'||'z'||'a'||'m';
	char var4 = 'A'||'M'||'0'||'4'||'9'||'Z'||'z'||'a'||'m';
	char var5 = 'A'||'M'||'0'||'4'||'9'||'Z'||'z'||'a'||'m';
	printf("Enter a letter or numbers 0-9:");
	scanf(" %c", &var);
		if (var >= 'A' && var <= 'M'){
		var = var+shift;
		}else if (var >= '0' && var <= '4'){
                var = var+num;
		}else if (var > 'M' && var <= 'Z'){
		var = var-shift;
		}else if (var > '4' && var <= '9'){
		var = var-num;
		}else if (var >= 'a' && var <= 'm'){
		var = var+shift;
		}else if (var > 'm' && var <= 'z'){
		var = var-shift;
		}else if (var > '9' || var < '0'){
			printf("That is an invalid character.\n");
			return 0;
		}
	printf("Enter a letter or numbers 0-9:");
	scanf(" %c", &var2);
	        if (var2 >= 'A' && var2 <= 'M'){
                var2 = var2+shift;
                }else if (var2 >= '0' && var2 <= '4'){
                var2 = var2+num;
                }else if (var2 > 'M' && var2 <= 'Z'){
                var2 = var2-shift;
                }else if (var2 > '4' && var2 <= '9'){
                var2 = var2-num;
		}else if (var2 >= 'a' && var2 <= 'm'){
		var2 = var2+shift;
		}else if (var2 > 'm' && var2 <= 'z'){
		var2 = var2-shift;
		}else if (var2 > '9' || var2 < '0'){
			printf("That is an invalid character.\n");
			return 0;
                }
	printf("Enter a letter or numbers 0-9:");
	scanf(" %c", &var3);
	        if (var3 >= 'A' && var3 <= 'M'){
                var3 = var3+shift;
                }else if (var3 >= '0' && var3 <= '4'){
                var3 = var3+num;
                }else if (var3 > 'M' && var3 <= 'Z'){
                var3 = var3-shift;
                }else if (var3 > '4' && var3 <= '9'){
                var3 = var3-num;
		}else if (var3 >= 'a' && var3 <= 'm'){
		var3 = var3+shift;
		}else if (var3 > 'm' && var3 <= 'z'){
		var3 = var3-shift;
		}else if (var3 > '9' || var3 < '0'){
			printf("That is an invalid character.\n");
			return 0;
                }
	printf("Enter a letter or numbers 0-9:");
	scanf(" %c", &var4);
	        if (var4 >= 'A' && var4 <= 'M'){
                var4 = var4+shift;
                }else if (var4 >= '0' && var4 <= '4'){
                var4 = var4+num;
                }else if (var4 > 'M' && var4 <= 'Z'){
                var4 = var4-shift;
                }else if (var4 > '4' && var4 <= '9'){
                var4 = var4-num;
		}else if (var4 >= 'a' && var4 <= 'm'){
		var4 = var4+shift;
		}else if (var4 > 'm' && var4 <= 'z'){
		var4 = var4-shift;
		}else if (var4 > '9' || var4 < '0'){
			printf("That is an invalid character.\n");
			return 0;
                }
	printf("Enter a letter or numbers 0-9:");
	scanf(" %c", &var5);
	        if (var5 >= 'A' && var5 <= 'M'){
                var5 = var5+shift;
                }else if (var5 >= '0' && var5 <= '4'){
                var5 = var5+num;
                }else if (var5 > 'M' && var5 <= 'Z'){
                var5 = var5-shift;
                }else if (var5 > '4' && var5 <= '9'){
                var5 = var5-num;
		}else if (var5 >= 'a' && var5 <= 'm'){
		var5 = var5+shift;
		}else if (var5 > 'm' && var5 <= 'z'){
		var5 = var5-shift;
		}else if (var5 > '9' || var5 < '0'){
			printf("That is an invalid character.\n");
			return 0;
                }
	printf("Your rotated characters are: %c%c%c%c%c\n", var, var2, var3, var4, var5);
return 0;
}
