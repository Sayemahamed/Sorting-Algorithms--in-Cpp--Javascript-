function quickSort(array, ascending = true) {
  if (array.length < 2) return array;
  let pivot = array[array.length - 1];
  let leftArray = [];
  let rightArray = [];
  for (let i = 0; i < array.length - 1; i++) {
    if (array[i] > pivot) {
      if (ascending) rightArray.push(array[i]);
      else leftArray.push(array[i]);
    } else {
      if (ascending) leftArray.push(array[i]);
      else rightArray.push(array[i]);
    }
  }
  return [
    ...quickSort(leftArray, ascending),
    pivot,
    ...quickSort(rightArray, ascending),
  ];
}

let array = [
  1, 2, 3, 34, 5, 56, 7, 4, 0, 343, 2, 21, 1, 1, 23, 34, 9, -3, 986, 7, 53,
];
console.log(quickSort(array));
console.log(quickSort(array, false));
