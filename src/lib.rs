static ARRAY: [[i32; 4]; 4] = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [1, 3, 5, 7],
    [2, 4, 6, 8],
];

#[repr(C)]
pub struct Foo {
    pub array: *const [i32; 4],
}

#[no_mangle]
pub extern "C" fn init_foo(foo: &mut Foo) {
    foo.array = ARRAY.as_ptr();
}
