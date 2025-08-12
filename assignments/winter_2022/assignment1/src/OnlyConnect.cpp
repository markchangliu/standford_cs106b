/* File: OnlyConnect.cpp
 *
 * TODO: Edit these comments to describe anything interesting or noteworthy in your implementation.
 *
 * TODO: Edit these comments to leave a puzzle for your section leader to solve!
 */
#include "OnlyConnect.h"
#include "GUI/SimpleTest.h"
#include "strlib.h"

using namespace std;

string onlyConnectize(string phrase) {
    /* TODO: The next few lines just exist to make sure you don't get compiler warning messages
     * when this function isn't implemented. Delete these lines, then implement this function.
     */
    string phrase_new;
    for (char ch: phrase)
    {
        if (!((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)))
        {
            continue;
        }
        
        if (ch >= 97 && ch <= 122)
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                continue;
            }
        }
        
        if (ch >= 65 && ch <= 90){
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                continue;
            }
        }
        
        phrase_new += ch;
    }
    
    phrase_new = toUpperCase(phrase_new);
    
    return phrase_new;
}






/* * * * * * Provided Test Cases * * * * * */

PROVIDED_TEST("Converts lower-case to upper-case.") {
    EXPECT_EQUAL(onlyConnectize("lowercase"), "LWRCS");
    EXPECT_EQUAL(onlyConnectize("uppercase"), "PPRCS");
}

PROVIDED_TEST("Handles non-letter characters properly.") {
    EXPECT_EQUAL(onlyConnectize("2.718281828459045"), "");
    EXPECT_EQUAL(onlyConnectize("'Hi, Mom!'"), "HMM");
}

PROVIDED_TEST("Handles single-character inputs.") {
    EXPECT_EQUAL(onlyConnectize("A"), "");
    EXPECT_EQUAL(onlyConnectize("+"), "");
    EXPECT_EQUAL(onlyConnectize("Q"), "Q");
}

/* TODO: You will need to add your own tests into this suite of test cases. Think about the sorts
 * of inputs we tested here, and, importantly, what sorts of inputs we *didn't* test here. Some
 * general rules of testing:
 *
 *    1. Try extreme cases. What are some very large cases to check? What are some very small cases?
 *
 *    2. Be diverse. There are a lot of possible inputs out there. Make sure you have tests that account
 *       for cases that aren't just variations of one another.
 *
 *    3. Be sneaky. Don't just try standard inputs. Try weird ones that you wouldn't expect anyone to
 *       actually enter, but which are still perfectly legal.
 *
 * Happy testing!
 */

PROVIDED_TEST("Examples from assignment sheet"){
    EXPECT_EQUAL(onlyConnectize("Elena Kagan"), "LNKGN");
    EXPECT_EQUAL(onlyConnectize("Antonin Scalia"), "NTNNSCL");
    EXPECT_EQUAL(onlyConnectize("EE 364A"), "");
    EXPECT_EQUAL(onlyConnectize("For sale: baby shoes, never worn."), "FRSLBBYSHSNVRWRN");
    EXPECT_EQUAL(onlyConnectize("I'm the bad guy. (Duh!)"), "MTHBDGYDH");
    EXPECT_EQUAL(onlyConnectize("Annie Mae, My Sea Anemone Enemy!"), "NNMMYSNMNNMY");
}





