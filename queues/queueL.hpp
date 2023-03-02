#include <stdexcept>

template<typename T>
class QueueL {
    struct Node {
        T data_;
        Node *next_{nullptr};
        Node(const T& d) : data_(d) {}
    };
    Node *front{nullptr};
    Node *rear{nullptr};
 public:
    QueueL() noexcept = default;

    ~QueueL() noexcept;

    bool isEmpty() const noexcept;

    void enqueue(const T& data) noexcept;

    void dequeue() noexcept(false);

    const T& peek() const noexcept(false);
};
