template <typename T> T & vector<T>::[]( Rank r ){ //�����±������
	return _elem[r]; }

template <typename T> const T &vector<T>::[] const (Rank r ){ //ֻ����Ϊ��ֵ
	return _elem[r]; }