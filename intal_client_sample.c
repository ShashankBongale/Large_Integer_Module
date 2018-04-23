//A sample client for intal.h

//Expected output for this client:
/*
First intal: 4999
Second intal: 2001
Two intals after increment and decrement:
5000
2000
Max of two intals: 5000
Sum: 7000
Diff: 3000
Product: 10000000
Quotient: 2
5000 ^ 2: 25000000
*/

#include <stdio.h>
#include "intal.h"

int main(int argc, char const *argv[]) {
char *str1 ="302180228404815726530465119077995359036614149249468712057494546291578864127763658082490885938493260159380969183173190089772262960437367832068929355031282894322348393777322487807888196810735638654825345465426531685320653462534652465426534265342626456254625486514653416534196541654865411654196514659654651498654651468541965419687149655165149685146546154164165716851616543268651654925615146541654654614646513187889764165416541635416415454164154164165416874615343511134";
char *str2 ="1384789726902020528593888400273850110424837794816845165486174651416546154916846851468146546845146871465416815416871461541865418654165416541685714657614654168746135416354165341646857075694424561771163401122198646890357571469447450113489311365420470176822535156272949725528862404412714426671721150559868634225158193355490833329086827599416874818564156174685456461541654654153465746368141546851346816542654235146541651651313413563134651635614";
	void *intal1;
	void *intal2;
	void *sum;
	void *diff;
	void *product;
	void *quotient;
	void *exp;

	intal1 = intal_create(str1); //4999
	intal2 = intal_create(str2); //2001

	printf("First intal: %s\n", intal2str(intal1)); //4999
	printf("Second intal: %s\n", intal2str(intal2)); //2001

  //intal1 = intal_increment(intal1); //5000
  //intal2 = intal_decrement(intal2); //2000

	printf("Two intals after increment and decrement:\n");
	printf("%s\n", intal2str(intal1)); //5000
  printf("%s\n", intal2str(intal2)); //2000

	printf("Max of two intals: %s\n", //5000
		(intal_compare(intal1, intal2) > 0) ? intal2str(intal1) : intal2str(intal2));
	//intal_destroy(product);
	sum = intal_add(intal1, intal2); //7000
	printf("Sum: %s\n", intal2str(sum));
	intal_destroy(sum);


	diff = intal_diff(intal1, intal2);
	printf("diff: %s\n", intal2str(diff));
	intal_destroy(diff);

	product = intal_multiply(intal1, intal2); //10000000
	printf("Product: %s\n", intal2str(product));
	intal_destroy(product);
/*
	char *str3="9";
  void *intal3 = intal_create(str3);*/

	quotient = intal_divide(intal1, intal2); //2
	printf("Quotient: %s\n", intal2str(quotient));
  //intal_destroy(quotient);
	exp = intal_pow(intal1, quotient); //5000^2 = 25000000
	printf("%s ^ %s: %s\n", intal2str(intal1), intal2str(quotient), intal2str(exp));
  intal_destroy(exp);
	//intal_destroy(quotient);




//Make sure you destroy all the intals created.
	//intal_destroy(sum);
	//intal_destroy(diff);
	//intal_destroy(product);
	//intal_destroy(quotient);
	//intal_destroy(exp);
	//intal_destroy(intal1);
	//intal_destroy(intal2);

	return 0;
}
