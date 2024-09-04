import cppmol

a = cppmol.Atom()
a.atomic_number = 6
a.x = 10.0
a.y = 20.0
a.z = 30.0

mol = cppmol.Molecule();
print("Initial size: ", mol.size())

mol.add_atom(a)

print("Size now: ", mol.size())

a = mol.get_atom(0)
print(a.atomic_number, a.x, a.y, a.z)
a.x = 999.0;

a = mol.get_atom(0)
print(a.atomic_number, a.x, a.y, a.z)
