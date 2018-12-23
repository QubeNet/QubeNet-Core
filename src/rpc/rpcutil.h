// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2016 The Bitcoin Core developers
// Copyright (c) 2017 The Qubnet Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_RPCUTIL_H
#define BITCOIN_RPCUTIL_H

#include <univalue.h>
#include <string>

class JSONRPCRequest;

UniValue CallRPC(std::string args, std::string wallet="");

void AddUri(JSONRPCRequest &request, std::string wallet);
void CallRPC(UniValue &rv, const JSONRPCRequest &request);

#endif // BITCOIN_RPCUTIL_H

