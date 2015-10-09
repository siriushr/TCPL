// shellsort函数：按递增顺序对v[0]...v[n-1]进行排序

void shellsort(int v[], int n) {
	int gap, i, j, temp;

	for (gap = n / 2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
		}
	}
}

/*  该函数包括一个三重嵌套的for循环语句。
	最外层的for控制两个被比较元素之间的距离，
		从n/2开始，逐步进行对折，直到距离为0
	中间层的for用于在元素间移动位置 
	最内层的for用于比较各对相距gap个位置的元素，
		当这两个元素逆序时把它们互换过来

	由于gap值最终要递减到1，因此所有元素都会位于正确的位置上
*/