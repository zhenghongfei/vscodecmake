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
} // namespace std11