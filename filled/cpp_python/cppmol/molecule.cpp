#include <pybind11/pybind11.h>
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


PYBIND11_MODULE(cppmol, m) {
    m.doc() = "Some Molecule stuff";

    pybind11::class_<Atom>(m, "Atom")
      .def(pybind11::init<>())
      .def_readwrite("atomic_number", &Atom::atomic_number)
      .def_readwrite("x", &Atom::x)
      .def_readwrite("y", &Atom::y)
      .def_readwrite("z", &Atom::z)
    ;

    pybind11::class_<Molecule>(m, "Molecule")
      .def(pybind11::init<>())
      .def("size", &Molecule::size)
      .def("add_atom", &Molecule::add_atom)
      .def("get_atom", static_cast<Atom & (Molecule::*)(int)>(&Molecule::get_atom), pybind11::return_value_policy::reference)
    ;

}
