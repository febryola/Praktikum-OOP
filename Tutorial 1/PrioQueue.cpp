#include "PrioQueue.hpp"
#include <iostream>

PrioQueue::PrioQueue()
{
    this->neff = 0;
    this->maxEl = 20;
    this->queue = new PQElmt[this->maxEl];
}

PrioQueue::PrioQueue(int maxEl)
{
    this->neff = 0;
    this->maxEl = maxEl;
    this->queue = new PQElmt[this->maxEl];
}

PrioQueue::PrioQueue(const PrioQueue &pq)
{
    this->neff = pq.neff;
    this->maxEl = pq.maxEl;
    this->queue = new PQElmt[this->maxEl];
    for (int i = 0; i < this->maxEl; i++)
    {
        this->queue[i] = pq.queue[i];
    }
}

PrioQueue::~PrioQueue()
{
    delete[] this->queue;
}

void PrioQueue::push(PQElmt el)
{
    int idx = this->neff;
    while (idx > 0 && el > this->queue[idx - 1])
    {
        this->queue[idx] = this->queue[idx - 1];
        idx--;
    }
    this->queue[idx] = el;
    this->neff += 1;
}

PQElmt PrioQueue::pop()
{
    PQElmt val = this->queue[0];
    for (int i = 0; i < this->neff - 1; i++)
    {
        this->queue[i] = this->queue[i + 1];//elemen ke 0 ditimpa
    }
    this->neff -= 1;
    return val;
}

PQElmt PrioQueue::operator[](int k)
{
    if (k < 0 || k >= this->neff)
    {
        return PQElmt();
    }
    else
    {
        return this->queue[k];
    }
}

PrioQueue operator+(const PrioQueue &a, const PrioQueue &b)
{
    int maxElGabungan = a.maxEl + b.maxEl;
    PrioQueue result = PrioQueue(maxElGabungan);
    int i = 0;
    for (i = 0; i < a.neff; i++)
    {
        result.push(a.queue[i]);
    }
    for (i = 0; i < b.neff; i++)
    {
        result.push(b.queue[i]);
    }
    return result;
}