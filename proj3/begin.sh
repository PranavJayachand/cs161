#!/bin/bash
set -e

pip3 install --requirement requirements.txt
FLASK_APP=server.py flask run
