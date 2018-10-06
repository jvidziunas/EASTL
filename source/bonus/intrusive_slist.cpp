///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Electronic Arts Inc. All rights reserved.
///////////////////////////////////////////////////////////////////////////////

#include <EASTL/bonus/intrusive_slist.h>


namespace eastl
{


	EASTL_API void intrusive_slist_base::reverse()
	{
		intrusive_slist_node* pNode = mpNext;
		do {
			intrusive_slist_node* const pTemp = pNode->mpNext->mpNext;
			pNode->mpNext = pNode;
			pNode = pTemp;
		} while( pNode != mpNext );
	}


} // namespace eastl

















