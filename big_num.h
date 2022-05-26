typedef struct big_n {
    unsigned long long lower, upper;
} big_n_t;

static inline void add_big_n(big_n_t *output, big_n_t x, big_n_t y)
{
    output->upper = x.upper + y.upper;
    if (y.lower > ~x.lower)
        output->upper++;
    output->lower = x.lower + y.lower;
}
