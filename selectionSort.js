function selectionSort(array) {
  for (let i = 0; i < array.length - 1; i++) {
    let minIndex = getMinIndex(i, array);
    if (i !== minIndex) {
      let tmp = array[i];
      array[i] = array[minIndex];
      array[minIndex] = tmp;
    }
  }
}
function getMinIndex(idx, array) {
  let minIndex = idx;
  let minValue = array[minIndex];
  for (let i = idx; i < array.length; i++) {
    if (array[i] < minValue) {
      minIndex = i;
      minValue = array[i];
    }
  }
  return minIndex;
}
let array = [
  1, 2, 3, 34, 5, 56, 7, 4, 0, 343, 2, 21, 1, 1, 23, 34, 9, -3, 986, 7, 53,
];
selectionSort(array);
console.log(array);
