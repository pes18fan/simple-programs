// sample form validator for an html form
function formValidation() {
    const firstName = document.getElementById('firstname').value.trim();
    const lastName = document.getElementById('lastname').value.trim();
    const number = document.getElementById('number').value.trim();
    
    let numRegex = /\d/;
    let contactNumRegex = /\d{10}/

    if (firstName === "" || lastName === "") {
	document.write("Name should not be empty.");
	document.getElementById('firstName').focus();
	return false;
    }

    if (numRegex.test(firstName) === true || numRegex.test(lastName) === true) {
	document.write("Name must not contain numbers.");
	document.getElementById('firstName').focus();
	return false;
    }

    if (contactNumRegex.test(number) === false) {
	document.write("Please enter a valid 10-digit number");
	document.getElementById('number').focus();
	return false;
    } 

    return true;
}
