### CPU specific flags for gcc/gfortran.
#CPUOPT = 

# Optimization flags
OPT = -O3 -funroll-all-loops -ffast-math $(CPUOPT)
OPT_ACCURATE = -O3 -funroll-all-loops $(CPUOPT)
NO_OPT = -O0

# Compiler flags
FFLAGS = -g -fno-second-underscore  -W -Wall $(OPT)
FFLAGS_NOOPT = -g  -fno-second-underscore -W -Wall $(NOOPT) 
FFLAGS_ACCURATE = -g  -fno-second-underscore -W -Wall $(OPT_ACCURATE)
CFLAGS = -g  -W -Wall  $(OPT) 
LINKFLAGS = -g  -W -Wall  $(OPT) 

# Which compiler and linker to use
CC = gcc
F77 = gfortran 
LINKER = gfortran 
MAKELIB = ar rc

# Linker paths and flags
LIBPATH =  -L/usr/lib
BLAS = -lblas
RANLIB = ranlib
MGS = mgs.pentium

#  Platform postfix to use in naming executables and library files
PLAT = LINUX_GCC
