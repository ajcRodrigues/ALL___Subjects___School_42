int i;		/* переменная типа int */
int *p;		/* указатель на int */
int a[];	/* массив целых чисел */
int f();	/* функция, возвращающая int */
int **pp;	/* указатель на указатель на int */
int (*pa)[];	/* указатель на массив целых */
int (*pf)();	/* указатель на функцию, возвращающую int */
int *ap[];	/* массив указателей на int */
int aa[][];	/* массив массивов целых */
int *fp();	/* функция, возвращающая указатель на int */
int ***ppp;	/* указатель на указатель на указатель на int */
int (**ppa)[];	/* указатель на указатель на массив целых чисел */
int (**ppf)();	/* указатель на указатель на функцию, возвращающую int */
int *(*pap)[];	/* указатель на массив указателей int */
int (*paa)[][];	/* указатель на массив массивов целых чисел */
int *(*pfp)();	/* указатель на функцию, возвращающую указатель int */
int **app[];	/* массив указателей на указатели int */
int (*apa[])[];	/* массив указателей на массивы целых чисел */
int (*apf[])();	/* массив указателей на функции, возвращающие int */
int *aap[][];	/* массив массивов указателей int */
int aaa[][][];	/* массив массивов массивов int */
int **fpp();	/* функция, возвращающая указатель на int-указатель */
int (*fpa())[];	/* функция, возвращающая указатель на массив целых чисел */
int (*fpf())();	/* функция, возвращающая указатель на функцию, возвращающую int */
