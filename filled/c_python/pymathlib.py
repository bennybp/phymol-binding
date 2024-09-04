import ctypes

libmymath = ctypes.cdll.LoadLibrary("./libmymath.so") 
print(libmymath)

print(libmymath.average)

average = libmymath.average

average.argtypes = [ctypes.c_double, ctypes.c_double, ctypes.c_double]
average.restype = ctypes.c_double

a = average(9.0, 2.0, 3.0)
print(a)

