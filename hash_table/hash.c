//Hash table defintions and function definitions 
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


//Defining a structure to represent an object of a hash table
struct hash_item {
  //we will have the structure hold a string key and string value pair
  char* key;
  char* value;
};

//Defining the structure to represent the hash table itself
struct hash_table {
  //max number of hash objects this table can hold
  int size;
  //The current number of hash objects in the table 
  int count;
  //The pointer to the list of hash objects
  struct hash_item** items;
};

//constructor for a hash_item
//Constructor is static to restrict its use soley in the functions related to the manipulation of hash tables

//The function returns a pointer to a hash_item structure data object 
static struct hash_item* new_hash_item(const char* key, const char* value){
  //allocate new memory for a new hash item
  struct hash_item* new_item = malloc(sizeof(struct hash_item));
  new_item->key = strdup(key);                //strdup allocates enough memory to duplicate the
  new_item->value = strdup(value);            //string, then returns a pointer to the string
  return new_item;
}
