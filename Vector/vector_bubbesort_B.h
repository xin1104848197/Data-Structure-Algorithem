template <typename T>
void vector<T>::bubbleSort( Rank lo, Rank hi ){//����������������ǰ��ֹ�棩
	for( bool sorted = false ; sorted = !sorted){
		for ( Rank i = lo ; i < hi-1 ; i++){
			if( _elem[i] > _elem[i+1] ){
				swap( _elem[i] , _elem[i+1] ); sorted = false ; }
		}
	}
}