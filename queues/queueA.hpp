#ifndef QUEUE_A_HEADER_FILE_H
#define QUEUE_A_HEADER_FILE_H

template<class T>
class QueueA {
 public:
    QueueA() noexcept;

    ~QueueA() noexcept;

    bool empty() const noexcept;

    void push(const T& item) noexcept;

    void pop() noexcept;

    const T& front() const;
 private:
    void expand() noexcept;

    T *data;
    int32_t head;
    int32_t tail;
    int32_t capacity;
};

#endif // QUEUE_A_HEADER_FILE_H