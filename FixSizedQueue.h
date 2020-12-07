#pragma once

template <class T, int SIZE>
class FixSizedQueue
{
private:
	T queue[SIZE];
	int start, end, count;
	int advanceIndex(int index) { return (index + 1) % SIZE; };
public:
	FixSizedQueue() : start(0), end(0), count(0) {};

	void clear()
	{
		start = 0;
		end = 0;
		count = 0;
	}

	bool push(const T &obj)
	{
		if (count == SIZE)
		{
			return false;
		}
		queue[end] = obj;
		end = advanceIndex(end);
		count++;
		return true;
	}

	T pop()
	{
		if (count == 0)
		{
			throw "Tried to pop empty queue.";
		}
		int tmp = start;
		start = advanceIndex(start);
		count--;
		return queue[tmp];
	}

	T peek() const
	{
		if (count == 0)
		{
			throw "Tried to peek empty queue.";
		}
		return queue[start];
	}

};
