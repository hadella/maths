#include <criterion/criterion.h>

#include "../src/maths.h"

Test(maths_test, lcm_test)
{
	// Special case: u and v are 0
	cr_expect(lcm(0, 0) == 0, "lcm(0, 0) should be 0");
	// Special case: one of u or v is 0
	cr_expect(lcm(0, 3) == 0, "lcm(0, 3) should be 0");
	cr_expect(lcm(4, 0) == 0, "lcm(4, 0) should be 0");
	cr_expect(lcm(0, -7) == 0, "lcm(0, -7) should be 0");
	cr_expect(lcm(-5, 0) == 0, "lcm(-5, 0) should be 0");
	cr_expect(lcm(-4, 0) == 0, "lcm(-4,0) should be 0");
	// lcm is commutative
	cr_expect(lcm(4, 6) == 12, "lcm(4, 6) should be 12");
	cr_expect(lcm(6, 4) == 12, "lcm(6, 4) should be 12");
	// Negative numbers are treated as if positive
	cr_expect(lcm(-4, 6) == 12, "lcm(-4, 6) should be 12");
	cr_expect(lcm(-6, 4) == 12, "lcm(-6, 4) should be 12");
	cr_expect(lcm(4, -6) == 12, "lcm(4, -6) should be 12");
	cr_expect(lcm(6, -4) == 12, "lcm(6, -4) should be 12");
}

Test(maths_test, gcd_test)
{
	// Special case: one of u or v is 0
	cr_expect(gcd(3, 0) == 3, "gcd(3, 0) should be 3");
	cr_expect(gcd(0, 7) == 7, "gcd(0, 7) should be 7");
	cr_expect(gcd(-4, 0) == 4, "gcd(-4, 0) should be 4");
	cr_expect(gcd(0, -5) == 5, "gcd(0, -5) should be 5");
	// One of u or v is 1
	cr_expect(gcd(1, 7) == 1, "gcd(1, 7) should be 1");
	cr_expect(gcd(15, 1) == 1, "gcd(15, 1) should be 1");
	// gcd is commutative
	cr_expect(gcd(54, 24) == 6, "gcd(54, 24) should be 6");
	cr_expect(gcd(24, 54) == 6, "gcd(24, 54) should be 6");
	// Negative numbers are treated as if positive
	cr_expect(gcd(24, -54) == 6, "gcd(24, -54) should be 6");
	cr_expect(gcd(54, -24) == 6, "gcd(54, -24) should be 6");
	cr_expect(gcd(-24, 54) == 6, "gcd(-24, 54) should be 6");
	cr_expect(gcd(-54, 24) == 6, "gcd(-54, 24) should be 6");
	// General
	cr_expect(gcd(15, 10) == 5, "gcd(15, 10) should be 5");
}

Test(maths_test, nlm_test)
{
	// Notice these are not commutative!
	cr_expect(nlm(7, 3) == 9, "nlm(7, 3) should be 9");
	cr_expect(nlm(3, 7) == 7, "nlm(3, 7) should be 7");
	cr_expect(nlm(2, 5) == 5, "nlm(2, 5) should be 5");
	cr_expect(nlm(5, 2) == 6, "nlm(5, 2) should be 6");
	cr_expect(nlm(40, 13) == 52, "nlm(40, 13) should be 52");
	cr_expect(nlm(13, 40) == 40, "nlm(13, 40) should be 40");
	// Special case if u == 0
	cr_expect(nlm(0, 5) == 5, "nlm(0, 5) should be 5");
}

Test(maths_test, tri_test)
{
	cr_expect(tri(0) == 0, "tri(0) should be 0");
	cr_expect(tri(1) == 1, "tri(1) should be 1");
	cr_expect(tri(2) == 3, "tri(2) should be 3");
	cr_expect(tri(20) == 210, "tri(20) should be 210");
}

Test(maths_test, rotate_test)
{
	size_t range = 8 * sizeof(int);

	unsigned int n = 1;
	for (int i = 0; i < range; ++i) {
		cr_expect(rotate(n, i) == 1 << i, "rotate(%d, %d) should be %d", n, i, 1 << i);
		// printf("rotate(%u,%d) should be %u\n", n, i, 1 << i);
	}

	n = 1 << range - 1; // On 32-bit machine this is 0x80000000
	for (int i = 0; i < range; ++i) {
		cr_expect(rotate(n, -i) == 1 << range - 1 - i, "rotate(%u, %d) should be %u", n, -i, 1 << range - 1 - i);
		// printf("rotate(%u, %d) = %u, should be %u\n", n, -i, rotate(n, -i), 1 << range - 1 - i);
	}

	cr_expect(rotate(0xDEADBEEF, 4) == 0xEADBEEFD, "rotate(0xDEADBEEF, 4) should be 0xEADBEEFD");
	cr_expect(rotate(0xDEADBEEF, -8) == 0xEFDEADBE, "rotate(0xDEADBEEF, -8) should be 0xEFDEADBE");
}
