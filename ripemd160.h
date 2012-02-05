// ***********************************************************************
// ripemd160.h
// ***********************************************************************
//
// This describes functions exported by ripemd160.c
// To calculate a RIPEMD-160 hash, call ripemd160_begin(), then call
// ripemd160_writebyte () for each byte of the message, then call
// ripemd160_finish(). The hash will be in H[0], H[1], ..., H[4] of the hash
// state.
//
// This file is licensed as described by the file LICENCE.

#ifndef RIPEMD160_H_INCLUDED
#define RIPEMD160_H_INCLUDED

#include "common.h"
#include "hash.h"

extern void ripemd160_begin(hash_state *hs);
extern void ripemd160_writebyte(hash_state *hs, u8 byte);
extern void ripemd160_finish(hash_state *hs);

#endif // #ifndef RIPEMD160_H_INCLUDED