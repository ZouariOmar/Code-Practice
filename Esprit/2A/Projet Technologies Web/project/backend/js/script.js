/**
 * @format
 * @file script.js
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @IDE VSC
 * @version 0.1
 * @date 30-09-2024
 * @copyright Copyright (c) 2024
 */

/**
 * @brief ### Submit the form
 */
function customSubmit() {
	var offer = {
		title: document.getElementById("titleSub").value,
		destination: document.getElementById("destination").value,
		departureDate: document.getElementById("departureDate").value,
		returnDate: document.getElementById("returnDate").value,
		price: document.getElementById("price").value,
		category: document.getElementById("category").value,
		availability: document.getElementById("availability").checked, // True or false
	};

	const offerJSON = JSON.stringify(offer);
	confirm("Are you sure ?");
	alert(offer.title);
}
