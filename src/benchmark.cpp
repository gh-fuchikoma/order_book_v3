#include <benchmark/benchmark.h>
#include <print>

static void hello(benchmark::State &state) {
  for (auto _ : state)
    std::println("Hello World!");
  state.SetItemsProcessed(state.iterations());
}

BENCHMARK(hello);
