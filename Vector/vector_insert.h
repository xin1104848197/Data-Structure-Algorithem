/*******************************************************
��Ԫ��e��Ϊ��Ϊr��Ԫ�ز��������У�
���ⷢ�����ǣ���Ҫ�Ӻ���ǰ�����ƶ�
1.����ǰ��������������������
2.�ƶ���Ϊr�Լ����׺
3.����e 
********************************************************/


template <typename T>
Rank Vector<T>::insert(Rank r,T const& e)
{
	expand(); //���б�Ҫ������
	for( int i = _size ; i > r ,i--)
	{
		elem[i]	= elem[i-1]; //�Ӻ���ǰ�����Ԫ��˳����һ����Ԫ 
	} 
	elem[r] = e ; size++ ;//������Ԫ�� 
	return r;
}
 