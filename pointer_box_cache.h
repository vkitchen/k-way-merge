/*
	POINTER_BOX.H
	-------------
	Copyright (c) 2017 Andrew Trotman
	Released under the 2-clause BSD license (See:https://en.wikipedia.org/wiki/BSD_licenses)
*/
/*!
	@file
	@brief A container type for pointers that allows comparison of the values pointed to the pointer
	@details All the usual pointer operations should work, except for comparisons which compare to the
	value pointed to rather than the pointer itself.  This is useful when, for example, an ordered conatiner
	is being used to store pointers (or, for example, std::sort() an array of pointers based on the values
	those pointers point to).
	@author Andrew Trotman
	@copyright 2017 Andrew Trotman
*/
#pragma once

#include "asserts.h"

namespace JASS
	{
	/*
		CLASS POINTER_BOX
		-----------------
	*/
	/*!
		@brief A boxed pointer object used so that comparison operators work on the value pointed to rather than the pointer
		@details All the usual pointer operations should work, except for comparisons which compare to the
		value pointed to rather than the pointer itself.  This is useful when, for example, an ordered conatiner
		is being used to store pointers (or, for example, std::sort() an array of pointers based on the values
		those pointers point to).  Note, ties are broken on the value of the pointer - that means that if the
		pointers are into an array then the earlier memeber of the array compares to less than the
		
*/
	template <typename TYPE>
	class pointer_box_inver_cache
		{
		private:
			TYPE *element;				///< We actually store a reference to the object rather than a pointer, but they're the same size.
			TYPE cache;
			
		public:
			/*
				POINTER_BOX::POINTER_BOX()
				--------------------------
			*/
			/*!
				@brief Constructor
			*/
			pointer_box_inver_cache()
				{
				/* Nothing */
				}

			/*
				POINTER_BOX::POINTER_BOX()
				--------------------------
			*/
			/*!
				@brief Constructor
				@param to [in] The object we are being a pointer to.
			*/
			pointer_box_inver_cache(TYPE *to) :
				element(to), cache(*to)
				{
				/* Nothing */
				}

			/*
				POINTER_BOX::OPERATOR<()
				------------------------
			*/
			/*!
				@brief Compare for less than.
				@param to [in] The object we are comparing to.
				@return true or false.
			*/
			bool operator<(const pointer_box_inver_cache<TYPE> to) const
				{
				return cache > to.cache;
				}

			/*
				POINTER_BOX::OPERATOR<=()
				-------------------------
			*/
			/*!
				@brief Compare for less than or equal to.
				@param to [in] The object we are Compareing to.
				@return true or false.
			*/
			bool operator<=(const pointer_box_inver_cache<TYPE> to) const
				{
				return cache >= to.cache;
				}

			/*
				POINTER_BOX::OPERATOR>()
				-------------------------
			*/
			/*!
				@brief Compare for greater than.
				@param to [in] The object we are Compareing to.
				@return true or false.
			*/
			bool operator>(const pointer_box_inver_cache<TYPE> to) const
				{
				return cache < to.cache;
				}



			/*
				POINTER_BOX::POINTER()
				----------------------
			*/
			/*!
				@brief Return the pointer this box holds.
				@return The boxed pointer
			*/
			TYPE *pointer() const
				{
				return element;
				}
			
			/*
				POINTER_BOX::OPERATOR->()
				-------------------------
			*/
			/*!
				@brief Pointer to member operator.
				@return A pointer to the object
			*/
			TYPE *operator->() const
				{
				return element;
				}

			/*
				POINTER_BOX::OPERATOR*()
				------------------------
			*/
			/*!
				@brief Value of operator.
				@return A reference to the value stored in the object
			*/
			TYPE &operator*() const
				{
				return *element;
				}

			/*
				POINTER_BOX::REFRESH()
				----------------------
			*/
			/*!
				@brief Refresh the cache. Must be called whenever contents modified.
			*/

			void refresh()
				{
				cache = *element;
				}
		};
	}
