#ifndef __COUNTER_H__
#define __COUNTER_H__


struct counter;
typedef struct counter counter_t;

counter_t *counter_create(int start);
void counter_drop(counter_t *c);

void counter_add(counter_t *c, int amt);
void counter_sub(counter_t *c, int amt);


void counter_inc(counter_t *c);
void counter_dec(counter_t *c);

int counter_getval(counter_t *c);

#endif