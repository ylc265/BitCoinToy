//
// Created by Yu Lin on 5/29/16.
//
#include "BitCoinClient.h"

using namespace std;;
using namespace BitCoinToy;
using namespace BitCoinToy::Model;

BitCoinClient::BitCoinClient(ClientConfig config) {
}

void BitCoinClient::CreateTransaction(string pk, int amount) {
    Transaction transaction = Transaction(this->pk, sk_, pk);
    // build the transaction/s

    // broadcast the transactions
//    for (BitCoinClient peer: peers_) {
////        peer.ProcessTransaction();
//    }
}

int BitCoinClient::CheckAmount() {
//    return block_chain.Amount(string pk);
    return 0;
}

void BitCoinClient::ProcessTransaction(Transaction transaction) {
//    Block block;
    // create new block with the current transaction

//    for (BitCoinClient peer: peers_) {
//        peer.ProcessBlock(block);
//        // if all correct, we are done, if failure, then something else
//    }
}