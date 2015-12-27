/*
This is a collection of functions for operating eQEP and PWM
on the TI AM335x Sitara Processors. These operate with direct memory access
instead of userspace drivers. Therefore this code must be run as root, but
they execute roughly 2 orders of magnitude faster than userspace drivers
depending on the exact function.

Note that a device tree overlay is still necessary to configure the
pin multiplexer and enable clock signal to each subsystem.
*/

#ifndef MMAP_PWMSS
#define MMAP_PWMSS

// eQEP
int init_eqep(int ss);
int read_eqep(int ch);
int write_eqep(int ch, int val);

// PWM
int init_pwm(int subsystem);
int set_pwm_freq(int subsystem, int hz);
int set_pwm_duty(int subsystem, char ch, float duty);

#endif



