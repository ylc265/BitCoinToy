//
// Created by Yu Lin on 5/29/16.
//

#ifndef BITCOINTOY_TRANSACTION_H
#define BITCOINTOY_TRANSACTION_H

#include <string>
#include <vector>
#include <cryptopp/sha.h>
#include <rsa.h>
typedef std::string TRANSACTION_HASH;

namespace BitCoinToy
{
namespace Model
{
class Transaction {
public:
    Transaction(TRANSACTION_HASH prev, CryptoPP::RSA::PublicKey s_pk,
                CryptoPP::RSA::PublicKey r_pk, CryptoPP::RSA::PrivateKey s_sk);
public:
    TRANSACTION_HASH current;
    TRANSACTION_HASH prev;
    std::string signature;
    CryptoPP::RSA::PublicKey sender;
    CryptoPP::RSA::PublicKey receiver;
};
}
}
#endif //BITCOINTOY_TRANSACTION_H
