#ifndef METROPOLIS_H
#define METROPOLIS_H
using namespace std;
#include "../sampler.h"

class Metropolis : public Sampler {
private:
    double m_psi;
    double m_accepted;
public:
    Metropolis(int nSamples, int nCycles, Hamiltonian *hamiltonian,
               NeuralQuantumState *nqs);
    void samplePositions();
};

#endif // METROPOLIS_H
