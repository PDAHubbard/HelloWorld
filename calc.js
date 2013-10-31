<!-- World's smallest live calculator -->

function lowerCase(input) {
    setTimeout(function () {
        input.value = input.value.toLowerCase();
    }, 0);
}

function calculate(input) {
    setTimeout(function () {
        calculation.result.value = eval(calculation.input.value);
    }, 0);
}

<form name="calculation">
    <input type='text' name="input" onkeypress="calculate(this)">
    <input type='text' name='result'>
</form>
