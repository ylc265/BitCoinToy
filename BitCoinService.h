//
// Created by Yu Lin on 5/29/16.
//

#ifndef BITCOINTOY_BITCOINSERVICE_H
#define BITCOINTOY_BITCOINSERVICE_H

#include <vector>

namespace BitCoinToy
{
namespace Model
{
class Service{
public:
    Service();
    Service(ServiceConfig config);

    void BroadcastTransaction(Transaction transaction);

    // return true if the Block is correct.
    bool verifyBlock(Block block);
private:
    std::vector<Service> peers;
};

class ServiceConfig {

};
}
}

#endif //BITCOINTOY_BITCOINSERVICE_H
