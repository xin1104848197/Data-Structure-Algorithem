template <typename T>
void vector<T>::copyFrom( A , Rank lo , Rank hi ){//以A[lo,hi)为蓝本复制向量
	_elem = new T[ _capacity = 2 * ( hi - lo )] ; _size = 0 ;// 容量扩大二倍 
	while ( lo < hi ){//直至所有element被复制 
		_elem[_size++] = A[lo++];} 
}
