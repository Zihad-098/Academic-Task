function checkResult (name , marks) {
    if (marks >= 40){
        return name + "passed"
    }
    else {
        return name + "Failed";
    }
}

let result1 = checkResult("Zihad ",30);
let result2 = checkResult ("Anika ",100);

console.log(result1);
console.log (result2);