#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x01)
#endif

namespace SDK
{
	template<typename T>
	class TArray
	{
	private:
		T* _data;                                                   // 0x0000(0x0000)
		int32_t                                                    _count;                                                  // 0x0000(0x0000)
		int32_t                                                    _max;                                                    // 0x0000(0x0000)

		friend class FString;
	public:
		TArray()
		{
			_data = nullptr;
			_count = 0;
			_max = 0;
		}

		T* Data() const
		{
			return _data;
		}

		int32_t Count() const
		{
			return _count;
		}

		int32_t Max() const
		{
			return _max;
		}

		bool IsValidIndex(int32_t i) const
		{
			return i < _count;
		}

		T& operator[](int32_t i)
		{
			return _data[i];
		}

		const T& operator[](int32_t i) const
		{
			return _data[i];
		}

		// Adding iterator functionality
		class iterator
		{
		public:
			using iterator_category = std::random_access_iterator_tag;
			using value_type = T;
			using difference_type = std::ptrdiff_t;
			using pointer = T*;
			using reference = T&;

			iterator(pointer ptr) : _ptr(ptr) {}

			reference operator*() const { return *_ptr; }
			pointer operator->() { return _ptr; }
			iterator& operator++() { _ptr++; return *this; }  // prefix increment
			iterator operator++(int) { iterator temp = *this; ++(*this); return temp; }  // postfix increment
			friend bool operator==(const iterator& a, const iterator& b) { return a._ptr == b._ptr; }
			friend bool operator!=(const iterator& a, const iterator& b) { return a._ptr != b._ptr; }

		private:
			pointer _ptr;
		};

		iterator begin() const { return iterator(_data); }
		iterator end() const { return iterator(_data + _count); }

	};
}