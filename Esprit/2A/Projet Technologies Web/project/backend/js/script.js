/**
 * @format
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

	if (is_valid(offer)) alert("Submission Successfully Added!");
	else alert("Submission Failed!");
}

/**
 * @brief ### Verifier if the form respect the criteria
 */
function is_valid(form) {
	if (form.title.length < 3) {
		alert("Pls, use at least 3 chars!");
		return false;
	}

	const pattern = "[A-Za-zs]{3,}";

	if (!pattern.test(form.destination)) {
		alert("Pls, match the requested format!");
		return false;
	}

	return true;
}
