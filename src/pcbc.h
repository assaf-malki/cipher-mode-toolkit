/*
 * Block Cipher Modes of Operation
 * @author Assaf Malki
 * @email assafmalki@gmail.com
 *
 */
#ifndef __PCBC_H__
#define __PCBC_H__

#include <stdint.h>

#include "block-cipher.h"

size_t pcbc(blockcipher_fn cipher, uint8_t direction,
  uint8_t *in,
  uint8_t *out,
  uint8_t *iv,
  uint8_t *key,
  size_t key_size,
  size_t block_size,
  size_t length,
  uint8_t last);

#endif
