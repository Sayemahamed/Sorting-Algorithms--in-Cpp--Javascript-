function insertionSort(array, ascending = true) {
  for (let i = 1; i < array.length; i++) {
    let valueToInsert = array[i];
    let index = i;

    if (ascending) {
      while (index !== -1 && valueToInsert <= array[index]) {
        array[index] = array[index-1];index--;
      }
      array[++index] = valueToInsert;
    } else {
      while (index !== -1 && valueToInsert >= array[index]) {
        array[index] = array[index-1];index--;
      }
      array[++index] = valueToInsert;
    }
  }
}

let array = [
  1, 2, 3, 4, 5, 6, 7, 3, 2, 2, 4, 4, 5, 32, 2, 23, 4, 423, 4, 8, 4, 0,
];
insertionSort(array);
console.log(array);
insertionSort(array, false);
console.log(array);
