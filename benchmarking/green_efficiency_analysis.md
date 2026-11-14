# Green Tech Efficiency & Benchmarking Analysis

## Measurement Methodology

This experiment measured the execution time of the supplied C instrumentation program. The program operates on a static dataset containing 50,000 integers. Its execution consists of three phases: dataset construction, data processing, and checksum reduction.

The implementation uses the standard C library functions `clock()` and `CLOCKS_PER_SEC`. Each phase is measured by recording a starting `clock_t` value immediately before its function call and an ending value immediately after the function returns. CPU time in seconds is calculated by dividing the difference between these values by `CLOCKS_PER_SEC`.

Total execution time is measured immediately before dataset construction and immediately after checksum reduction. This provides a consistent boundary covering all three phases. The program was compiled using GCC with `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`.

The recorded measurements from the actual program execution were:

- Total: 0.000808 seconds.
- Build dataset: 0.000303 seconds.
- Process: 0.000347 seconds.
- Reduce: 0.000148 seconds.

## Observed Performance Differences

The recorded results show differences between the three measured phases. Dataset construction took 0.000303 seconds, data processing took 0.000347 seconds, and checksum reduction took 0.000148 seconds.

The longest measured phase was Data processing, at 0.000347 seconds. The shortest measured phase was Checksum reduction, at 0.000148 seconds.

The measured total CPU time was 0.000808 seconds. The individual phase measurements are useful for identifying where CPU time was spent during this execution. Their relative contributions were:

- Dataset construction: 37.50% of measured total CPU time.
- Data processing: 42.95% of measured total CPU time.
- Checksum reduction: 18.32% of measured total CPU time.

These observations describe this particular execution and do not establish that the same ranking will occur in every environment. The experiment preserves the original algorithmic operations and adds timing instrumentation rather than changing the workload.

## Relation Between Runtime and Energy Consumption

Execution time can provide an indirect indication of computational efficiency. A processor performing work for a longer period may consume more energy, depending on its power state, workload, hardware architecture, and operating conditions.

The measurements in this experiment establish CPU execution time, not actual electrical energy consumption. For example, the Data processing phase required 0.000347 seconds of measured CPU time. This identifies its duration in the experiment but does not establish its power consumption or carbon emissions.

Reducing unnecessary computation may improve runtime and can potentially reduce energy usage. However, an energy-saving conclusion requires actual power or energy measurements rather than execution time alone.

## Limitations of the Experiment

This experiment has several limitations. First, `clock()` measures processor time rather than wall-clock elapsed time. Second, very short execution phases may be affected by timer resolution and measurement overhead. Third, system activity and processor scheduling can influence results between runs.

Only one recorded execution is analyzed here. Repeated measurements would provide a stronger basis for comparing performance and calculating average execution times. Finally, the experiment does not measure watts, joules, temperature, or carbon emissions. Therefore, runtime cannot be treated as a direct measurement of energy consumption.

## Practical Engineering Takeaway

The practical lesson is that performance decisions should be supported by measurements rather than assumptions. Separating a program into measurable phases helps identify which operations account for the largest portion of its CPU execution time.

In this experiment, Data processing was the longest measured phase, while Checksum reduction was the shortest. These results provide a starting point for further investigation, not proof that optimization will necessarily improve energy efficiency.

A responsible engineering process should preserve a consistent workload, compile with the required flags, measure the same program boundaries, repeat benchmarks, and compare results before and after any optimization. Energy claims should be supported by dedicated power measurement tools. This approach makes performance analysis more reproducible and helps developers make evidence-based efficiency decisions.
