template <typename T>
void vector<T>::bubbleSort( Rank lo , Rank hi ){//�������������򣨻����棩
	while( lo < --hi ){
		for( Rank i = lo ; i < hi ; i++ ){//����������Ԫ��
			if( _elem[i] >= _elem[i+1]) //������
				swap( _elem[i] , _elem[i+1] ); //��������ʹ�ֲ�˳��
		}
	}
}

