#include <criterion/criterion.h>

void count_by(unsigned x, unsigned n, unsigned result[n])
{
    unsigned position = 0;
    unsigned upper = x * n;

    for (unsigned i = x; i <= upper; i += x)
    {
        result[position] = i;
        position++;
    }
}


void count_by(unsigned, unsigned, unsigned[]);
void assert_count_by(unsigned x, unsigned n, const unsigned expected[n]);

Test(Fixed_Tests, Fixed_Tests) {
  assert_count_by(1, 5, (unsigned[]) {1, 2, 3, 4, 5});
  assert_count_by(2, 5, (unsigned[]) {2, 4, 6, 8, 10});
  assert_count_by(3, 5, (unsigned[]) {3, 6, 9, 12, 15});
  assert_count_by(50, 5, (unsigned[]) {50, 100, 150, 200, 250});
  assert_count_by(100, 5, (unsigned[]) {100, 200, 300, 400, 500});
}
