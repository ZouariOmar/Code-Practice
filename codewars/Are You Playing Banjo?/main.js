/**
 * @format
 * @param {string} name
 * @returns {string}
 */
function areYouPlayingBanjo(name) {
	return name[0].toLowerCase() === "r"
		? name + " plays banjo"
		: name + " does not play banjo";
}


console.log(areYouPlayingBanjo("Rmar"));