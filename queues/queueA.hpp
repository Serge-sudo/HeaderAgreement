#include <stdexcept>

template<class T>
class QueueA {
 public:
    QueueA() noexcept;

    ~QueueA() noexcept;

    bool empty() const noexcept;

    void push(const T& item) noexcept;

    void pop() noexcept(false);

    const T& front() const noexcept(false);
 private:
    void expand() noexcept;

    T *data;
    int32_t head;
    int32_t tail;
    int32_t capacity;
};