namespace std11
{
    class TestNoExpect
    {
    public:
        void TestNoExpectForThrow();

    private:
        void Throw();
        void NotBlockThrow();
        void BlockThrow() noexcept;
    };

    class TestAuto
    {
    public:
        void TestAutoUsed();

    private:
        template <typename T, typename U>
        void Mutiply1(T &t, U &u);

        template <typename T, typename U>
        auto Mutiply2(T &t, U &u);
    };

    class TestThread
    {
    public:
        void TestThreadRun();
    };
} // namespace std11