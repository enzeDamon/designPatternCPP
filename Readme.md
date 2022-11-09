# Factory mode
对于factory 三个mode可以用 g++ main.cpp -D _FACTORY 来进行激活, https://blog.csdn.net/qq_52670477/article/details/126629335 可以看到更好的解析
# singleton
没有打其它的作为测试语句。主要是观察了一下 c++ 中的静态属性实例化的问题。c++要求类外初始化静态属性，这个我们就放在main.cpp就行了。记住空指针要nullptr，否则会产生野指针。 编译语句为g++ main.cpp -D _SINGLETON
# builder pattern
一个是内部类方案对c++ 不行，因为cpp 没有static 类属性。同时其类之间由于有相互引用等一系列问题，所以申明方面也比较棘手。建议不要对cpp使用builder pattern。编译语句为g++ main.cpp -D _BUILDER