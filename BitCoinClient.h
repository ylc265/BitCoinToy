//
// Created by Yu Lin on 5/29/16.
//

#ifndef BITCOINTOY_BITCOINCLIENT_H
#define BITCOINTOY_BITCOINCLIENT_H

#include <string>
#include "Transaction.h"

namespace BitCoinToy
{
class ClientConfig {

};

class BitCoinClient {
public:
    BitCoinClient(ClientConfig config);

    // send bitcoins to the client with public key pk
    void CreateTransaction(std::string pk, int amount);

    // returns how many bitcoins client currently has according to the block chain.
    int CheckAmount();

    void ProcessTransaction(BitCoinToy::Model::Transaction transaction);

    void ProcessBlock(BitCoinToy::Model::Block block);
    PK pk;
private:
    SK sk_;
    std::map<string block_hash, BitCoinToy::Model::Block> block_chain_;
    std::vector<BitCoinClient> peers_;
};

} // namespace BitCoinToy


#endif //BITCOINTOY_BITCOINCLIENT_H
