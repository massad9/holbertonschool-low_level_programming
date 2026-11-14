# Green Tech Efficiency & Benchmarking Lab

## Task 3: Written Technical Report

### 1. Objective

The objective of this experiment was to measure the execution time of a multi-phase C program using the standard C library clock() function. The experiment measures dataset construction, data processing, checksum reduction, and total execution time.

### 2. Experimental Environment

- Programming language: C
- Compiler: GCC
- Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`
- Dataset size: 50,000 integers
- Random generator seed: 42
- Timing function: `clock()`
- Time conversion: `CLOCKS_PER_SEC`

All measurements were collected on the same machine and execution environment.

### 3. Measurement Methodology

The total timer starts immediately before `build_dataset()` and ends immediately after `reduce_checksum()`.

Each phase has its own timer, starting immediately before the function call and ending immediately after it returns.

Elapsed CPU time in seconds is calculated using:

`(double)(end - start) / CLOCKS_PER_SEC`

The original dataset generation, processing, and checksum algorithms were kept unchanged. Only timing instrumentation and output statements were added.

### 4. Measured Results

| Measurement | Time (seconds) | Share of total |
|---|---:|---:|
| Total | 0.000823 | 100.00% |
| Build dataset | 0.000291 | 35.36% |
| Process | 0.000342 | 41.56% |
| Reduce | 0.000181 | 21.99% |

### 5. Analysis

The measurements show the CPU time spent in each program phase during this execution.

- Dataset construction generates and stores 50,000 integer values.
- Processing performs arithmetic operations, division, modulo, and conditional checks on each element.
- Reduction calculates a checksum by iterating over the dataset and updating an accumulated value.

The phase with the largest measured duration represents the largest measured CPU-time contributor in this particular run. Very short measurements may be affected by timer resolution and system scheduling.

The sum of phase measurements may differ slightly from total execution time because each timing operation has overhead and the total timer includes the boundaries between phases.

### 6. Efficiency and Sustainability

Longer CPU execution generally means the processor remains active for more time. Reducing unnecessary operations and choosing efficient algorithms can reduce execution time and potentially energy consumption.

However, execution time is only an indirect proxy for energy usage. This experiment does not measure electrical power, energy consumption in joules, or carbon emissions. Actual energy measurement requires specialized hardware or profiling tools.

### 7. Limitations

- Results may vary between runs due to operating-system scheduling and system load.
- `clock()` measures processor time rather than wall-clock elapsed time.
- The experiment does not measure actual power consumption.
- A single execution is not sufficient to establish a statistically robust benchmark.

### 8. Conclusion

This experiment demonstrates how to instrument a multi-phase C program and compare the CPU time spent in its individual phases. The results provide evidence for identifying potential optimization targets. Fair benchmarking requires consistent environments, repeated measurements, and careful interpretation of timing data.

The reported values are from the actual execution recorded in `benchmark_results.txt`.
