/*
*
* @param {int*} a
* @param {int*} b
*
* @return {void}
*
*/

void my_swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}