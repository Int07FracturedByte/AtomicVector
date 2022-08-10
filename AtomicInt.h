#pragma once
#include <vector>
#include <atomic>

struct AtomicInt
{
    std::atomic<int> _a;

    AtomicInt()
        :_a()
    {}

    AtomicInt(int a){
        std::atomic<int> t(a);
        _a.store(t.load());
    }

    AtomicInt(const AtomicInt& other)
        :_a(other._a.load())
    {}

    AtomicInt& operator=(const AtomicInt& other)
    {
        _a.store(other._a.load());
        return *this;
    }

    operator int() { return _a.load(); }
};
