#pragma once

#include <vector>
#include <array>


struct Atom
{
    int atomic_number;
    double x;
    double y;
    double z;
};


class Molecule
{
    private:
        std::vector<Atom> atoms_;

    public:
        Molecule() = default;

        Molecule(const std::vector<Atom> & atoms)
            : atoms_(atoms) { }

        Molecule(std::vector<Atom> && atoms)
            : atoms_(atoms) { }

        size_t size(void) const { return atoms_.size(); }

        void add_atom(const Atom & atom);

        Atom & get_atom(int index);

        const Atom & get_atom(int index) const;

        Atom & operator[](int index);

        const Atom & operator[](int index) const;
};
