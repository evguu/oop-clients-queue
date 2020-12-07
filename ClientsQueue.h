#pragma once
#include "Client.h"
#include "FixSizedQueue.h"

template <int SIZE>
using ClientsQueue = FixSizedQueue<Client, SIZE>;
