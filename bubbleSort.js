function bubbleSort(array, ascending = true) {
  for (let i = 0; i < array.length; i++) {
    for (let j = i + 1; j < array.length; j++) {
      if (array[i] > array[j]) {
        if (ascending) {
          let temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
      } else {
        if (!ascending) {
          let temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
      }
    }
  }
}
let array = [1,2,3,34,5,56,7,4,0,343,2,21,1,1,23,34,9,-3,986,7,53];
console.log(array);
bubbleSort(array);
console.log(array);
bubbleSort(array,false);
console.log(array);