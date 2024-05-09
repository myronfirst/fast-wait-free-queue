#ifndef MPMCQUEUE_H
#define MPMCQUEUE_H

#define MPMCQUEUE
#ifdef MPMCQUEUE
#include "mpmcqueueimpl.h"

typedef struct DOUBLE_CACHE_ALIGNED {
  rigtorp::MPMCQueue<void *> q;
} queue_t;

typedef struct {
} handle_t;

#endif

#endif
