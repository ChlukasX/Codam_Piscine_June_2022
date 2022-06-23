#!/bin/bash

FT_USER=daemon

id -nG $FT_USER | tr ' ' ','
