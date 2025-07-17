int min(int a, int b) {
    return (a < b) ? a : b;
}

int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1;
    int max = 0;

    while (left < right) {
        int distance = right - left;
        int area = min(height[left], height[right]) * distance;
        if (area > max) {
            max = area;
        }

        // Move the shorter height inward
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max;
}
