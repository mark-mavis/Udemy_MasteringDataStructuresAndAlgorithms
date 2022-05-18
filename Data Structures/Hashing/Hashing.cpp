
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
*		Advantages:
*			1. Simple to implement
*			2. Hash table never fills up, we can always add more elements to the chain
*			3. Less sensitive to the hash function or load factors
*			4. It is mostly used when it is unknown how many and how frequently keys my be
*				inserted or deleted. 
*		Disadvantages:
*			1. Cache performance of chaining is not good as keys are stored using a linked 
*				list. Open addressing provides better cache performance as everything is stored
*				in the same table. 
*			2. Wastage of Space (Some Parts of hash table are never used)
*			3. If the chain becomes long, then search time can become O(n) in the worst case.
*			4. Uses extra space for link.
* 
*	- Performance of Chaining:
*		Performance of hashing can be evaluated under the assumption that each key is equally likely
*		to be hashed to any slot of table (simple uniform hashing).
*	
*				m = Number of slots in hash table
*				n = Number of keys to be insterted in hash table
* 
*				Load factor alpha = n/m
*				Expected time to search = O(1+alpha)
*				Expected time to delete = O(1+alpha)
*				Time to insert = O(1)
*				Time complexity of search insert and delete is O(1) if alpha is O(1)
*				
* 
*	- Open Addressing: All elements are stored in the hash table itself. Each table
*		entry contains either a record of NIL. When searching for an element, we examine
*		the table slots one by one until the desired element is found or it is clear that
*		the element is not in the table.
* 
*		
* 
*/