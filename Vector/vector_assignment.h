template <typename T> Vector<T>& vector<T>:: operator= ( vector<T> const& V ){ //���
	if( _elem ) delete [] _elem ;
	copyFrom (V._elem , 0 ,V._size() ); //���帴��
	return *this ; //���ص�ǰ��������ã��Ա���ʽ��ֵ