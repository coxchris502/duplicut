#ifndef MEMINFO_H
# define MEMINFO_H


enum e_meminfo_param {
    MEMAVAILABLE
};

// long    meminfo(enum e_meminfo_param info);
long    meminfo(int info);


#endif /* ! MEMINFO_H */
