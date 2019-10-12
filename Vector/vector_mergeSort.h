/***************************************************************
  归并排序：使用递归策略
 将整个向量分为左右向量，再将左向量分出左右向量，右向量分出左右向量......
 递归基的处理：当最后只剩lo,mi,hi三个元素，即不可再分时，使用merge算法归并
****************************************************************/

template <typename T>
void Vector<T>::mergeSort(Rank lo, Rank hi)
{
	if (hi - lo) < 2 return;
	int mi = (hi + lo) >> 1;
	mergeSort(lo, mi);
	mergeSort(mi, hi);
	merge(lo, mi, hi);
}