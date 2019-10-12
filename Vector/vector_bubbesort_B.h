template <typename T>
void vector<T>::bubbleSort( Rank lo, Rank hi ){//向量的起泡排序（提前终止版）
	for( bool sorted = false ; sorted = !sorted){
		for ( Rank i = lo ; i < hi-1 ; i++){
			if( _elem[i] > _elem[i+1] ){
				swap( _elem[i] , _elem[i+1] ); sorted = false ; }
		}
	}
}