// function findmax (a,b) {
//     if (a>b) {
//         return a ;
//     }
//     else {
//         return b ;
//     }
// }

// let result  = findmax(5,10);
// console.log (result);


function findmax (a,b,c) {
    if (a>b && a>c) {
        return a ;
    }
    else if (b>a && b>c){
        return b ;
    }
    else {
        return c ;
    }
}

console.log (findmax(10,20,30));