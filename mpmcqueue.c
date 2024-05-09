#include "MPMCQueue.h"

#include "queue.h"

using queue_t = MPMCQueue<void *>;

void queue_init(queue_t *q, int nprocs) { q = new MPMCQueue<void *>(); }
void queue_register(queue_t *q, handle_t *th, int id) {}
void enqueue(queue_t *q, handle_t *th, void *v) { q->push(v); }
void *dequeue(queue_t *q, handle_t *th) {
  void *v;
  q->pop(v);
  return v;
}
void queue_free(queue_t *q, handle_t *h) { delete q; }
void handle_free(handle_t *h) {}
