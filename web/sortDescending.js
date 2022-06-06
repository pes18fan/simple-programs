// prompts to add a number ten times and sorts in descending order
let numbers = [];
let temp;

for (let i = 0; i < 10; i++) {
    let val = parseInt(prompt("Enter a number: "));
    numbers.push(val);
}

for (let i = 0; i <= 9; i++) {
    for (let j = i+1; j <= 10; j++) {
	if (numbers[j] > numbers[i]) { // change the > to < in this line for ascending order
	    temp = numbers[j];
	    numbers[j] = numbers[i];
	    numbers[i] = temp;
	}
    }
}

document.write(numbers);
