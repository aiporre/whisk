/**
 * DEQUE 
 *
 * Implimented as a resizable array.
 * Holds pointers to objects.
 *
 * TODO: Impliment as resizable circular buffer
 *       + front and back operations are symmetric
 *       + If the size of the active area of the store remains constant
 *          never reallocs.
 *
 */

#ifndef H_DEQUE
#define H_DEQUE

typedef struct _Deque
{ void **store;
  size_t front;  //offsets in store wrt base store pointer, so store can be realloced
  size_t back;  
  size_t size_bytes;
} Deque;

SHARED_EXPORT inline  Deque *Deque_Alloc      ( int size_hint );
SHARED_EXPORT inline  void   Deque_Free       ( Deque *self );
SHARED_EXPORT inline  void   Deque_Reset      ( Deque *self );
SHARED_EXPORT inline  void   Deque_Squeeze    ( Deque *self );
SHARED_EXPORT inline  void  *Deque_Front      ( Deque *self);
SHARED_EXPORT inline  int    Deque_Is_Empty   ( Deque *self);
SHARED_EXPORT inline  void  *Deque_Back       ( Deque *self);
SHARED_EXPORT inline  Deque *Deque_Push_Front ( Deque *self, void *item );
SHARED_EXPORT inline  void  *Deque_Pop_Front  ( Deque *self );
SHARED_EXPORT inline  Deque *Deque_Push_Back  ( Deque *self, void *item );
SHARED_EXPORT inline  void  *Deque_Pop_Back   ( Deque *self );

#endif
