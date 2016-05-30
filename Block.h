//
// Created by Yu Lin on 5/29/16.
//

#ifndef BITCOINTOY_BLOCK_H
#define BITCOINTOY_BLOCK_H

#include "Transaction.h"

namespace BitCoinToy
{
namespace Mode
{
class Block {
public:
    string hash_prev_block; // hash of previous block header
    int nonce;
    Transaction transaction;
};
}
}
#endif //BITCOINTOY_BLOCK_H
