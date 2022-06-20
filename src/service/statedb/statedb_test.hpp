#ifndef STATEDB_TEST_HPP
#define STATEDB_TEST_HPP

#include "statedb_client.hpp"

void runStateDBTest (StateDBClient* client);
void runStateDBLoad (const Config& config);
bool loadRoot (Goldilocks &fr, pqxx::connection *pConnection, int id, Goldilocks::Element (&root)[4]);
bool saveRoot (Goldilocks &fr, pqxx::connection *pConnection, int id, Goldilocks::Element (&root)[4]);
void* stateDBTestThread (StateDBClient* pClient);
void* stateDBLoadThread (const Config& config, uint8_t idBranch);

#endif