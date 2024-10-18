/**
 * coins[0] = pennies ==> $00.01
 * coins[1] = nickels ==> $00.05
 * coins[2] = dimes ==> $00.10
 * coins[3] = quarters ==> $00.25
 *
 * @format
 */

/**
 *
 * @param {int} cents
 * @returns {Array}
 */
function coinCombo(cents) {
	let res = new Array();

	if (cents >= 25) {
		res[3] = Math.floor(cents / 25);
		cents %= 25;
	} else res[3] = 0;

	if (cents >= 10) {
		res[2] = Math.floor(cents / 10);
		cents %= 10;
	} else res[2] = 0;

	if (cents >= 5) {
		res[1] = Math.floor(cents / 5);
		cents %= 5;
	} else res[1] = 0;

	if (cents >= 1) {
		res[0] = Math.floor(cents / 1);
		cents %= 1;
	} else res[0] = 0;

	return res;
}

let arr = coinCombo(6);
arr.forEach((e) => console.log(e));

/**
 * * Other solution
function coinCombo(cents) {
    let coins = [1,5,10,25];
    let combo = [0,0,0,0];
    for (let i = 3; i >= 0; i--) {
        combo[i] = Math.floor(cents / coins[i]);
        cents -= combo[i] * coins[i];
    }
    return combo;
}
 */
