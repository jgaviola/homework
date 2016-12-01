//Josh
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {

srand(getpid());

char bluesclues;
//we just got a letter, we just got a letter, I wonder who it's from
float debt;
int t, c, s, q, g, m, p, a;
int ignition = 0;

	while (bluesclues != 'z'){

		printf("Yo whatchu need for Thanksgiving I got it\n");
		scanf(" %c", &bluesclues);

		if (bluesclues == 't'){
			printf("How many turkeys do you need?\n");
			scanf("%d", &ignition);
			t = t + ignition;
		}else if (bluesclues == 'c'){
        		printf("How many cranberry sauces do you need?\n");
        		scanf("%d", &ignition);
			c = c + ignition;
		}else if (bluesclues == 's'){
        		printf("How much stuffing do you need?\n");
        		scanf("%d", &ignition);
			s = s + ignition;
		}else if (bluesclues == 'q'){
        		printf("How much squash do you need?\n");
        		scanf("%d", &ignition);
			q = q + ignition;
		}else if (bluesclues == 'g'){
        		printf("How much gravy do you need?\n");
        		scanf("%d", &ignition);
			g = g + ignition;
		}else if (bluesclues == 'm'){
        		printf("How much mashed potatoes do you need?\n");
        		scanf("%d", &ignition);
			m = m + ignition;
		}else if (bluesclues == 'p'){
       		 	printf("How much sweet potatoes do you need?\n");
        		scanf("%d", &ignition);
			p = p + ignition;
		}else if (bluesclues == 'a'){
        		printf("How many apple pies do you need?\n");
	       		scanf("%d", &ignition);
			a = a + ignition;
		}else if (bluesclues == 'z'){
        	        continue;
		}else{
	    		 printf("We aint got that here\n");
		}
	}
	debt = ((t * 23.09) + (c * 1.5) + (s * 3.12) + (q * 1.75) + (g * 2.4) + (m * 3.02) + (p * 2) + (a * 8.49));

		printf("Receipt thingy:\n");
	if (t > 0){
		printf("Turkey: %d\n", t);
	}if (c > 0){
        	printf("Cranberry Sauce: %d\n", c);
	}if (s > 0){
        	printf("Stuffing: %d\n", s);
	}if (q > 0){
        	printf("Squash: %d\n", q);
	}if (g > 0){
        	printf("Gravy: %d\n", g);
	}if (m > 0){
        	printf("Mashed Potatoes: %d\n", m);
	}if (p > 0){
        	printf("Sweet Potatoes: %d\n", p);
	}if (a > 0){
        	printf("Apple Pie: %d\n", a);
	}

	printf("You spent this much: $%.2f\n", debt);
	if (debt > 100) {
		printf("Dang boy you spent a lot\n");
	}

	int num1 = rand();
	num1 = num1 % 20;
	int num2 = rand();
	num2 = num2 % 50;
	int num3 = rand();
	num3 = num3 % 400;

	if (num1 == 1){
		printf("Thanksgiving is cancelled due to:\nThe turkey was left in the oven too long\n");
	}else if (num2 == 1){
		printf("Thanksgiving is cancelled due to:\nYour obnoxious cousin broke all the plates\n");
	}else if (num3 == 1){
		printf("Thanksgiving is cancelled due to:\nSomehow, the apple pie caught on fire\n");
	}else{
		printf("Thanksgiving occurred without any problems\n");
	}
	return 0;
	}
