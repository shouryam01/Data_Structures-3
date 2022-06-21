function twoSum(A, size, x){
  for (var i = 0; i < (size-1); i++) {
    for (var j = i+1; j < size; j++) {
      if (A[i] + A[j]== x) {
        document.write("Pair with a given sum = " + x + "is (" + A[i] + ", " + A[j] + ")");

        return true;
      }
    }

  }

  return false;

}

let A = [0, -1, 2, -3, 1];
let x=-2;
let size = A.length;

if(twoSum(A, size, x)){
  document.write("valid Pair exists");
}

else {
  document.write("No valid pair exists for " + x);
}
