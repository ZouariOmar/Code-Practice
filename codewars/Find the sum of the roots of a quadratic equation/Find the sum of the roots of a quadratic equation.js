/**
 * @format
 * @link https://en.wikipedia.org/wiki/Quadratic_equation
 */

/**
 * @brief Find the sum of the roots of a quadratic equation
 * @param {int} a
 * @param {int} b
 * @param {int} c
 * @returns null or int
 */
function roots(a, b, c) {
	// Calculate the discriminant
	const discriminant = b * b - 4 * a * c;

	// If the discriminant is negative, there are no real roots
	if (discriminant < 0) return null;

	// Calculate the two possible roots
	const root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
	const root2 = (-b - Math.sqrt(discriminant)) / (2 * a);

	return parseFloat((root1 + root2).toFixed(2));
}

/**
 * @brief Test the root function
 * @param {function} actual
 * @param {int} expected
 */
function assertEquals(actual, expected) {
	if (actual === expected) {
		console.log(`Test passed: expected ${expected}, got ${actual}`);
	} else {
		console.error(`Test failed: expected ${expected}, got ${actual}`);
	}
}

// Basic tests
assertEquals(roots(1, -35, -23), 35);
assertEquals(roots(6, 0, -24), 0);
assertEquals(roots(-5, 21, 0), 4.2);
assertEquals(roots(6, 4, 8), null);
assertEquals(roots(1, 5, -24), -5);
assertEquals(roots(3, 11, 6), -3.67);
assertEquals(roots(2, 2, 9), null);
assertEquals(roots(1, -5 / 3.0, -26), 1.67);
assertEquals(roots(1, 6, 10), null);
assertEquals(roots(7, -2, -5), 0.29);
assertEquals(roots(1, 8, 20), null);
assertEquals(roots(2, 3, -2), -1.5);
assertEquals(roots(1, 4, 12), null);
assertEquals(roots(3, -2, -5), 0.67);
assertEquals(roots(3, 4, 9), null);
assertEquals(roots(5, 4, 0), -0.8);
assertEquals(roots(4, -5, 0), 1.25);
assertEquals(roots(1, 4, 9), null);
assertEquals(roots(1, 0, -49), 0);
assertEquals(roots(2, 8, 8), -4);
assertEquals(roots(1, 0, -0.16), 0);
assertEquals(roots(1, 6, 12), null);
assertEquals(roots(1, 0, -9), 0);
assertEquals(roots(-3, 0, 12), 0);
assertEquals(roots(1, 3, 9), null);
assertEquals(roots(3, 7, 0), -2.33);
assertEquals(roots(5, 3, 6), null);
assertEquals(roots(1, 4, 4), -4);
assertEquals(roots(-1, 0, 5.29), 0);
assertEquals(roots(1, 12, 36), -12);
assertEquals(roots(1, 0, -0.09), 0);
assertEquals(roots(2, 5, 11), null);
assertEquals(roots(3, 0, -15), 0);
assertEquals(roots(1, -3, 0), 3);
assertEquals(roots(1, 8, 16), -8);
assertEquals(roots(2, 6, 9), null);
assertEquals(roots(-1, 36, 0), 36);
assertEquals(roots(5, -8, 0), 1.6);
assertEquals(roots(1, 5, 12), null);
assertEquals(roots(-14, 0, 0), 0);
assertEquals(roots(1, 7, 20), null);
assertEquals(roots(1, -6, 0), 6);
assertEquals(roots(1, -11, 30), 11);
assertEquals(roots(1, 3, 12), null);
assertEquals(roots(1, 6, 9), -6);

/**
 * * Other Solution 1
function roots(a,b,c) {
  let d = b*b - 4 * a * c;
  if (d < 0) return null;
  return +(-b/a).toFixed(2);
}

 * * Other Solution 2
roots=(a,b,c)=>b*b-4*a*c<0?null:Math.round(-b/a*100)/100;
 */
