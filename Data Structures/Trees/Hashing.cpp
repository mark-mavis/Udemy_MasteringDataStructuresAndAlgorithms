
/* HASH FUNCTION
* 
* a hash function maps a big number or string to a small integer that 
* can be used as index in hash table. A good hash function should have following
* properties...
* 
*	- Efficiently computable
*	- Should uniformly distribute the keys (Each table position equally likely
*		for each key)
* 
* HASH TABLE
* 
* An array that stores pointers to records corresponding to a given phone number. An
* entry in hash table is NIL if no existing phone number has function value equal 
* to the index for the entry. 
* 
* Collusion Handling: 
* 
* Since a hash function gets us a smaller number for a big key, there is a possibility
* that two keys result in the same value. The situation where a newly inserted key 
* maps to an already occupied slot in hash table is called collision and must be 
* handled using some collision handling technique.
* 
*	- Separate Chaining: The idea is to make each cell of the hash table point to a linked list of 
*		records that have some hash function vale. Chaining simple, but requires additional
*		memory outside the table.
*	- Open Addressing: All elements are stored in the hash table itself. Each table
*		entry contains either a record of NIL. When searching for an element, we examine
*		the table slots one by one until the desired element is found or it is clear that
*		the element is not in the table.
* 
*/