# NOI

1.RUN CODE FASTER
std::ios::sync_with_stdio(false);
std::cin.tie(nullptr);


std::ios::sync_with_stdio(false) and std::cin.tie(nullptr) are both used to improve the performance of input and output operations in C++.

std::ios::sync_with_stdio(false) disables the synchronization between the C++ input and output streams and the C standard input and output streams. This can improve the performance of input and output operations, especially when large amounts of data are being read or written. However, it can also cause unexpected behavior if both C and C++ input and output functions are used in the same program.

std::cin.tie(nullptr) unties the input stream cin from the output stream cout. This can improve performance by preventing the flushing of the output buffer every time input is read from cin. By default, when cin and cout are tied together, input operations will cause the output buffer to be flushed, which can slow down the program.

In summary, these lines are used to improve the performance of input and output operations in C++, and can be particularly useful when working with large inputs or when optimizing program performance. However, they should be used with care, as they can cause unexpected behavior if used improperly.
