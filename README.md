# Usage
```shell
openapi-generator-cli generate -i swagger-v3.json -g cpp-pistache-server -o ./petstore

cd petstore && mkdir build && cd build && cmake .. && make
# 上面make时会报错，将build/PISTACHE-prefix/src/PISTACHE/CMakeLists.txt中的tests部分注释掉
# 然后再次make
make
```
