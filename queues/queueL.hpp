#include <stdexcept>

template<typename T>
class QueueL {
    struct Node {
        T data_;
        Node *next_{nullptr};
        Node(const T& d) : data_(d) {}
    };
    Node *head{nullptr};
    Node *tail{nullptr};
    int32_t size_{0};
 public:
    QueueL() noexcept = default;

    ~QueueL() noexcept;

    bool empty() const noexcept;

    int32_t size() const noexcept;

    void push(const T& data) noexcept;

    void pop() noexcept(false);

    const T& front() const noexcept(false);
};