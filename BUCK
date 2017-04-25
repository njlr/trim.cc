cxx_library(
  name = 'trim',
  header_namespace = 'trim',
  exported_headers = [
    'trim.h',
  ],
  srcs = [
    'trim.cc',
  ],
  visibility = [
    'PUBLIC',
  ],
)

cxx_binary(
  name = 'test',
  srcs = [
    'test.cc',
  ],
  deps = [
    ':trim',
  ],
)

cxx_test(
  name = 'gtest',
  srcs = [
    'gtest.cc',
  ],
  deps = [
    ':trim',
  ],
)
