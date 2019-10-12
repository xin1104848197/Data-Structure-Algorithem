template <typename T> //����������������Ծ�棩
void Vector<T>::bubbleSort( Rank lo, Rank hi ) { //assert: 0 <= lo < hi <= size
	for( Rank last = --hi; lo < hi; hi = last )
	    for( Rank i = last = lo; i < hi; i++ )
			if( _elem[i] > _elem[i + 1] ) //��������
				swap( _elem[ last = i ], _elem[ i + 1 ] ); //������ʹ�ֲ�����
}
