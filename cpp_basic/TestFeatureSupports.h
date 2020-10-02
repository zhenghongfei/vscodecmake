namespace basic
{
    enum FeatureSupports
    {
        C99 = 0x0001,
        ExtInt = 0x0002,
        SAssert = 0x0004,
        NoExcept = 0x0008,
        SMAX = 0x0010,
    };

    struct Compiler
    {
        const char *name;
        int spp;
    };

    void TestFeatureSupports();
} // namespace basic