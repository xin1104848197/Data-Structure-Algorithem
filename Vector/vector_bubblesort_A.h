template <typename T>
void vector<T>::bubbleSort( Rank lo , Rank hi ){//向量的气泡排序（基本版）
	while( lo < --hi ){
		for( Rank i = lo ; i < hi ; i++ ){//逐个检查相邻元素
			if( _elem[i] >= _elem[i+1]) //若逆序
				swap( _elem[i] , _elem[i+1] ); //经过交换使局部顺序
		}
	}
}

