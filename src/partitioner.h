#pragma once
#include "hypergraph.h"

class Partitioner
{

public:
    Partitioner(Hypergraph *hgraph) {}
    ~Partitioner() {}

    void run() {}

    void report() {}

private:
    Hypergraph *hgraph_;
    Option *option_;

};