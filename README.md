# ft_printf
recoded printf function in C for Codam college assignment


FT_PRINTF asks the student to recode the printf() function in C. This gives students an introduction to variadic arguments and code management, as several types must be implemented.

TYPES:
%d/%i		integer			/*	All with the following flags: hh, h, l, ll
%o			octal			/*
%u			unsigned int	/*
%x/%X		hex				/*

%f			float			/* with flags l, L

%c			char
%s			string
%p			pointer

%%			(Edge case)

FLAGS:
#
0
-
+
' ' (space)	

Minimum field width (numbers before a specifier type) as well as precision are also included.

As a bonus:
*			Wildcard (allows for another value to be used as precision/width)
%b			Binary
%jd			intmax_t
%zd			size_t
Colors (see header file for how to implement)
Buffer Management (a buffer string is filled and doesn't print until EITHER it is full with a variable size (BUF_SIZE in header file) OR the format string is finished.



1. Use 'make' to compile.
2. To test the function, a test file is provided. Run 'make test' to check. To edit parameters, edit main.c.

More information can be found in the PDF 'ft_printf.en.pdf'.
