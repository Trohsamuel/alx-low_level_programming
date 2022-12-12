#!/bin/bash
wget -P /tmp https://github.com/Trohsamuel/alx-low_level_programming/tree/main/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
