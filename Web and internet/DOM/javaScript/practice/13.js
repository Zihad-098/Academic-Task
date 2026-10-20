// function findsmallest (a,b,c){
//     if (a>b && a>c){
//         return a ;
//     }
//     else if (b>a && b>c){
//         return b;
//     }
//     else {
//         return c ;
//     }
// }

// console.log(findsmallest(15,8,20));


function findsmallest (a,b,c) {
    let smallest = a ;

    if (b < smallest){
        return b ;
    }
    else if (c < smallest){
        return c 
    }
    return smallest
}
console.log(findsmallest(15,8,20))