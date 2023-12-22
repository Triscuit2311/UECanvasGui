#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x01)
#endif

namespace SDK
{
	template<typename T>
	class TArray
	{
	protected:
		T* Data;
		int32 NumElements;
		int32 MaxElements;

	public:

		inline TArray()
			:NumElements(0), MaxElements(0), Data(nullptr)
		{
		}

		inline TArray(int32 Size)
			: NumElements(0), MaxElements(Size), Data(reinterpret_cast<T*>(malloc(sizeof(T)* Size)))
		{
		}

		inline T& operator[](uint32 Index)
		{
			return Data[Index];
		}
		inline const T& operator[](uint32 Index) const
		{
			return Data[Index];
		}

		inline int32 Num()
		{
			return NumElements;
		}

		inline int32 Max()
		{
			return MaxElements;
		}

		inline int32 GetSlack()
		{
			return MaxElements - NumElements;
		}

		inline bool IsValid()
		{
			return Data != nullptr;
		}

		inline bool IsValidIndex(int32 Index)
		{
			return Index >= 0 && Index < NumElements;
		}

		inline void ResetNum()
		{
			NumElements = 0;
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

		iterator begin() const { return iterator(Data); }
		iterator end() const { return iterator(Data + NumElements); }

	};
}