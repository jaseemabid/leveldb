#include <iostream>
#include <cassert>

#include "leveldb/db.h"
#include "leveldb/options.h"

int main() {
	std::cout << "Hello, world!\n";

    leveldb::DB* db;
    leveldb::Options options;
    options.create_if_missing = true;
    leveldb::Status status = leveldb::DB::Open(options, "/tmp/testdb", &db);
    assert(status.ok());
    return 0;
}
