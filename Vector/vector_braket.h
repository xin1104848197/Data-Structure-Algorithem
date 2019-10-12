template <typename T> T & vector<T>::[]( Rank r ){ //重载下标操作符
	return _elem[r]; }

template <typename T> const T &vector<T>::[] const (Rank r ){ //只能作为右值
	return _elem[r]; }