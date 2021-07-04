#include <gtest/gtest.h>

#include <iostream>
#include "Snap.h"

TEST(TVecTest, TIntVMergeV) {
    TIntV V1; V1.Add(1); V1.Add(2); V1.Add(3); V1.Add(4);
    TIntV V2; V1.Add(7); V1.Add(4); V1.Add(5); V1.Add(2);
    TIntV V3; V1.Add(1); V1.Add(2); V1.Add(3); V1.Add(4); V1.Add(5); V1.Add(7);
    // Merge with unsorted normal TIntV
    V1.AddVMerged(V2);
    EXPECT_TRUE(V1.Len(), V3.Len());
    for (TInt ValN = 0; ValN < V1.Len(); ValN++) {
        EXPECT_TRUE(V1[ValN], V3[ValN]);
    }

    // Merge with sorted normal TIntV
    // Merge with TIntV with duplications
    // Merge empty TIntV
    // Empty TIntV merges with another normal TIntV
    // Empty TIntV merges with another empty TIntV
}

TEST(TVecTest, TStrVMergeV) {

}