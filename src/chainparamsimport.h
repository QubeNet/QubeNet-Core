#ifndef BITCOIN_CHAINPARAMSIMPORT_H
#define BITCOIN_CHAINPARAMSIMPORT_H


void AddImportHashesMain(std::vector<CImportedCoinbaseTxn> &vImportedCoinbaseTxns)
{
    vImportedCoinbaseTxns.push_back(CImportedCoinbaseTxn(1,  uint256S("4c125d2612d85bf50ac4fdcd4bbf05da91233375ab4d5bcb5800c65d3de4b99e")));

};


void AddImportHashesTest(std::vector<CImportedCoinbaseTxn> &vImportedCoinbaseTxns)
{
  vImportedCoinbaseTxns.push_back(CImportedCoinbaseTxn(1,  uint256S("9d710f8fe54ba1dd6cfd3563ea4547592b7a008a10f23cd04e64406c68fc5e9f")));
};


#endif // BITCOIN_CHAINPARAMSIMPORT_H
