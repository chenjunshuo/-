#ifndef _HASH_H_
#define _HASH_H_

//¹şÏ£±í(·ºĞÍ)
typedef struct hash hash_t;

typedef unsigned int (*hashfunc_t)(unsigned int, void*);

hash_t* hash_alloc(unsigned int buckets, hashfunc_t hash_func);//ÉêÇë

void* hash_lookup_entry(hash_t *hash, void* key, unsigned int key_size);//²éÑ¯

void hash_add_entry(hash_t *hash, void *key, unsigned int key_size,void *value, unsigned int value_size);//²åÈë

void hash_free_entry(hash_t *hash, void *key, unsigned int key_size);//É¾³ı


#endif /* _HASH_H_ */