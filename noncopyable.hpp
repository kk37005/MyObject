MyObject
========
#ifndef __NONCOPYABLE__HPP__
#define __NONCOPYABLE__HPP__

namespace core
{

	namespace details
	{

		class noncopyable
		{

		protected:

			noncopyable() = default;

			~noncopyable() = default;

		private:

			noncopyable(const noncopyable&) = delete;

			noncopyable& operator = (const noncopyable&) = delete;

		};

	}/*namespace details*/

	typedef details::noncopyable noncopyable;

}/*namespace core*/

#endif/*__NONCOPYABLE__HPP__*/
