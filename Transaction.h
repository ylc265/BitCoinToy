//
// Created by Yu Lin on 5/29/16.
//

#ifndef BITCOINTOY_TRANSACTION_H
#define BITCOINTOY_TRANSACTION_H

#include <string>
#include <vector>
#include <cryptopp/sha.h>

typedef std::string PK;
typedef std::string SK;

namespace BitCoinToy
{
namespace Model
{
class Transaction {
public:
    Transaction(std::string from_pk, std::string from_sk, std::string to_pk);

    // see if the signature and the content of signature is correct.
    bool HasValidSignature();
public:
    std::string id;
    std::string prev_transaction_id;
    byte signature;
    PK sender;
    PK receiver;
};
}
}
#endif //BITCOINTOY_TRANSACTION_H
