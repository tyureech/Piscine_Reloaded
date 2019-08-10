#!/bin/sh
find * -name "*.sh" -exec basename {} ";" -type f | sed 's/\.sh$//g'
