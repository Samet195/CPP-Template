// this code is taken from: https://gist.github.com/AFutureD/f6d4da7c39987779be4439e593933f39

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <string>

#define REP(i, n) for (int i = 0; i < (n); i++)
#define REP_1(i, n) for (int i = 1; i < (n); i++)
#define FOR(i, A, B) for (int i = (A); i < (B); i++)
#define REP_N(i, n) for (int i = 0; i <= (n); i++)
#define REP_1_N(i, n) for (int i = 1; i <= (n); i++)
#define FOR_N(i, A, B) for (int i = A; i <= (B); i++)
#define DWN(i, n) for (int i = (n); i > 0; i--)
#define DWN_1(i, n) for (int i = (n); i > 1; i--)
#define FOR_D(i, A, B) for (int i = (A); i > (B); i--)
#define DWN_0(i, n) for (int i = (n)-1; i >= 0; i--)
#define DWN_1_N(i, n) for (int i = (n); i >= 1; i--)
#define FOR_D_N(i, A, B) for (int i = (A); i >= (B); i--)
#define FILEIN(file) freopen((file), "r", stdin)
#define FILEOUT freopen("out.text", "w", stdin)
#define DEBUGB(block, message) cout << std::setw((block)*4) << "" << "DEBUG Block " << (block) << ": BEGIN " << (message) << endl
#define DEBUGE(block, message) cout << std::setw((block)*4) << "" << "DEBUG Block " << (block) << ": END " << (message) << endl
#define MEM0(OBJ) memset((OBJ), 0, sizeof((OBJ)))
#define MEMINIT(OBJ, VALUE) memset((OBJ), (VALUE), sizeof((OBJ)))
