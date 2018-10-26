#include <stdio.h>
#include "TestBase.hpp"
#include "TestGeneric.hpp"
#include "TestString.hpp"
#include "TestList.hpp"
#include "TestSet.hpp"
#include "TestHash.hpp"
#include "TestZset.hpp"
#include "TestConcur.hpp"

int main(int argc, char **argv)
{
    std::string strHost = "192.168.2.17:7000";
	std::string password = "myredis";
    //std::string strHost = "127.0.0.1";

    while (1)
    {
        CTestBase testBase;
        if (!testBase.StartTest(strHost, password))
            break;

        //CTestGeneric testKeys;
        //if (!testKeys.StartTest(strHost))
        //    break;

        CTestString testStr;
        if (!testStr.StartTest(strHost, password))
            break;

        //CTestList testList;
        //if (!testList.StartTest(strHost, password))
        //    break;

        //CTestSet testSet;
        //if (!testSet.StartTest(strHost, password))
        //    break;

        //CTestHash testHash;
        //if (!testHash.StartTest(strHost, password))
        //    break;

        CTestZset testZset;
        if (!testZset.StartTest(strHost, password))
            break;

        //CTestConcur testConcur;
        //if (!testConcur.StartTest(strHost, password))
        //    break;

        break;
    }
    return 0;
}

