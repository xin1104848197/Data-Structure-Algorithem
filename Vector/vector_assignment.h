template <typename T> Vector<T>& vector<T>:: operator= ( vector<T> const& V ){ //深复制
	if( _elem ) delete [] _elem ;
	copyFrom (V._elem , 0 ,V._size() ); //整体复制
	return *this ; //返回当前对象的引用，以便链式赋值