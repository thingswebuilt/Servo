set(OUTPUT_NAME servo_sweep)
add_executable(${OUTPUT_NAME} main.cpp)

target_link_libraries(${OUTPUT_NAME}
        Servo
)

# enable usb output
pico_enable_stdio_usb(${OUTPUT_NAME} 1)

pico_add_extra_outputs(${OUTPUT_NAME})