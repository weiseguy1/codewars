#include <criterion/criterion.h>

int area_or_perimeter(int l,int w)
{
    return (l == w) ? (l * w) : (l * 2) + (w * 2);
}

Test(Basic_tests, Simple_tests) {
    cr_assert_eq(area_or_perimeter(3 , 3) , 9);
    cr_assert_eq(area_or_perimeter(6 , 10) , 32);
}
