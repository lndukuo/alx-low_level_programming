#!/bin/bash

git add .

read -p "Enter your commit message: " commit_message

git commit -m "$commit_message"

git push origin HEAD
