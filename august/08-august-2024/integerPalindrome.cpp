bool isPalindrome(int num) {
  int startingNum = num;
  int res = 0;
  while (num != 0) {
    int takeLast = num % 10;
    res *= 10;
    res += takeLast;
    num /= 10;
  }
  if (startingNum == res) {
    return true;
  }
  return false;
}
