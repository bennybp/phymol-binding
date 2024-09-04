import ctypes

mymathlib = ctypes.cdll.LoadLibrary("./libmymath.so") 

average_3 = mymathlib.average_3
average = mymathlib.average

average_3.argtypes = [ctypes.c_double, ctypes.c_double, ctypes.c_double]
average_3.restype = ctypes.c_double

a = average_3(9.0, 2.0, 3.0)
print(a)

# With a list

average.argtypes = [ctypes.POINTER(ctypes.c_double), ctypes.c_int]
average.restype = ctypes.c_double

values = [9.0, 2.0, 3.0]

array_type = ctypes.c_double * len(values)
values_c = array_type(*values)

a = average(values_c, len(values_c))
print(a)
