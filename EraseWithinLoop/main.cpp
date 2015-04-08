
#include <stdlib.h>
#include <set>
using namespace std;

int main()
{
	set< int > s;
	for ( int i = 0; i < 5; ++i )
	{
		s.insert( i );
	}

	// 錯誤例子
	for ( set< int >::iterator it = s.begin(); it != s.end(); ++it )
	{
		int i = (*it);
		if ( i == 2 )
			s.erase( it );
	}

	//// 方法#1
	//for ( set< int >::iterator it = s.begin(); it != s.end(); )
	//{
	//	int i = (*it);

	//	set< int >::iterator it2 = it;
	//	++it;
	//	if ( i == 2 )
	//		s.erase( it2 );
	//}

	//// 方法#2
	//for ( set< int >::iterator it = s.begin(); it != s.end(); )
	//{
	//	int i = (*it);

	//	if ( i == 2 )
	//	{
	//		s.erase( it++ );
	//		continue;
	//	}
	//	++it;
	//}

	//// 方法#3
	//for ( set< int >::iterator it = s.begin(); it != s.end(); )
	//{
	//	int i = (*it);

	//	if ( i == 2 )
	//	{
	//		it = s.erase( it );
	//		continue;
	//	}
	//	++it;
	//}

	//// 方法#4
	//for ( set< int >::iterator it = s.begin(); it != s.end(); )
	//{
	//	int i = (*it);

	//	//if ( i == 2 )
	//	//	s.erase( it );
	//	s.clear();

	//	if ( s.find( i ) == s.end() )
	//	{
	//		it = s.upper_bound( i );
	//		continue;
	//	}
	//	++it;
	//}

	//// 方法#5
	//set< int > waitDelete;
	//for ( set< int >::iterator it = s.begin(); it != s.end(); ++it )
	//{
	//	int i = (*it);

	//	if ( i == 2 )
	//		waitDelete.insert( i );
	//}
	//for ( set< int >::iterator it = waitDelete.begin(); it != waitDelete.end(); ++it )
	//{
	//	int i = (*it);
	//	s.erase( i );
	//}

	system( "pause" );
	return 0;
}
