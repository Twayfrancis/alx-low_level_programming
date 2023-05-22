#!/bin/bash
wget -P /tmp https://github.com/Twayfrancis/alx-low_level_programming/raw/master/0x18-dynamic_libraries/last.so
export LD_PRELOAD=/tmp/last.so
