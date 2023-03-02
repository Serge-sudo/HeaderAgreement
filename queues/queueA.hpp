#include <stdexcept>

template<class T>
class QueueA {
 public:
    QueueA() noexcept;

    ~QueueA() noexcept;

    bool isEmpty() const noexcept;

    int32_t size() const noexcept;

    void enqueue(const T& item) noexcept;

    T dequeue() noexcept(false);

    const T& peek() const noexcept(false);
 private:
    void expand() noexcept;

    T *data;
    int32_t front;
    int32_t rear;
    int32_t capacity;
};