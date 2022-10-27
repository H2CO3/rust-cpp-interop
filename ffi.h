using std::int32_t;

struct Foo {
    int32_t (*array)[4];
};

extern "C" {
    void init_foo(Foo *foo);
}
