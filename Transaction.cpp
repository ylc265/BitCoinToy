//
// Created by Yu Lin on 5/29/16.
//
#include "Transaction.h"
#include <filters.h>
#include <hex.h>
#include <pssr.h>
#include <osrng.h>

using namespace BitCoinToy::Model;
using namespace CryptoPP;

Transaction::Transaction(TRANSACTION_HASH prev, CryptoPP::RSA::PublicKey s_pk,
                         CryptoPP::RSA::PublicKey r_pk, CryptoPP::RSA::PrivateKey s_sk) {
    this->prev = prev;
    this->sender = s_pk;
    this->receiver = r_pk;
    SHA256 hash;
    StringSource s(prev, true, new HashFilter(hash, new HexEncoder(new StringSink(this->current))));

    // generate signature
    AutoSeededRandomPool rng;
    RSASS<PSS, SHA256>::Signer signer(s_sk);
    StringSource ss1(this->current, true, new SignerFilter(rng, signer, new StringSink(this->signature)));
    printf("Created Transaction with Id: %s, Signature %s\n", this->current, this->signature);
}
