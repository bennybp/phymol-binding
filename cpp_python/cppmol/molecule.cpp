#include <molecule.hpp>

void Molecule::add_atom(const Atom & atom)
{
    atoms_.push_back(atom);
}

Atom & Molecule::get_atom(int index)
{
    return atoms_.at(index);
}

const Atom & Molecule::get_atom(int index) const
{
    return atoms_.at(index);
}

Atom & Molecule::operator[](int index)
{
    return atoms_.at(index);
}

const Atom & Molecule::operator[](int index) const
{
    return atoms_.at(index);
}


