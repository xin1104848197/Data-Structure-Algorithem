/**************************************************************
向量容量不足时扩容：
1.若当前向量尚未满员，则不必扩容
2.若当前容量小于最小容量，则将其等于等于最小容量
3.创建一个新向量，使其容量为当前向量的二倍，再将原向量中的所有元素逐一复制至新向量
4.释放旧向量 
**************************************************************/

template <typename T>
void Vector<T>::expand()
{
	if ( _size < _capacity ) return ; //若向量未满员，则返回
	if ( _capacity < _DEFAULT_CAPACITY ) _capacity = _DEFAULT_CAPACITY ；//若向量容量未达到最小容量，则先让其等于最小容量 
	T* oldelem = _elem ; _elem = new T[_capacity << 1] ;//容量加倍 
	for (int i = 0 ; i < _size ; i++) 
	{
		elem[i] = oldelem[i]; //逐一复制向量内容 
	 } 
	delete []oldelem ;//释放原空间 
 } 
