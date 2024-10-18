/** @format */

function euclideanDistance(point1, point2) {
	let res = 0;
	let len = point1.length;

	for (let i = 0; i < len; i++) {
		res += Math.pow(point1[i] - point2[i], 2);
	}

	// Calculate the square root and round to 2 decimal places
	return Math.round(Math.sqrt(res) * 100) / 100;
}

let [p1, p2] = [
	[-1, 2],
	[2, 4],
];
console.log(euclideanDistance(p1, p2));
