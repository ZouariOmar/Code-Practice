/**
 * ************************************************
 * *************************************************
 *
 * @format
 * @file script.js
 * @team NONE
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @IDE VSC
 * @version 0.1
 * @date 2024-06-06
 * @copyright Copyright (c) 2024
 */

function customSubmit() {
	var offer = {
		title: document.getElementById("titleSub").value,
		destination: document.getElementById("destination").value,
	};

	const offerJSON = JSON.stringify(offer);
	alert(offer.title);
}
