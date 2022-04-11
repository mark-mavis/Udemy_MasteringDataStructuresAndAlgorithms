#include "TreeRecursion.h"
#include <iostream>
/*
								fun(3)
								  |
---------------------------------------------------------
|				|										|
3			  fun(2)								  fun(2)
				|										|
	-------------------------------			-----------------------------
	|           |				  |			|        |				    |
	2		  fun(1)			fun(1)		2	  fun(1)			 fun(1)
				|				  |					|					|
		-------------      -------------     --------------		---------------
		|    |		|	   |	|	   |	 |	  |	      |		|	  |	      |
		1  fun(0) fun(0)   1  fun(0) fun(0)	 1	fun(0)	fun(0)	1	fun(0)	fun(0)

		
	For this particular function....
		Time complexity is O(2^n)
		Space complexity is O(n)

*/

void TreeRecursion(int n) {
	if (n > 0) {
		printf("%d", n);
		TreeRecursion(n - 1);
		TreeRecursion(n - 1);
	}
}