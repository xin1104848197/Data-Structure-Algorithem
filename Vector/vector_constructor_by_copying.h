template <typename T>
void vector<T>::copyFrom( A , Rank lo , Rank hi ){//��A[lo,hi)Ϊ������������
	_elem = new T[ _capacity = 2 * ( hi - lo )] ; _size = 0 ;// ����������� 
	while ( lo < hi ){//ֱ������element������ 
		_elem[_size++] = A[lo++];} 
}
