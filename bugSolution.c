int main() {
  int x = 10;
  int *ptr = &x; 
  if (ptr != NULL) { //Check if ptr is valid
    *ptr = 20;
    int y = *ptr + 10; 
    printf("%d", y);
  }
  else {
    printf("Error: Invalid pointer");
  }
  return 0; 
}