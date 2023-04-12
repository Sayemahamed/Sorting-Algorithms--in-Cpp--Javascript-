function mergeSort(array) {
  if (array.length < 2) return array;
  let mid = Math.floor(array.length / 2);
  let leftArray = array.slice(0, mid);
  let rightArray = array.slice(mid, array.length);
  return merge(mergeSort(leftArray), mergeSort(rightArray));
}
function merge(leftArray, rightArray) {
  let ans = [];
  while (leftArray.length && rightArray.length) {
    if (leftArray[0] < rightArray[0]) {
      ans.push(leftArray.shift());
    } else {
      ans.push(rightArray.shift());
    }
  }
  return [...ans, ...leftArray, ...rightArray];
}
let array = [
  1, 2, 3, 34, 5, 56, 7, 4, 0, 343, 2, 21, 1, 1, 23, 34, 9, -3, 986, 7, 53,
];
console.log(mergeSort(array));
