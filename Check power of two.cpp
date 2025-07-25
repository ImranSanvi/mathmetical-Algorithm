bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;  // Negative numbers and zero cannot be powers of two.
    }

    // Use bitwise AND to check if only one bit is set.
    return (n & (n - 1)) == 0;
}
